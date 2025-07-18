# Lab Assignment 4: One-Dimensional Arrays, Pointers, and Strings in C  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** C  
**Directory:** `src_code/lab_4/`

---

## 🎯 Objective  
To explore the definition, manipulation, and traversal of one-dimensional arrays in C using:  
- Static and pointer-based access to arrays  
- Randomized and manual element input  
- Element-wise operations and filtering  
- Basic sorting logic  
- String input, manipulation, and character counting

---

## 📚 Theory Highlights  

| Concept                   | Description                                                                 |
|---------------------------|-----------------------------------------------------------------------------|
| Array types               | Automatic, static, global memory classes                                    |
| Pointer access            | `*px`, `*(px + i)` used for dereferencing and indexing                      |
| Random value generation   | `rand() % range - offset`, initialized via `srand(time(NULL))`              |
| Sorting                   | Selection sort (descending) via swapping maximum elements                   |
| String operations         | Using `char[]`, `gets()`, `scanf()`, `fgets()`, `strlen()`, `strcat()`      |

---

## 📂 File Structure  

| Filename         | Description                                                                |
|------------------|----------------------------------------------------------------------------|
| `task_1.c`        | Inputs 7 integers and computes sum of squares of negative values           |
| `task_2.c`        | Generates random array (size 14) and counts odd values                     |
| `task_3.c`        | Inputs into pointer-based array, finds minimum odd value                   |
| `task_4.c`        | Populates array with random values and sorts using direct selection method |
| `task_5.c`        | Reads string input, calculates character length, appends custom message    |

---

## ✅ Task Breakdown

### 🔹 `task_1.c` — Sum of Squares of Negative Values  
- Input: 7 integers from keyboard  
- Prints all elements  
- Sums squares of elements `< 0`  
```c
if (arr[i] < 0) sum += arr[i] * arr[i];
```

**Sample Output:**
```
Sum of squares of negative elements: 142
```

---

### 🔹 `task_2.c` — Count Odd Values in Random Array  
- Array size: 14  
- Values range from `-30` to `+30`  
- Counts odd values: `if (a[i] % 2 != 0)`  

**Sample Output:**
```
Total number of odd values: 6
```

---

### 🔹 `task_3.c` — Pointer-Based Minimum Odd Finder  
- Array size: 7  
- First element hardcoded as `201`  
- Rest entered by user  
- Accessed via `*(px + i)`  
- Filters `value % 2 != 0`

**Sample Output:**
```
The minimum odd element in the array is: -1
```

---

### 🔹 `task_4.c` — Descending Sort by Selection  
- Array filled with `rand() % 101 - 50`  
- Sorts using maximum selection technique  
- Swaps `dig[i]` with `dig[mm]`

**Sample Output:**
```
Old array: 47 41 -31 ...  
Sorted array (descending): 47 41 31 ...
```

---

### 🔹 `task_5.c` — String Concatenation & Length Calculation  
- Input: title + author’s last name  
- Adds static message `" has appeared in the library."`  
- Uses `fgets()`, `strlen()`, `strcat()`

**Sample Output:**
```
Final message: Braun has appeared in the library.  
Total number of characters: 34
```

---

## 📎 Notes  
- Demonstrates both index-based and pointer-based array traversal  
- Combines manual and randomized input techniques  
- Sort logic uses in-place selection swap  
- Handles string edge cases with newline trimming via `fgets()`  
- Output formatting uses `printf()` and `puts()` interchangeably
