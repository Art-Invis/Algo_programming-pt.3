# Lab Assignment 3: Loop Constructs and Iteration Control in C  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** C  
**Directory:** `src_code/lab_3/`

---

## 🎯 Objective  
To master loop-based execution in the C programming language by:
- Practicing loop types: `for`, `while`, `do...while`  
- Implementing nested loops and input validation  
- Utilizing `break`, `continue`, and `return` inside loops  
- Designing iterations using conditional entry/exit  
- Performing accumulation and filtering of user input

---

## 📚 Theoretical Concepts  

| Concept             | Summary                                                                 |
|---------------------|-------------------------------------------------------------------------|
| `for` loop           | Best used when the number of iterations is known                        |
| `while` loop         | Used when the condition may vary dynamically                            |
| `do...while` loop    | Ensures body runs at least once before checking the condition           |
| `break`              | Immediately exits the current loop                                      |
| `continue`           | Skips current iteration and jumps to next                              |
| `return`             | Exits from the entire function or program                               |
| Nested loops         | A loop inside another loop, often used for grids or combined conditions |

---

## 📂 File Structure  

| Filename         | Description                                                               |
|------------------|---------------------------------------------------------------------------|
| `task_1.c`        | Sum of multiples of 5 (controlled via user-defined iteration count)       |
| `task_2.c`        | Accumulates negative odd numbers until `13` is input                      |
| `task_3.c`        | Calculates F = 5a + b² for given ranges via nested `for` loops            |
| `task_4.c`        | Sums 15 real inputs + counts/accumulates negative values (break on -100) |
| `task_5.c`        | Inputs 4 real values, finds the largest, compares it to `500`             |

---

## ✅ Task Breakdown

### 🔹 `task_1.c` – Multiples of 5 via `while` Loop  
- Input: Number of iterations  
- Loop adds `i * 5` to `sum`  
- Final output includes last term and total iterations

**Sample Output:**  
```
Enter the number of iterations: 4  
Sum of multiples of 5: 30  
Last term: 15  
Number of iterations: 4
```

---

### 🔹 `task_2.c` – Negative Odd Filter via Infinite `for` Loop  
- Continuous input until `13` is entered  
- Only negative and odd values affect `sum` and `count`  
- Loop exits on condition

**Sample Output:**  
```
Sum of negative odd numbers: -24  
Count of negative odd numbers: 4
```

---

### 🔹 `task_3.c` – Nested Loop Evaluation of Function F  
- Range:  
  - `a = 5 → 50`, step `5`  
  - `b = 4 → 10`, step `2`  
- Function: `F = 5a + b²`  
- Output: Values of a, b, and result F formatted per loop step

**Sample Output:**
```
a=10, b=6, F=86  
a=50, b=10, F=350  
...
```

---

### 🔹 `task_4.c` – Real Number Accumulation with Conditions  
- Max inputs: 15 real numbers  
- Terminates on `-100`  
- Tracks sum, negative sum, and negative count

**Sample Output:**
```
Total numbers entered: 15  
Sum of all numbers: 1467.00  
Sum of negative numbers: -119.00  
Count of negative numbers: 4
```

---

### 🔹 `task_5.c` – Input Validation via `do...while` or `for`  
- Input: 4 real numbers  
- Calculates maximum of the group  
- Checks whether result > 500  
- Uses loop and conditionals for comparison

**Sample Output:**
```
The largest number is: 186.00  
The largest number is not greater than 500.
```

---

## 📎 Notes  
- Each task demonstrates the use of loop logic with different control flows  
- All inputs validated and cleanly structured  
- Output is formatted consistently using `printf()`  
- Use of nested loops and early-exit logic highlights functional mastery
