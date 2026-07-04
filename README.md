# C Programming Language
 
A comprehensive guide and reference for the C programming language — one of the most influential, efficient, and widely used programming languages in computing history.
 
## Table of Contents
 
- [Overview](#overview)
- [History](#history)
- [Features](#features)
- [Installation](#installation)
- [Getting Started](#getting-started)
- [Basic Syntax](#basic-syntax)
- [Data Types](#data-types)
- [Control Structures](#control-structures)
- [Functions](#functions)
- [Arrays and Strings](#arrays-and-strings)
- [Pointers](#pointers)
- [Structures and Unions](#structures-and-unions)
- [Memory Management](#memory-management)
- [File Handling](#file-handling)
- [Preprocessor Directives](#preprocessor-directives)
- [Compilation Process](#compilation-process)
- [Standard Library](#standard-library)
- [Best Practices](#best-practices)
- [Common Pitfalls](#common-pitfalls)
- [Resources](#resources)
- [Contributing](#contributing)
- [License](#license)
## Overview
 
C is a general-purpose, procedural programming language developed in the early 1970s. It provides low-level access to memory, a simple set of keywords, and a clean style — making it suitable for operating systems, embedded systems, compilers, and performance-critical applications. Many modern languages (C++, Java, C#, JavaScript, Python's CPython interpreter) were influenced by or built on top of C.
 
## History
 
- **1969–1973**: Developed by Dennis Ritchie at Bell Labs, evolving from the B language.
- **1978**: *The C Programming Language* (K&R) published, becoming the de facto standard.
- **1989/1990**: ANSI C (C89) and ISO C (C90) standardized the language.
- **1999**: C99 introduced `//` comments, variable-length arrays, and more.
- **2011**: C11 added multithreading support, anonymous structs/unions, and improved Unicode support.
- **2017**: C17 (C18) was a minor bug-fix release.
- **2023**: C23 introduced modern features like `nullptr`, `bool`/`true`/`false` as keywords, and more.
## Features
 
- **Low-level memory access** via pointers
- **Fast execution** — compiles directly to machine code
- **Portable** — code can run on many platforms with minimal changes
- **Structured programming** — supports functions, loops, and conditionals
- **Rich standard library** for I/O, string handling, math, and memory management
- **Foundation language** — used to build other languages, operating systems, and compilers
- **Small footprint** — ideal for embedded and resource-constrained systems
## Installation
 
### Linux
```bash
sudo apt update
sudo apt install build-essential
```
 
### macOS
```bash
xcode-select --install
```
 
### Windows
- Install [MinGW](http://mingw-w64.org/) or [MSVC (Visual Studio)](https://visualstudio.microsoft.com/)
- Alternatively, use [WSL](https://learn.microsoft.com/en-us/windows/wsl/) with a Linux-based toolchain
### Verify Installation
```bash
gcc --version
```
 
## Getting Started
 
Create a file named `hello.c`:
 
```c
#include <stdio.h>
 
int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```
 
Compile and run:
 
```bash
gcc hello.c -o hello
./hello
```
 
## Basic Syntax
 
```c
#include <stdio.h>   // Preprocessor directive
 
// Function declaration
int add(int a, int b);
 
int main(void) {
    int x = 5;
    int y = 10;
    printf("Sum: %d\n", add(x, y));
    return 0;
}
 
int add(int a, int b) {
    return a + b;
}
```
 
Key points:
- Statements end with a semicolon `;`
- Code blocks are wrapped in `{ }`
- `main()` is the entry point of every C program
- Comments: `// single line` or `/* multi-line */`
## Data Types
 
| Type       | Description             | Typical Size |
|------------|--------------------------|--------------|
| `char`     | Character                | 1 byte       |
| `int`      | Integer                  | 4 bytes      |
| `float`    | Single-precision decimal | 4 bytes      |
| `double`   | Double-precision decimal | 8 bytes      |
| `short`    | Short integer            | 2 bytes      |
| `long`     | Long integer             | 8 bytes      |
| `_Bool`    | Boolean (C99+)           | 1 byte       |
| `void`     | No value / no type       | —            |
 
Modifiers: `signed`, `unsigned`, `const`, `volatile`, `static`, `extern`
 
## Control Structures
 
**Conditionals**
```c
if (x > 0) {
    printf("Positive\n");
} else if (x < 0) {
    printf("Negative\n");
} else {
    printf("Zero\n");
}
 
switch (x) {
    case 1:
        printf("One\n");
        break;
    default:
        printf("Other\n");
}
```
 
**Loops**
```c
for (int i = 0; i < 10; i++) { /* ... */ }
 
while (x > 0) { /* ... */ }
 
do {
    /* ... */
} while (x > 0);
```
 
## Functions
 
```c
// Declaration (prototype)
int multiply(int a, int b);
 
// Definition
int multiply(int a, int b) {
    return a * b;
}
 
// Recursive function
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```
 
## Arrays and Strings
 
```c
int numbers[5] = {1, 2, 3, 4, 5};
char name[20] = "Claude";
 
// 2D array
int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
 
// String functions (string.h)
strlen(name);
strcpy(dest, src);
strcmp(str1, str2);
strcat(dest, src);
```
 
## Pointers
 
```c
int value = 42;
int *ptr = &value;      // ptr holds the address of value
 
printf("%d\n", *ptr);    // Dereference: prints 42
printf("%p\n", (void*)ptr); // Print the address
 
// Pointer arithmetic
int arr[5] = {10, 20, 30, 40, 50};
int *p = arr;
printf("%d\n", *(p + 2)); // 30
 
// Function pointers
void (*funcPtr)(int) = someFunction;
```
 
## Structures and Unions
 
```c
struct Point {
    int x;
    int y;
};
 
struct Point p1 = {10, 20};
 
union Data {
    int i;
    float f;
    char str[20];
};
 
// typedef for convenience
typedef struct Point Point;
Point p2 = {5, 15};
```
 
## Memory Management
 
```c
#include <stdlib.h>
 
int *arr = (int *)malloc(5 * sizeof(int));  // Allocate
if (arr == NULL) {
    // Handle allocation failure
}
 
arr = (int *)realloc(arr, 10 * sizeof(int)); // Resize
free(arr);                                   // Deallocate
```
 
⚠️ Always `free()` what you `malloc()`/`calloc()`/`realloc()` to avoid memory leaks.
 
## File Handling
 
```c
#include <stdio.h>
 
FILE *fp = fopen("data.txt", "w");
if (fp != NULL) {
    fprintf(fp, "Hello, file!\n");
    fclose(fp);
}
 
fp = fopen("data.txt", "r");
char buffer[100];
while (fgets(buffer, sizeof(buffer), fp)) {
    printf("%s", buffer);
}
fclose(fp);
```
 
## Preprocessor Directives
 
```c
#include <stdio.h>       // Include header
#define PI 3.14159       // Macro constant
#define SQUARE(x) ((x) * (x))  // Macro function
 
#ifdef DEBUG
    printf("Debug mode\n");
#endif
 
#ifndef HEADER_H
#define HEADER_H
// header content
#endif
```
 
## Compilation Process
 
C source code goes through four main stages:
 
1. **Preprocessing** — expands macros, handles `#include`, `#define`
2. **Compilation** — translates preprocessed code into assembly
3. **Assembly** — converts assembly into object code (machine code)
4. **Linking** — combines object files and libraries into an executable
```bash
gcc -E program.c -o program.i     # Preprocess only
gcc -S program.c -o program.s     # Compile to assembly
gcc -c program.c -o program.o     # Assemble to object file
gcc program.o -o program          # Link to executable
```
 
## Standard Library
 
Common headers and their purposes:
 
| Header       | Purpose                          |
|--------------|-----------------------------------|
| `stdio.h`    | Input/output functions            |
| `stdlib.h`   | Memory allocation, conversions    |
| `string.h`   | String manipulation               |
| `math.h`     | Mathematical functions            |
| `ctype.h`    | Character classification         |
| `time.h`     | Date and time functions           |
| `stdbool.h`  | Boolean type (C99+)               |
| `assert.h`   | Diagnostic assertions             |
| `pthread.h`  | POSIX threading                   |
 
## Best Practices
 
- Always initialize variables before use
- Check return values of `malloc`, `fopen`, and other fallible functions
- Avoid magic numbers — use `#define` or `const`
- Use meaningful variable and function names
- Keep functions small and focused on a single task
- Free all dynamically allocated memory
- Use `const` for values that shouldn't change
- Enable compiler warnings: `gcc -Wall -Wextra -Werror`
- Use tools like `valgrind` to detect memory leaks
## Common Pitfalls
 
- **Buffer overflows** — writing beyond array bounds
- **Dangling pointers** — using memory after it's freed
- **Uninitialized variables** — leads to undefined behavior
- **Off-by-one errors** in loops and array indexing
- **Integer overflow** — silent wraparound with signed/unsigned types
- **Memory leaks** — forgetting to `free()` allocated memory
- **Format string mismatches** in `printf`/`scanf`
## Resources
 
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) — the classic reference book
- [cppreference.com](https://en.cppreference.com/w/c) — detailed language and library reference
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [Learn-C.org](https://www.learn-c.org/) — interactive tutorials
## Contributing
 
Contributions are welcome. Please:
1. Fork the repository
2. Create a feature branch
3. Commit your changes with clear messages
4. Open a pull request describing your changes
## License
 
This project is licensed under the MIT License. See the `LICENSE` file for details.
