#include<iostream>
#include<iomanip> // to use setw()
using namespace std;

int forFirstWeek(int year){
    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7; //algorithm for day
    return day;
}

int main(){
    //system("Color 3F");
    int year, daysInMonth, weekDays=0, startingDay;
    cout << "Enter the year: " << endl;
    cin >> year;
    string listOfMonths[12] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
    int daysOfMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((year % 4==0 && year % 100!=0) || year % 400 == 0){ //condition for leap year
        daysOfMonths[1] = 29; // set leap year month february for 29
    }

    startingDay = forFirstWeek(year);
    
    for(int i=0; i<12 ; i++){
        daysInMonth = daysOfMonths[i];
        cout << "----------------" << listOfMonths[i] << "--------------" << endl;
        cout << "   Sun   Mon    Tue   Wed   Thurs  Fri  Sat" << endl;

        for(weekDays=0; weekDays < startingDay; weekDays++){
            cout << "      ";
        }
    
        for(int j=1; j<=daysInMonth; j++){
            cout << setw(6) << j;

            if(++weekDays > 6){
                cout << endl;
                weekDays=0;
            }
            startingDay = weekDays;
        }
        cout << endl;
    }
}