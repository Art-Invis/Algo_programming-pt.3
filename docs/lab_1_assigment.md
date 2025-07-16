# Lab Assignment 1: Fundamentals of Data Types and I/O in C  
### Subject: Algorithms and Data Structures  
**Variant:** 5  
**Language:** C

---

## 🎯 Objective  
The goal of this lab is to get familiar with:
- Basic data types (`int`, `float`, `char`, `short`, `long`, `double`)
- Input/output operations (`printf`, `scanf`, `puts`, `cin`, `cout`)
- Data size, formatting specifiers, conditional logic, overflow behavior, and character encoding
- Using string formatting and directives (`#define`) for structured output

---

## 📂 File Structure

| Filename         | Description                                                               |
|------------------|---------------------------------------------------------------------------|
| `task_1.c`        | Symbol codes, variable sizes, and formatted output                        |
| `task_2_V5.c`        | Arithmetic expressions and conditional evaluation                         |
| `task_3.c`        | Cylinder volume + advanced expression formatting                          |
| `task_4.c`        | Conversion and area calculation using `cin` / `cout`                      |
| `task_5.c`        | Overflow detection and edge-case behavior of basic types                  |
| `task_6.c`        | String formatting using `#define` and dynamic alignment in output         |

⚠️ All source files must be placed directly in `src_code/lab_1/` and named exactly as shown above.
Use .c for C files and .cpp for C++ files where required by task instructions.
---

## 📘 Theoretical Concepts  
- C program = preprocessor + variable declarations + functions  
- Preprocessor directives: `#include`, `#define`, `#undef`  
- Data types: `int`, `char`, `float`, `double`, `short`, `long`, `unsigned`  
- Formatted input/output: `printf`, `scanf`, `cin`, `cout`  
- ASCII encoding for characters  
- Formatting: `%6.2f`, `%8.3f` — total width and decimal precision  
- Overflow behavior in signed/unsigned types  
- Output alignment with `%s`, `%20.4s`, `%-20.9s`

---

## ✅ Summary of Tasks

### 🔹 `task_1.c`  
Defines variables of various types and prints their values and sizes.  
🧪 Includes surname output and symbol analysis using `char`.

### 🔹 `task_2.c`  
Calculates integer and float expressions with explanation:  
- Arithmetic (`+=`, `*`, `/`, `%`)  
- Logical (`>`, `&&`)  
- Post-increment (`++`)  
- Ternary operator (`? :`)

### 🔹 `task_3.c`  
Input `x`, `z`, `h` as `double`, compute:  
```
res = x³ + z / h²
```
Displays result with **3 digits before and after decimal point**.

### 🔹 `task_4.c`  
Converts inches to centimeters and computes area:  
```
S = πr²
```
Uses C++ style I/O with `cin >>` and `cout <<`.

### 🔹 `task_5.c`  
Demonstrates overflow behavior:
- Initializes near-max values  
- Adds 1 to produce overflow  
- Uses `limits.h` constants (`INT_MAX`, `UINT_MAX`, `CHAR_MAX`, `UCHAR_MAX`)  
Prints current, max, and overflowed values

### 🔹 `task_6.c`  
Uses `#define` for predefined strings:  
- Aligns and truncates text  
- Adds custom location string `"Lviv, ...."`  
- Shows first word aligned left and right using `%20.4s`, `%-20.4s`

---

## 🖥️ Sample Output Highlights  

```bash
Symbol A = (65)10S = (101) 8S = (0x41)16S size char = 1 bytes  
short = 31 size short = 2 bytes  
double = 456.646600 size double = 8 bytes  
Press Enter to exit...
```

```bash
a2 = 3 b1 = 11 b2 = 2 b3 = 1  
r1 = 5.40 r2 = 5.70
```

```bash
Enter x: 1.000  
Enter z: 4.000  
Enter h: 2.000  
Result 5:   3.000
```

```bash
int: x1=2147483645, x7=2147483647, x8=-2147483648  
unsigned int: y1=4294967290, y7=4294967295, y8=0  
char: z1=125, z7=127, z8=-128  
unsigned char: v1=252, v7=255, v8=0
```

```bash
|Today we are|  
|                       learning how to |  
|                "Program on C++"       |  
|         Today|  
|      learning |  
|"Program o|  
|Lviv, ...|  
|Lviv|  
|              Lviv|
```
