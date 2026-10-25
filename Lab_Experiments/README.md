# 🔬 Laboratory Experiments & Practicals (A.Y. 2025–26)

[![GitHub repo](https://img.shields.io/badge/GitHub-Lab--Experiments-181717?style=for-the-badge&logo=github)](https://github.com/PrathamMewada459/Lab-Experiments)
[![Theme: Dark Layout](https://img.shields.io/badge/Layout-Dark%20Theme-0f172a?style=for-the-badge&logo=visualstudiocode&logoColor=38bdf8)](#)
[![Languages: C, ASM, Java, JS](https://img.shields.io/badge/Languages-C%20%7C%208086%20ASM%20%7C%20Java%20%7C%20JS-blue?style=for-the-badge)](#)
[![Status: Complete](https://img.shields.io/badge/Practicals-30%20Completed-10b981?style=for-the-badge)](#)

> Department of Artificial Intelligence & Data Science  
> **Course Practicals Suite**: Analysis of Algorithms (AOA), Computer Organization & Architecture (COA), and Full Stack Java Programming (FSJP).

---

## 📑 Table of Contents

- [Overview](#-overview)
- [✨ Dark Mode Layout Highlights](#-dark-mode-layout-highlights)
- [🧠 Analysis of Algorithms (AOA)](#-analysis-of-algorithms-aoa)
- [💻 Computer Organization & Architecture (COA)](#-computer-organization--architecture-coa)
- [🌐 Full Stack Java Programming (FSJP)](#-full-stack-java-programming-fsjp)
- [🚀 How to Run](#-how-to-run)
- [🌐 Web Portal Preview](#-web-portal-preview)
- [👤 Author](#-author)

---

## 🌟 Overview

This repository contains verified, optimized laboratory experiments and assignments across three major computational disciplines:

1. **AOA (Analysis of Algorithms)**: Algorithmic paradigms including Divide & Conquer, Greedy Optimization, Dynamic Programming, and Backtracking.
2. **COA (Computer Organization & Architecture)**: Radix conversions, arithmetic hardware algorithms (Booth's, Restoring Division), 8086 Assembly routines, cache memory architectures, and low-level file I/O.
3. **FSJP (Full Stack Java Programming)**: Java OOP foundations, Jakarta EE Servlets, JSP + JDBC database authentication, interactive DOM scripting, React single-page apps, Spring Boot REST architecture, and a complete **CareLine Hospital Management System** with a modern dark layout.

---

## ✨ Dark Mode Layout Highlights

The Full Stack web interfaces in this repository have been modernized with a dark mode design system:

- **CareLine Hospital Management Portal (`FSJP/06_Static_Website_HTML_CSS_JS/`)**:
  - 🌙 **Deep Dark Slate Theme**: Refined `#0b0f19` canvas with `#111827` glassmorphic cards and subtle `#1f2937` borders.
  - 🏥 **Live Clinical Operations Dashboard**: Real-time simulated hospital clock, active token queue cards, IPD general ward vacancy counters, and color-coded triage priority badges.
  - 📝 **Patient Outpatient Appointment Booking**: Outpatient form with validation, department selectors, and live state synchronization to the staff queue via LocalStorage.
  - 🔐 **Secure Staff Login Portal**: Centered radial gradient dark layout with input validation.
- **Client Email Validation (`FSJP/07_JavaScript_Email_Validation.txt`)**: Modern dark authentication modal with glowing input focus borders.
- **JSP + Servlet Login (`FSJP/05_JSP_Servlet_JDBC_Login.txt`)**: Dark theme database login interface.
- **Interactive Dark Web Portal (`index.html`)**: Interactive dark dashboard featuring live search, instant subject filters, and an in-browser code viewer modal for all 30 practicals.

---

## 🧠 Analysis of Algorithms (AOA)

| Exp # | Experiment Title | Paradigm / Technique | Source Code |
| :---: | :--- | :--- | :--- |
| **01** | Insertion Sort & Selection Sort | Incremental & Comparison Sorting | [01_Insertion_Sort_Selection_Sort.c](AOA/01_Insertion_Sort_Selection_Sort.c) |
| **02** | Binary Search | Divide & Conquer ($O(\log n)$) | [02_Binary_Search.c](AOA/02_Binary_Search.c) |
| **03** | Quick Sort | Divide & Conquer / Pivot Partitioning | [03_Quick_Sort.c](AOA/03_Quick_Sort.c) |
| **04** | Fractional Knapsack Problem | Greedy Optimization | [04_Fractional_Knapsack.c](AOA/04_Fractional_Knapsack.c) |
| **05** | Prim's & Kruskal's Algorithms | Graph Theory / Minimum Spanning Tree | [05_Prim_s_Kruskal_s.c](AOA/05_Prim_s_Kruskal_s.c) |
| **06** | Floyd-Warshall Algorithm | Dynamic Programming (All-Pairs Shortest Path) | [06_Floyd_Warshall.c](AOA/06_Floyd_Warshall.c) |
| **07** | Sum of Subset Problem | Recursive Backtracking | [07_Sum_of_Subset.c](AOA/07_Sum_of_Subset.c) |
| **08** | N-Queens Problem | State Space Tree Backtracking | [08_N_Queens.c](AOA/08_N_Queens.c) |
| **09** | Rabin-Karp String Matching | Rolling Hash Pattern Matching | [09_Rabin_Karp.c](AOA/09_Rabin_Karp.c) |
| **10** | Min-Max via Divide & Conquer | Simultaneous Extrema Finding | [10_Min_Max_Divide_Conquer.c](AOA/10_Min_Max_Divide_Conquer.c) |

---

## 💻 Computer Organization & Architecture (COA)

| Exp # | Experiment Title | Category / Concept | Source Code |
| :---: | :--- | :--- | :--- |
| **01** | Decimal & Hex to Binary Conversion | Radix Conversion / Bitwise Masking | [01_Decimal_Hex_to_Binary.c](COA/01_Decimal_Hex_to_Binary.c) |
| **02** | 2's Complement Representation | Binary Signed Arithmetic | [02_2_s_Complement.c](COA/02_2_s_Complement.c) |
| **03** | 8086 8-bit Arithmetic Operations | Assembly (ADD, SUB, MUL, DIV) | [03_8086_Arithmetic_8_bit.asm](COA/03_8086_Arithmetic_8_bit.asm) |
| **04** | 8086 Logical Operations | Assembly (AND, OR, XOR, NOT) | [04_8086_Logical_Operations.asm](COA/04_8086_Logical_Operations.asm) |
| **05** | Booth's Multiplication Algorithm | Hardware Signed Multiplication | [05_Booth_s_Multiplication.c](COA/05_Booth_s_Multiplication.c) |
| **06** | Restoring Division Algorithm | Hardware Binary Divider Simulation | [06_Restoring_Division.c](COA/06_Restoring_Division.c) |
| **07** | Direct-Mapped Cache Simulation | Memory Tagging, Lines, Hit/Miss Ratio | [07_Direct_Mapped_Cache.c](COA/07_Direct_Mapped_Cache.c) |
| **08** | 8086 Bubble Sort | Microprocessor Array Ordering | [08_8086_Bubble_Sort.asm](COA/08_8086_Bubble_Sort.asm) |
| **09** | 8086 Block Transfer with SI/DI | String Index Data Movement | [09_8086_Block_Transfer_SI_DI.asm](COA/09_8086_Block_Transfer_SI_DI.asm) |
| **10** | Low-Level File Handling in C | File Streams, Buffering, Record I/O | [10_File_Handling_in_C.c](COA/10_File_Handling_in_C.c) |

---

## 🌐 Full Stack Java Programming (FSJP)

| Exp # | Experiment Title | Technology Stack | Source Code |
| :---: | :--- | :--- | :--- |
| **01** | Classes & Objects | Core Java OOP | [01_Classes_Objects.java](FSJP/01_Classes_Objects.java) |
| **02** | Method & Constructor Overloading | Compile-Time Polymorphism | [02_Method_Constructor_Overloading.java](FSJP/02_Method_Constructor_Overloading.java) |
| **03** | Inheritance Architectures | Single, Multilevel, Hierarchical | [03_Inheritance.java](FSJP/03_Inheritance.java) |
| **04** | Generic & HTTP Servlets | Jakarta EE / Web Container | [04_Generic_HTTP_Servlet.txt](FSJP/04_Generic_HTTP_Servlet.txt) |
| **05** | JSP + Servlet + JDBC Login | MySQL, JDBC, Dark UI Layout | [05_JSP_Servlet_JDBC_Login.txt](FSJP/05_JSP_Servlet_JDBC_Login.txt) |
| **06** | CareLine Hospital Portal (HMS) | HTML5, CSS3, JS, Dark Layout | [06_Static_Website_HTML_CSS_JS/](FSJP/06_Static_Website_HTML_CSS_JS/) |
| **07** | Client-Side JavaScript Email Validation | Regex, DOM, Dark Glassmorphism | [07_JavaScript_Email_Validation.txt](FSJP/07_JavaScript_Email_Validation.txt) |
| **08** | Dynamic Background Color Changer | DOM Manipulation, Interval Timers | [08_DOM_Auto_Background_Colour.html](FSJP/08_DOM_Auto_Background_Colour.html) |
| **09** | React Single-Page Application (SPA) | React, React Router, Vite | [09_React_Single_Page_App.txt](FSJP/09_React_Single_Page_App.txt) |
| **10** | Spring Boot Monolithic Web Application | Spring Boot REST, Maven | [10_Spring_Boot_Monolithic_App.txt](FSJP/10_Spring_Boot_Monolithic_App.txt) |

---

## 🚀 How to Run

### 1. C Programs (AOA & COA)
Compile and execute using GCC / Clang:
```bash
# Example: Running Quick Sort
gcc AOA/03_Quick_Sort.c -o quick_sort
./quick_sort
```

### 2. 8086 Assembly Programs (COA)
Execute using DOSBox with MASM/TASM:
```bash
# In DOSBox:
masm 03_8086_Arithmetic_8_bit.asm;
link 03_8086_Arithmetic_8_bit.obj;
03_8086_Arithmetic_8_bit.exe
```

### 3. Java Programs (FSJP)
Compile and run with JDK 17+:
```bash
javac FSJP/01_Classes_Objects.java
java -cp FSJP ClassesObjects
```

### 4. Dark Layout Hospital HMS Portal (Exp 06)
Simply open the entry point in any browser:
```bash
# Directly open the login portal
FSJP/06_Static_Website_HTML_CSS_JS/login.html
```
Or open the root interactive showcase:
```bash
index.html
```

---

## 🌐 Web Portal Preview

The repository includes a dark-themed single-page showcase at `index.html`:
- Instant keyword search across all 30 practicals
- Subject filtering (AOA, COA, FSJP)
- Embedded code inspection modal with one-click clipboard copying
- Direct launch shortcuts to the HMS web layouts

---

## 👤 Author

**Pratham Mewada**  
- GitHub: [@PrathamMewada459](https://github.com/PrathamMewada459)  
- Department of Artificial Intelligence & Data Science
