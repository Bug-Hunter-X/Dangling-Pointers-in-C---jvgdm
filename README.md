# Dangling Pointers in C++
This repository demonstrates the problem of dangling pointers in C++ and provides a solution to avoid them.

## Description
Dangling pointers are pointers that point to memory that has been freed or released.  Accessing a dangling pointer leads to undefined behavior, often resulting in crashes or unexpected program output. This example shows a scenario where a dangling pointer is created after deallocating memory dynamically allocated using `new`.

## How to Reproduce
1. Compile the `danglingPointerBug.cpp` file using a C++ compiler (like g++).
2. Run the executable.
3. Observe that the program might crash or produce unpredictable results.

## Solution
The `danglingPointerSolution.cpp` file demonstrates how to avoid dangling pointers by carefully managing memory allocation and deallocation.  The solution shows how to avoid creating dangling pointers in the first place.