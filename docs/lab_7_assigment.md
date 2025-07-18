# Lab Assignment 7: Multidimensional Arrays and Function-Based Operations in C++  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** C++  
**Directory:** `src_code/lab_7/`

---

## 🎯 Objective  
Develop skills in:
- Declaring and initializing multidimensional arrays  
- Performing matrix operations using functions  
- Passing arrays and elements to functions  
- Structuring code with modular logic and dynamic memory allocation

---

## 📚 Theory Overview  

| Concept                     | Description                                                                 |
|-----------------------------|-----------------------------------------------------------------------------|
| 2D array declaration         | `int arr[rows][cols]` or dynamic `int** matrix`                             |
| Memory layout               | Stored row-wise in contiguous memory                                        |
| Function-based access       | Arrays passed via pointers, dimensions specified in function parameters     |
| Transposition               | Swapping `matrix[i][j]` with `matrix[j][i]` across diagonal                 |
| Matrix addition             | Element-wise sum of two matrices                                            |
| Dynamic allocation          | Using `new` and `delete` for flexible memory management                     |

---

## 📂 File Structure  

| Filename         | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| `Lab_7.cpp`      | Fills matrix with random values, transposes it, adds to another matrix, and displays all |

---

## ✅ Task Breakdown

### 🔹 Matrix Operations via Functions  
- Input: matrix size `N × N`  
- Functions used:
  - `fillMatrix()` – fills matrix with random integers `0–99`  
  - `transposeMatrix()` – transposes matrix in-place  
  - `addMatrices()` – adds two matrices element-wise  
  - `displayMatrix()` – prints matrix with formatting

**Function Signatures:**
```cpp
void fillMatrix(int** matrix, int size);
void transposeMatrix(int** matrix, int size);
void addMatrices(int** matrix1, int** matrix2, int** result, int size);
void displayMatrix(int** matrix, int size, const string& name);
```

---

## 📊 Sample Output

### 🔸 For `size = 3`
```
Matrix 1 (Original):
   46    49    89
    4    22    96
   39    89    92

Matrix 1 (Transposed):
   46     4    39
   49    22    89
   89    96    92

Matrix 2:
    2    84    50
   45    64    62
   76    21    77

Sum of Matrix 1 and Matrix 2:
   48    88    89
   94    86   151
  165   117   169
```

### 🔸 For `size = 5`
```
Matrix 1 (Transposed):
   58    44    48    20    48
   92    92     0    84    76
   83    68    96    27    15
   58     0    17    83    26
    7    78    95    55    71

Matrix 2:
   55    45     9    50    81
   45    97    67    18    19
   65    61    72    96    94
    8    67    75    71    35
   38    63     5    56    24

Sum of Matrix 1 and Matrix 2:
  113    89    57    70   129
  137   189    67   102    95
  148   129   168   123   109
   66    67    92   154    61
   45   141   100   111    95
```

---

## 📎 Notes  
- All operations are modularized into reusable functions  
- Dynamic memory allocation ensures flexibility for any matrix size  
- Transposition and addition are performed in-place and via helper arrays  
- Output is formatted using `setw()` for clean column alignment