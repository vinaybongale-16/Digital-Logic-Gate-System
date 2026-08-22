# 🔌 Digital Logic Gate System

<p align="center">
  <b>A C-based console application for understanding and working with fundamental digital logic gates.</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c">
  <img src="https://img.shields.io/badge/Project-Digital%20Logic-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/Level-Beginner-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge">
</p>

---

## 📌 About the Project

**Digital Logic Gate System** is a menu-driven C program that demonstrates the working of fundamental digital logic gates using binary inputs (`0` and `1`).

The program allows users to select a logic gate, provide binary inputs, and view the corresponding output. It also provides a complete truth table for the supported two-input logic gates.

This project connects **C programming fundamentals** with concepts from **Digital Electronics and Logic Design**.

---

## ✨ Features

* 🔹 Interactive menu-driven interface
* 🔹 Supports **7 commonly used logic gates**
* 🔹 Binary input validation
* 🔹 Individual gate output calculation
* 🔹 Complete logic-gate truth table
* 🔹 Simple and beginner-friendly implementation
* 🔹 Modular programming using functions
* 🔹 Console-based execution

---

## 🧠 Logic Gates Supported

| No. | Logic Gate | C Operation   |
| - | ---------- | ------------- |
| 1 | AND        | `A && B`      |
| 2 | OR         | `A \|\| B`    |
| 3 | NOT        | `!A`          |
| 4 | NAND       | `!(A && B)`   |
| 5 | NOR        | `!(A \|\| B)` |
| 6 | XOR        | `A ^ B`       |
| 7 | XNOR       | `!(A ^ B)`    |

---

## 📊 Truth Table

### Two-Input Logic Gates

| A | B | AND | OR | NAND | NOR | XOR | XNOR |
| - | - | --- | -- | ---- | --- | --- | ---- |
| 0 | 0 | 0   | 0  | 1    | 1   | 0   | 1    |
| 0 | 1 | 0   | 1  | 1    | 0   | 1   | 0    |
| 1 | 0 | 0   | 1  | 1    | 0   | 1   | 0    |
| 1 | 1 | 1   | 1  | 0    | 0   | 0   | 1    |

### NOT Gate

| A | NOT |
| - | --- |
| 0 | 1   |
| 1 | 0   |

---

## 🖥️ Program Menu

```
====================================
       DIGITAL LOGIC GATE SYSTEM
====================================

1. AND Gate
2. OR Gate
3. NOT Gate
4. NAND Gate
5. NOR Gate
6. XOR Gate
7. XNOR Gate
8. Display Truth Table
9. Exit

Enter your choice:
```

---

## ⚙️ How It Works

```
Start Program
      │
      ▼
 Display Menu
      │
      ▼
Select Logic Gate
      │
      ├───────────────┐
      ▼               ▼
Binary Input      Truth Table
 Validation         Display
      │
      ▼
Gate Calculation
      │
      ▼
 Display Output
      │
      ▼
  Return Menu
```

---

## 🔢 Input Validation

The program accepts only binary values:

```
0 → LOW
1 → HIGH
```

If the user enters an invalid value, the program repeatedly asks for a valid binary input.

Example:

```
Enter A (0 or 1): 5
Invalid input! Enter only 0 or 1:
```

---

## 💻 Example Output

### AND Gate

```
--- AND Gate ---

Enter A (0 or 1): 1
Enter B (0 or 1): 1

AND Output = 1
```

### XOR Gate

```
--- XOR Gate ---

Enter A (0 or 1): 1
Enter B (0 or 1): 0

XOR Output = 1
```

### Truth Table

```
----- LOGIC GATE TRUTH TABLE -----

A B | AND OR NAND NOR XOR XNOR
-------------------------------
0 0 |  0   0    1    1   0    1
0 1 |  0   1    1    0   1    0
1 0 |  0   1    1    0   1    0
1 1 |  1   1    0    0   0    1
```

---

## 🛠️ Technologies Used

* **Programming Language:** C
* **Compiler:** GCC / Any Standard C Compiler
* **Interface:** Command Line / Console
* **Concepts:** Digital Logic & Boolean Operations

---

## 📚 C Programming Concepts Used

This project demonstrates several fundamental C programming concepts:

* ✅ Functions
* ✅ Variables
* ✅ `if-else` statements
* ✅ `switch-case`
* ✅ `do-while` loop
* ✅ User input using `scanf()`
* ✅ Output using `printf()`
* ✅ Logical operators
* ✅ Bitwise XOR operator
* ✅ Input validation
* ✅ Modular programming

---

## 📁 Project Structure

```
Digital-Logic-Gate-System/
│
├── 📄 Digital_Logic_Gate_System.c
├── 📄 README.md
├── 📄 LICENSE
└── 📄 .gitignore
```

---

## 🚀 Getting Started

### 1️⃣ Clone the Repository

```
git clone https://github.com/vinaybongale-16/Digital-Logic-Gate-System.git
```

### 2️⃣ Navigate to the Project

```
cd Digital-Logic-Gate-System
```

### 3️⃣ Compile the Program

Using GCC:

```
gcc Digital_Logic_Gate_System.c -o Digital_Logic_Gate_System
```

### 4️⃣ Run the Program

**Windows:**

```
Digital_Logic_Gate_System.exe
```

**Linux / macOS:**

```
./Digital_Logic_Gate_System
```

---

## 🎯 Educational Purpose

This project is developed as a beginner-friendly implementation to understand the relationship between:

```
C Programming
      │
      ▼
Boolean Operations
      │
      ▼
  Logic Gates
      │
      ▼
  Truth Tables
      │
      ▼
Digital Electronics
```

It can be useful for students studying **C Programming, Digital Electronics, Digital Logic Design, and Logic Gates**.

---

## 🔮 Future Improvements

* [ ] Add a graphical user interface
* [ ] Add circuit diagrams for each gate
* [ ] Add multi-input gate support
* [ ] Add Boolean expression evaluation
* [ ] Add gate combination/circuit design
* [ ] Add file-based result storage
* [ ] Add a digital circuit visualization mode

---

## 👨‍💻 Author

**Vinay Bongale**

Electronics & Communication Engineering Student

---

## ⭐ Support

If you find this project useful for learning **C Programming or Digital Logic**, consider giving the repository a ⭐ on GitHub.

---

## 📄 License

This project is licensed under the **MIT License**.
