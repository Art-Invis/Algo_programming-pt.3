# Lab Assignment 10: Array Processing and Algorithmic Analysis in Rust  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** Rust  
**Directory:** `src_code/lab_10/`

---

## 🎯 Objective  
To explore:
- Declaration and manipulation of fixed-size arrays in Rust  
- Iteration using loops, slices, and iterators  
- Implementation of custom algorithms for array analysis  
- Safe and efficient data traversal using Rust’s type system

---

## 📚 Theory Overview  

| Concept                  | Description                                                                 |
|--------------------------|-----------------------------------------------------------------------------|
| Array declaration        | `let arr: [f64; 47] = [0.0; 47];` — fixed-size array                        |
| Index access             | `arr[i]` retrieves the i-th element                                         |
| Iteration methods        | `for i in 0..arr.len()` or `for val in arr.iter()`                          |
| Slices                   | `&arr[..max_index]` — subset of array for partial operations                |
| Sum of squares           | `arr.iter().map(|x| x.powi(2)).sum()`                                       |
| Max positive search      | Loop through array, track largest value and its index                      |
| Safety                   | Rust enforces bounds checking and memory safety at compile time             |

---

## 📂 File Structure  

| Filename         | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| `Lab_10.rs`       | Finds max positive value and computes sum of squares of elements before it |

---

## ✅ Task Breakdown

### 🔹 Variant 5 — Sum of Squares Before Max Positive  
- Input: Array of 47 real numbers  
- Goal:  
  - Find the largest positive element and its index  
  - Compute sum of squares of all elements before that index  
- Output:  
  - Display the max positive value  
  - Display the computed sum

**Core Logic:**
```rust
let sum_of_squares: f64 = arr[..max_index]
    .iter()
    .map(|&x| x.powi(2))
    .sum();
```

---

## 📊 Sample Output

### 🔸 Example
```rust
Сума квадратів елементів до найбільшого додатного елемента (9.30): 1157.48
```

---

## 📎 Notes  
- Uses `f64::NEG_INFINITY` to initialize max tracking  
- `Option<usize>` ensures safe handling of index presence  
- `iter().enumerate()` provides both index and value during traversal  
- Slice-based computation avoids manual indexing and improves readability  
- Output formatted using `println!()` with precision control
