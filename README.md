#  push_swap

## 📚 Description

`push_swap` is a simple yet highly challenging algorithm project. It involves sorting a list of integers using only two stacks (`a` and `b`) and a limited set of operations. The goal is to output the **smallest possible sequence of instructions** to sort the numbers in stack `a` in ascending order.

## 🎯 Objectives

- Implement an efficient sorting algorithm in C.
- Understand and apply algorithmic complexity concepts.
- Practice data structures and memory management.
- Minimize the number of operations required to sort the input.

## 🧾 Rules

- You may only use the predefined operations:  
  `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.
- All input arguments must be valid integers (no duplicates, within the `int` range).
- The program must handle all errors gracefully and free all allocated memory.
- Output must consist **only** of the instructions, each followed by a newline (`\n`).
- No output should be printed if no arguments are provided.
- In case of error (invalid input, duplicates, etc.), print `Error\n` to stderr.

## 🛠️ Usage

```bash
$ ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
