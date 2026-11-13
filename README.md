# Simple Calculator

![Language](https://img.shields.io/badge/language-C11-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

A lightweight, robust command-line calculator written in C supporting basic arithmetic operations and safe input handling.

## Features

- **Core Operations:** Addition (`+`), Subtraction (`-`), Multiplication (`*`), and Division (`/`).
- **Safe Input Validation:** Rejects non-numeric inputs and invalid operators, flushing leftover `stdin` characters via `remove_trails()` to prevent infinite input loops.
- **Division-by-Zero Protection:** Catches zero divisors cleanly before computing.
- **Interactive CLI Loop:** Continuous calculation menu with `q` / `Q` to exit cleanly.

## Getting Started

### Prerequisites

- **C Compiler:** GCC or Clang (supporting C11 standard)
- **Build Tool:** `make` or `mingw32-make` (optional)

### Installation

Clone the repository and navigate to the project directory:
```bash
git clone [https://github.com/OmarHanyMohsen/Simple-Calculator.git](https://github.com/OmarHanyMohsen/Simple-Calculator.git)
cd Simple-Calculator