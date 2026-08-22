# Digital Logic Gate System

A C-based console application that demonstrates fundamental digital
logic gates and generates their truth tables.

## Overview

The **Digital Logic Gate System** is a menu-driven C program designed to
demonstrate the basic operations of digital logic gates using binary
inputs (`0` and `1`).

The system supports:

-   AND Gate
-   OR Gate
-   NOT Gate
-   NAND Gate
-   NOR Gate
-   XOR Gate
-   XNOR Gate
-   Complete Truth Table

The program also validates user input and accepts only binary values for
gate operations.

## Features

-   Interactive console-based menu
-   Seven fundamental logic gates
-   Binary input validation
-   Individual gate output calculation
-   Complete truth table generation
-   Simple and beginner-friendly C implementation
-   Uses functions for each logic-gate operation

## Logic Gates

  Gate   Operation
  ------ -------------
  AND    `A && B`
  OR     `A || B`
  NOT    `!A`
  NAND   `!(A && B)`
  NOR    `!(A || B)`
  XOR    `A ^ B`
  XNOR   `!(A ^ B)`

## Truth Table

  A   B   AND   OR   NAND   NOR   XOR   XNOR
  --- --- ----- ---- ------ ----- ----- ------
  0   0   0     0    1      1     0     1
  0   1   0     1    1      0     1     0
  1   0   0     1    1      0     1     0
  1   1   1     1    0      0     0     1

## Project Structure

``` text
Digital-Logic-Gate-System/
│
├── Digital_Logic_Gate_System.c
├── README.md
└── .gitignore
```

## Requirements

-   C compiler such as GCC
-   Command-line terminal
-   Basic C programming environment

## How to Run

### 1. Clone the repository

``` bash
git clone https://github.com/vinaybongale-16/Digital-Logic-Gate-System.git
cd Digital-Logic-Gate-System
```

### 2. Compile the program

Using GCC:

``` bash
gcc Digital_Logic_Gate_System.c -o Digital_Logic_Gate_System
```

### 3. Run the program

On Windows:

``` bash
Digital_Logic_Gate_System.exe
```

On Linux/macOS:

``` bash
./Digital_Logic_Gate_System
```

## Menu

``` text
====================================
       DIGITAL LOGIC GATE SYSTEM
====================================

1. AND Gate
2. OR Gate
3. NOT Gate
4. NAND Gate
5. NOR Gate
6. XOR Gate
7. XNOR Gate
8. Display Truth Table
9. Exit
```

## Concepts Demonstrated

This project demonstrates:

-   C functions
-   Conditional logic
-   `switch-case`
-   `do-while` loops
-   User input handling
-   Input validation
-   Logical operators
-   Bitwise XOR operator
-   Truth tables
-   Modular programming

## Input Validation

The program includes a binary input validation function that repeatedly
asks the user for input until either `0` or `1` is entered.

## Example

``` text
--- AND Gate ---

Enter A (0 or 1): 1
Enter B (0 or 1): 1

AND Output = 1
```

## Educational Purpose

This project can be used as a beginner-level implementation for
understanding the relationship between **C programming and digital logic
design**.

It is suitable for students learning:

-   Digital Electronics
-   Logic Gates
-   Truth Tables
-   C Programming Fundamentals

## Author

**Vinay Bongale**

Department of Electronics & Communication Engineering

## License

This project is licensed under the **MIT License**.
