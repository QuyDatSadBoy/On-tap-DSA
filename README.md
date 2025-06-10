# 📚 On-tap-DSA (Data Structures and Algorithms Review)

This repository contains practice problems and sample code for reviewing Data Structures and Algorithms using C++.

## 📋 Table of Contents

- [Introduction](#introduction)
- [Current Content](#current-content)
- [System Requirements](#system-requirements)
- [Usage](#usage)
- [File Details](#file-details)

## 🎯 Introduction

This project was created for:
- Reviewing and reinforcing Data Structures and Algorithms knowledge
- Practicing generation algorithms
- Learning backtracking algorithms
- Practicing number theory and prime numbers

## 📁 Current Content

### 🔢 Generation Algorithms
- `sinh_nhi_phan.cpp` - Binary sequence generation
- `sinh_to_hop.cpp` - Combination generation
- `sinh_hoan_vi.cpp` - Permutation generation

### ↩️ Backtracking Algorithms
- `back_track_nhi_phan.cpp` - Backtracking binary sequence generation
- `back_track_sinh_to_hop.cpp` - Backtracking combination generation
- `back_track_sinh_hoan_vi.cpp` - Backtracking permutation generation

### 🧮 Mathematics and Number Theory
- `b1.cpp` - Basic mathematical functions:
  - Prime number checking
  - Sieve of Eratosthenes
  - Pascal's triangle for combinations
  - Euclidean algorithm (GCD)
  - Fast exponentiation
  - Legendre's formula

### 🔧 Utilities
- `b3.cpp` - Vector sorting with custom comparator
- `test.cpp` - Basic C++ code template
- `tempCodeRunnerFile.cpp` - Temporary file

## 💻 System Requirements

- **Compiler**: GCC 7.0+ 
- **Language**: C++14 or higher
- **OS**: Windows, Linux, macOS

## 🚀 Usage

### 1. Clone repository

```bash
git clone https://github.com/QuyDatSadBoy/On-tap-DSA.git
cd On-tap-DSA
```

### 2. Compile and run

```bash
# Compile a specific file
g++ -o output filename.cpp

# Run the program
./output
```

### 3. Using with GCC optimization

All files include `#pragma GCC optimize("Ofast")` for speed optimization:

```bash
g++ -O2 -o output filename.cpp
```

## 📝 File Details

### `b1.cpp` - Mathematics Library
Contains basic functions:
- `nto1(n)` - Prime number check O(√n)
- `sieve()` - Sieve of Eratosthenes
- `tohop()` - Pascal's triangle for combinations
- `gcd(a,b)` - Euclidean algorithm
- `pow_mod(a,b)` - Fast exponentiation
- `legendre(n,p)` - Highest power of p in n!

### Generation Algorithms
- **Binary sequences**: Generate all binary sequences of length n
- **Combinations**: Generate all combinations of k elements from n elements
- **Permutations**: Generate all permutations of n elements

### Backtracking Algorithms
Alternative approach to solve the same generation problems using recursion and backtracking.

## ⚡ Standard Code Template

Each file uses this template:

```cpp
#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("Ofast")
const ll mod = (ll)1e9 + 7;
#define endl "\n"
#define all(v) v.begin(), v.end()
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
```

## 📚 Topics Covered

- **Generation algorithms**: Systematic enumeration
- **Backtracking**: Recursive problem solving
- **Number theory**: Basic mathematical concepts
- **Combinatorics**: Counting and arrangements
- **Optimization**: Fast I/O and compiler optimization

## 🔧 Code Examples

### Binary Sequence Generation
```cpp
// Generate all binary sequences of length n=3
// Output: 000, 001, 010, 011, 100, 101, 110, 111
```

### Combination Generation
```cpp
// Generate all combinations C(5,3)
// Output: 123, 124, 125, 134, 135, 145, 234, 235, 245, 345
```

### Mathematical Functions
```cpp
// Check if number is prime
cout << nto1(17); // Output: 1 (true)

// Calculate 2^10 using fast exponentiation
cout << pow_mod(2, 10); // Output: 1024
```

---

⭐ **Note**: This repository is currently under development and will be updated with more content!
