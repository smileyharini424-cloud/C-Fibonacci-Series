# C Fibonacci Series

## Explanation

This program generates the Fibonacci series for the number of terms entered by the user.

In the Fibonacci series each number is obtained by adding the previous two numbers.

The series starts with:

0 1 1 2 3 5 8 13 ...

## Problem Statement

Write a C program to generate the first N terms of the Fibonacci series using a loop.

## Features

- Accepts the number of terms
- Generates Fibonacci numbers
- Uses a for loop
- Uses three variables for calculation
- Handles invalid input

## How It Works

The program initializes two variables:

first = 0

second = 1

The loop prints the current value of first.

Then the next Fibonacci number is calculated by adding first and second.

The values are shifted forward and the process continues until the required number of terms is printed.

## Technologies Used

- C
- GCC Compiler
- Code Editor

## Data Structure Used

No data structure is used.

## Methods Used

- main()
- printf()
- scanf()

## Control Structure Used

- for loop
- if statement

## Operators Used

- +
- <=
- ++
- =

## Program Flow

Start
↓
Read number of terms
↓
Check whether terms are positive
↓
Initialize first = 0
↓
Initialize second = 1
↓
Print first
↓
Calculate next = first + second
↓
Update first and second
↓
Repeat until required terms are printed
↓
End

## Sample Input

Enter the number of terms: 8

## Sample Output

Fibonacci Series:

0 1 1 2 3 5 8 13

## Time Complexity

O(n)

## Space Complexity

O(1)

## Key Learning

This program teaches how to generate a sequence using loops and how to update multiple variables during each iteration.

## File Location

fibonacci.c

## Repository Structure

C-Fibonacci-Series/
├── README.md
└── fibonacci.c

## Author

V.Harini
