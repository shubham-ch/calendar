# C++ Calendar 📅

A simple command-line calendar application written in **C++**.

The program takes a year as input from the user and generates the calendar for that entire year.

## Overview

This project was created to practice fundamental C++ programming concepts, particularly working with dates, loops, conditional logic, functions, and console-based input/output.

The user provides a year, and the program calculates and displays the corresponding calendar.

## Features

* 📅 Generate a calendar for any given year
* ⌨️ User input through the command line
* 🗓️ Displays all months of the selected year
* 🔢 Calculates the appropriate day arrangement
* 💻 Simple console-based interface
* 🚀 Lightweight C++ application with no external dependencies

## Technology

* **C++**
* Standard C++ libraries
* Command-line interface

## How It Works

The program follows a simple workflow:

```text
        ┌──────────────────┐
        │   Start Program  │
        └────────┬─────────┘
                 │
                 ▼
        ┌──────────────────┐
        │   Enter Year     │
        └────────┬─────────┘
                 │
                 ▼
        ┌──────────────────┐
        │ Calculate Dates  │
        │ & Day Positions  │
        └────────┬─────────┘
                 │
                 ▼
        ┌──────────────────┐
        │ Display Calendar │
        └──────────────────┘
```

The program processes the entered year and prints the calendar month by month in the terminal.

## Example

```text
Enter year: 2024

January
Su Mo Tu We Th Fr Sa
    1  2  3  4  5  6
 7  8  9 10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30 31
```

The program continues by displaying the remaining months of the selected year.

## Getting Started

### Prerequisites

You need a C++ compiler installed on your system.

Examples include:

* GCC / G++
* Clang
* Microsoft Visual C++

### Clone the Repository

```bash
git clone https://github.com/shubham-ch/calendar.git
cd calendar
```

### Compile

Using `g++`:

```bash
g++ calendar.cpp -o calendar
```

> Replace `calendar.cpp` with the actual C++ source filename if it is different in the repository.

### Run

**Linux/macOS:**

```bash
./calendar
```

**Windows:**

```bash
calendar.exe
```

Enter the year when prompted and the corresponding calendar will be displayed.

## Concepts Practiced

This project helped me practice fundamental C++ concepts including:

* Variables and data types
* Console input/output
* Conditional statements
* Loops
* Functions
* Arrays/data structures
* Date and calendar calculations
* Modular arithmetic
* Formatting console output

## Future Improvements

Possible improvements include:

* Support for multiple calendar formats
* Better console formatting
* Highlighting weekends
* Leap-year handling improvements
* Navigation between years
* Adding a graphical user interface
* Adding support for specific dates and weekdays

## Author

**Shubham**

GitHub:
https://github.com/shubham-ch

## License

This project is intended for educational and personal use.
