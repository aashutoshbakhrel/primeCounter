# Design Document


## Goal

Count prime numbers inside a user-defined integer range.


## Architecture


The project is divided into:

### prime.c

Contains mathematical logic.


### main.c

Handles:

- user interaction
- input/output


### prime.h

Defines public interfaces.


## Design Principles


- Single Responsibility Principle
- Separation of interface and implementation
- Testable modules
- Minimal coupling


## Future Improvements


Possible upgrades:

- Sieve of Eratosthenes
- Multithreading
- JSON output
- Benchmarking
