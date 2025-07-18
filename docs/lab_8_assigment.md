# Lab Assignment 8: Character and String Processing in C++  
**Subject:** Algorithms and Data Structures  
**Variant:** 5  
**Language:** C++  
**Directory:** `src_code/lab_8/`

---

## 🎯 Objective  
Develop skills in:
- Declaring and manipulating character arrays  
- Using standard library functions for character classification and string operations  
- Structuring string-processing logic into reusable functions  
- Handling user input with `cin.getline()` and pointer-based traversal

---

## 📚 Theory Overview  

| Concept                  | Description                                                                 |
|--------------------------|-----------------------------------------------------------------------------|
| ASCII encoding           | Each character maps to a numeric code (e.g. `'A'` = 65, `'a'` = 97)         |
| Character functions      | From `<cctype>`: `islower()`, `isupper()`, `isdigit()`, `toupper()`, etc.  |
| String constants         | Enclosed in double quotes, terminated by `'\0'`                             |
| String as array          | `char str[100] = "text";` or `char* ptr = str;`                             |
| String functions         | From `<cstring>`: `strlen()`, `strcmp()`, `strcpy()`, `strcat()`, etc.     |
| Input/output             | `cin.getline()` for full-line input, `puts()` and `getchar()` for I/O       |

---

## 📂 File Structure  

| Filename         | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| `Lab_8.cpp`      | Reads a string and counts lowercase letters using `islower()`               |

---

## ✅ Task Breakdown

### 🔹 Count Lowercase Letters in a String  
- Input: A full line of text from the user  
- Function:  
```cpp
int num_lower(const char *s);
```
- Logic: Traverse string using pointer, count characters where `islower(*s)` is true  
- Output: Total number of lowercase letters

**Function Implementation:**
```cpp
int num_lower(const char *s) {
    int count = 0;
    while (*s != '\0') {
        if (islower(*s)) count++;
        s++;
    }
    return count;
}
```

---

## 📊 Sample Output

### 🔸 Example 1
```
Enter a string: I love Internet of Things  
Number of lowercase letters in the string: 18
```

### 🔸 Example 2
```
Enter a string: This_is_c++_language  
Number of lowercase letters in the string: 14
```

### 🔸 Example 3
```
Enter a string: pNeUmOnOuLtRaMiCrOsCoPiCsIlIcOvOlCaNoCoNiOsIs  
Number of lowercase letters in the string: 23
```

---

## 📎 Notes  
- Uses static array `char str[100]` for input  
- Input handled via `cin.getline()` to support spaces  
- Character classification done via `<cctype>` functions  
- Pointer-based traversal ensures efficient scanning  
- Modular function design improves readability and reuse
