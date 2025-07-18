# Lab Assignment 6: Power Series Evaluation Using Functions in C++  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** C++  
**Directory:** `src_code/lab_6/`

---

## 🎯 Objective  
Develop the ability to define and use functions for organizing iterative computations.  
This lab focuses on evaluating a real-valued function using its Taylor series expansion, comparing fixed-term and precision-based approximations.

---

## 📚 Theory Overview  

| Concept                  | Description                                                                 |
|--------------------------|-----------------------------------------------------------------------------|
| Analytical function      | A function expandable into a Taylor series within a neighborhood of ε       |
| Taylor series            | \( y(x) = \sum_{n=1}^{\infty} \frac{x^n}{n} \) for \( y = \frac{1}{2} \ln\left(\frac{1+x}{1-x}\right) \) |
| Fixed-term sum `Sn`      | Sum of first `n` terms of the series                                       |
| Precision-based sum `Se` | Sum of terms until remainder < ε                                           |
| Exact value `y(x)`       | Computed using built-in logarithmic function                               |
| Evaluation range         | \( x \in [0, 1] \), with 11 points spaced evenly                           |

---

## 📂 File Structure  

| Filename         | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| `Lab_6.cpp`      | Computes `Sn`, `Se`, and exact `y(x)` for 11 values of `x` using functions  |

---

## ✅ Function Definitions  

```cpp
double y(double x);               // Exact value
double term(double x, int k);     // k-th term of the series
double sum1(double x, int n);     // Sum of first n terms
double sum2(double x, double eps);// Sum with precision ε
```

---

## 🧪 Task Summary  
- Input: number of terms `n` and precision `delta`  
- For each `x` in `[0.0, 1.0]` (11 points), compute:
  - `Sn` using `sum1(x, n)`
  - `Se` using `sum2(x, delta)`
  - `y(x)` using exact formula  
- Output results in tabular format

---

## 📊 Sample Output  

### 🔸 For `n = 5`, `delta = 0.001`  
```
x         Sn             Se             y
-------------------------------------------------------
0.0       0.000000       0.000000       0.000000
0.1       0.100234       0.100232       0.100234
...
0.9       1.397609       1.464493       1.467503
```

### 🔸 For `n = 10`, `delta = 0.0001`  
```
x         Sn             Se             y
-------------------------------------------------------
0.0       0.000000       0.000000       0.000000
0.1       0.105361       0.105358       -0.100335
...
1.0       3.019877       9.787606       -inf
```

---

## 📎 Notes  
- Uses `f64::ln()` for exact logarithmic computation  
- Series diverges near `x = 1`, producing large `Se` and `-inf` for `y(x)`  
- Demonstrates convergence behavior of Taylor series  
- Modular function design improves readability and reusability
