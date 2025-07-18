# Lab Assignment 9: Power Series Evaluation in Rust  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** Rust  
**Directory:** `src_code/lab_9/`

---

## 🎯 Objective  
Develop skills in:
- Implementing mathematical functions using iterative logic  
- Approximating analytic functions via Taylor series  
- Comparing fixed-term and precision-based summation  
- Structuring code with reusable functions and formatted output

---

## 📚 Theory Overview  

| Concept                  | Description                                                                 |
|--------------------------|-----------------------------------------------------------------------------|
| Analytic function        | Expandable into a Taylor series within a neighborhood of ε                  |
| Taylor series            | \( y(x) = \sum_{n=1}^{\infty} \frac{x^n}{n} \) for \( y = \frac{1}{2} \ln\left(\frac{1+x}{1-x}\right) \) |
| Fixed-term sum `Sn`      | Sum of first `n` terms of the series                                       |
| Precision-based sum `Se` | Sum of terms until remainder < ε                                           |
| Exact value `y(x)`       | Computed using Rust’s `f64::ln()`                                          |
| Evaluation range         | \( x \in [0.0, 1.0] \), with 11 evenly spaced points                        |

---

## 📂 File Structure  

| Filename         | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| `Lab_9.rs`       | Computes `Sn`, `Se`, and exact `y(x)` for 11 values of `x` using functions  |

---

## ✅ Function Breakdown

```rust
fn y(x: f64) -> Option<f64>;       // Exact value
fn term(x: f64, k: usize) -> f64;  // k-th term of the series
fn sum1(x: f64, n: usize) -> f64;  // Sum of first n terms
fn sum2(x: f64, eps: f64) -> f64;  // Sum with precision ε
```

---

## 🧪 Task Summary  
- Input: number of terms `n` and precision `delta`  
- For each `x` in `[0.0, 1.0]`, compute:
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
0.9       2.147276       2.301887       -1.472219
```

---

## 📎 Notes  
- Uses `Option<f64>` to safely handle undefined values at `x = 1.0`  
- `term()` calculates each series element using `x.powi()`  
- `sum1()` uses a `for` loop; `sum2()` uses a `while` loop with `abs()`  
- Output formatted using `println!()` with alignment and precision

