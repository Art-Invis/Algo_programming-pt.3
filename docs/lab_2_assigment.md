# Lab Assignment 2: Conditional Statements, Switch, and Loop Constructs in C  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** C  
**Directory:** `src_code/lab_2/`

---

## 🎯 Objective  
Learn to use control flow mechanisms in C:
- Conditional statements: `if`, `else`, `nested if`, `if...else`
- Switch-case branching with fallback logic
- Input validation and comparison operators
- Practice using formatted I/O with `printf()` and `scanf()`
- Identify numeric properties and perform decision-based computations

---

## 📚 Theoretical Concepts  

| Topic                      | Details                                                                 |
|---------------------------|-------------------------------------------------------------------------|
| `if...else`               | Executes a block based on boolean condition                             |
| `switch...case`           | Selects among multiple discrete branches                                |
| `break`, `default`        | Used to exit switch-case or provide a fallback                         |
| `cin`, `cout`             | C++-style input/output (if used)                                        |
| Logical operators          | `&&`, `||`, `==`, `!=`, `<`, `>`, `<=`, `>=`                            |
| Modular arithmetic        | Use of `%` to check divisibility or odd/even                           |
| Nesting conditions         | Combining multiple `if` statements for tiered logic                     |

---

## 📂 File Structure  

| Filename         | Description                                                              |
|------------------|--------------------------------------------------------------------------|
| `task_1_5.c`        | Check if number is even or divisible by 5                               |
| `task_2_5.c`        | Positive number: check divisibility by 5; else, check if less than -100 |
| `task_3_5.c`        | Switch-case on arithmetic operation or tree name based on input char    |
| `task_4_5.c`        | Switch-case that converts month number to quarter                       |
| `task_5_5.c`        | Input 4 floats, find max, compare it to 500                             |

---

## ✅ Task Summary

### 🔹 `task_1.c` — Even & Divisibility Check  
Input an integer.  
- Check if it’s even  
- Check if it’s divisible by 5  
```c
if (n % 2 == 0)
if (n % 5 == 0)
```

**Sample Output**
```
Input number: 3  
Number 3 is odd  
Number 3 is not divisible by 5
```

---

### 🔹 `task_2.c` — Nested Condition with Positive & Negative Logic  
Use nested `if` to check:  
- If number is positive, check `%5`  
- Else, check `< -100`

**Sample Output**
```
Input: 6  
The number 6 is positive but not divisible by 5.
```

---

### 🔹 `task_3.c` — Switch-Case Tree Decoder  
Input a character (first letter of tree name).  
Convert to lowercase and print full tree name.  
Includes: `oak`, `pine`, `maple`, `birch`, `spruce`, `alder`.

**Sample Output**
```
Input: S  
Spruce
```

---

### 🔹 `task_4.c` — Month to Quarter Conversion  
Input integer `1–12`.  
Group cases by quarter:  
- `1–3` → Q1  
- `4–6` → Q2  
- `7–9` → Q3  
- `10–12` → Q4

**Sample Output**
```
Input month: 5  
This is the 2nd quarter.
```

---

### 🔹 `task_5.c` — Maximum Among Four  
Input four real numbers.  
- Find the maximum  
- Check if max > 500  

**Sample Output**
```
Input: 1 9 5 3  
Max number: 9.00  
The maximum number is 500 or less.
```
