# ft_printf

The `ft_printf` function is a project that aims to implement a simplified version of the standard `printf` function in C. This custom printf function provides similar functionality to the original printf, allowing users to format and print output to the standard output stream or a specified file descriptor.

## Table of Contents

- [About](#about)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## About

The `ft_printf` function accepts a format string and a variable number of arguments, similar to the standard `printf` function. It parses the format string, processes the format specifiers, and outputs the formatted result to the standard output stream or a specified file descriptor. This project is commonly assigned in coding schools to reinforce students' understanding of string manipulation, variadic functions, and output formatting in C programming.

## Features

- Supports a subset of format specifiers, including `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, and `%%`.
- Handles width and precision modifiers.
- Returns the number of characters printed (excluding the null byte used to end the output to strings).

## Getting Started

### Prerequisites

- Basic understanding of variadic functions and string manipulation in C programming

### Installation

git clone git@github.com:Bussiereg/ft_printf.git
make
make compile

## Usage

The `ft_printf` function has the following prototype:

```c
int ft_printf(const char *format, ...);
