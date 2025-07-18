# Lab Assignment 5: Two-Dimensional Arrays, Pointers & Dynamic Memory in C  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** C  
**Directory:** `src_code/lab_5/`

---

## 🎯 Objective  
This lab focuses on working with:
- Multidimensional arrays and pointer access  
- Memory layouts and index-based traversal  
- Array-of-pointers and dynamic memory allocation  
- Random value generation, array manipulation, and aggregation  
- Matrix operations and memory management with `new`, `malloc`, and `free`

---

## 📚 Theory Highlights  

| Concept                      | Description                                                                         |
|------------------------------|-------------------------------------------------------------------------------------|
| 2D arrays                    | Elements accessed via `arr[i][j]` or pointer forms like `*(*(arr+i)+j)`            |
| Initialization               | Full or partial, either inline or via nested loops                                 |
| Pointer arrays               | Array of type `char *name[]` or `int *rows[]`                                      |
| Dynamic memory               | `malloc()` or `new` used to allocate arrays during runtime                         |
| Memory deallocation          | Managed via `free()` or `delete[]` to avoid leaks                                  |
| String pointers              | Useful for storing and formatting text-based content                               |
| Matrix operations            | Including element-wise product, sum, and combining matrices                        |

---

## 📂 File Structure  

| Filename         | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| `task_1.c`        | Reads 4×5 int matrix, computes column-wise product of values `1 ≤ x ≤ 5`   |
| `task_2.c`        | Fills 5×4 float matrix with random values, counts negatives via pointer access |
| `task_3.c`        | Defines string-pointer array, computes length and counts characters `'c'`  |
| `task_4.c`        | Dynamically allocates and fills `double` array, outputs random values      |
| `task_5.c`        | Creates 3 dynamic square matrices, stores sum of absolute values of first two |

---

## ✅ Task Breakdown

### 🔹 `task_1.c` — Product in Column Range  
- Input 4×5 matrix  
- Filter values between 1–5 per column  
```c
if (arr[i][j] >= 1 && arr[i][j] <= 5)
    product[j] *= arr[i][j];
```

**Sample Output:**
```
Product in column 0 = 3  
Product in column 1 = 32  
Product in column 2 = 25  
Product in column 3 = 1  
Product in column 4 = 6
```

---

### 🔹 `task_2.c` — Count of Negative Values  
- Randomized 5×4 float matrix  
- Range: `-50.0` to `20.5`  
- Access via pointer `*(A[i] + j)`  
```c
if (*(A[i] + j) < 0) count++;
```

**Sample Output:**
```
Count of negative numbers = 8
```

---

### 🔹 `task_3.c` — String Pointer Array  
- Declares array of 3 string pointers  
- Uses `strlen()` to report length of each  
- Counts `'c'` and `'C'` in second string via `titles[1][i]`

**Sample Output:**
```
Size of pointer array: 24 bytes  
Size of title 2: 22 bytes  
Count of letter 'c' in second line: 1
```

---

### 🔹 `task_4.c` — Dynamic Array of `double` Values  
- Allocates array using `malloc()`  
- Random float numbers between `-15.000 → 15.000`  
```c
ptr[i] = ((double)rand() / RAND_MAX) * 30.0 - 15.0;
```

**Sample Output:**
```
Generated array:  
 -11.426  -0.354  -1.166   7.527   14.540 ...
```

---

### 🔹 `task_5.c` — Matrix Absolute Sum  
- Matrices:  
  - `matr1`: `N×N`, filled with `-100 → +100`  
  - `matr2`: `N×N`, filled with `-50 → +50`  
  - `matr3`: `|matr1[i][j]| + |matr2[i][j]|`  
```c
matr3[i][j] = abs(matr1[i][j]) + abs(matr2[i][j]);
```

**Sample Output (matrix size = 5):**
```
Matrix 3 (Sum of absolute values):  
 41 58 143 54 10  
109 84 105 80 41  
...
```

---

## 📎 Notes  
- Demonstrates full lifecycle of dynamic memory use  
- Tasks combine pointer logic, formatted output, and structured traversal  
- Safe and correct allocation/deallocation helps build strong memory practices  
- String and matrix tasks expand array versatility with text and numeric data
