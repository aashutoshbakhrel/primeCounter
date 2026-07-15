```markdown
# Prime Counter

A clean and modular C command-line application that counts the number of prime numbers between two user-provided values.

The project demonstrates professional C project organization with separated source code, headers, testing, and build automation.

---

## Features

- Count prime numbers within any integer range
- Efficient prime detection algorithm
- Modular source architecture
- Header/source separation
- Automated testing
- Makefile-based build system
- Clean and maintainable code structure

---

## Project Structure

```

prime-counter/
│
├── README.md
├── LICENSE
├── Makefile
├── .gitignore
│
├── include/
│   └── prime.h
│
├── src/
│   ├── main.c
│   └── prime.c
│
├── tests/
│   └── test_prime.c
│
└── docs/
└── design.md

````

---

## Requirements

Before building, make sure you have:

- GCC compiler
- Make utility
- C17 compatible environment

Check GCC installation:

```bash
gcc --version
````

Check Make installation:

```bash
make --version
```

---

## Build

Clone the repository:

```bash
git clone <repository-url>
```

Enter the project directory:

```bash
cd prime-counter
```

Compile the project:

```bash
make
```

This creates the executable:

```
prime-counter
```

---

## Run

Execute the program:

```bash
./prime-counter
```

Example:

```
=============================
       Prime Counter
=============================

Enter starting number: 1
Enter ending number: 100

Prime numbers between 1 and 100: 25
```

---

## Testing

The project includes automated tests.

Run:

```bash
make test
```

Expected output:

```
All tests passed.
```

---

## Algorithm

The program uses an optimized trial division approach.

For every number:

1. Numbers less than 2 are rejected.
2. Number 2 is handled separately.
3. Even numbers greater than 2 are rejected.
4. Only odd divisors up to √n are tested.

This reduces unnecessary calculations compared to checking every possible divisor.

---

## Complexity

For checking a single number:

```
Time Complexity: O(√n)
Space Complexity: O(1)
```

For counting primes in a range:

```
Time Complexity: O(n√n)
Space Complexity: O(1)
```

---

## Design Philosophy

The project follows these principles:

### Separation of Concerns

Different responsibilities are separated:

* `main.c`

  * Handles user interaction
  * Controls program flow

* `prime.c`

  * Contains mathematical logic

* `prime.h`

  * Defines public interfaces

### Maintainability

The structure allows future improvements without rewriting existing components.

Possible extensions:

* Faster prime algorithms
* Sieve of Eratosthenes implementation
* Large number support
* Benchmarking tools
* Graphical interface

---

## Commands

Build:

```bash
make
```

Run tests:

```bash
make test
```

Clean generated files:

```bash
make clean
```

---

## Future Improvements

* Add command-line arguments
* Add input validation
* Add performance benchmarks
* Support very large ranges
* Add continuous integration workflow

---

## License

This project is licensed under the MIT License.

You are free to use, modify, and distribute this project with proper attribution.

```
```
