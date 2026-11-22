# Bank Account Management using C++

## Problem Statement

Write a C++ program that uses a class named `BankAccount` to manage an account. The balance and the count of declined withdrawals must be private data members, and they can be changed only through the public member functions of the class.

Each operation is either a deposit (`D`) or a withdrawal (`W`).

- A deposit adds the given amount to the account balance.
- A withdrawal subtracts the amount only when it is not greater than the current balance.
- If a withdrawal amount is greater than the current balance, the withdrawal is declined, the balance remains unchanged, and the declined-withdrawal count increases by one.

After all operations, print the final balance and the number of declined withdrawals.

## Input Format

- The first line contains two space-separated integers: the initial account balance and the number of operations, `n`.
- Each of the next `n` lines contains an operation character (`D` or `W`) and an integer amount, separated by a space.

## Output

Print two space-separated values:
1. The final account balance.
2. The number of declined withdrawals.

## Concepts Practised

- Classes and objects
- Encapsulation
- `private` and `public` access specifiers
- Constructors
- Member functions
- Conditional statements and loops

## Illustrative Example

This is a self-created example to demonstrate the program's behaviour; it is not presented as an official sample test.

**Input**
```text
100 4
D 50
W 30
W 150
D 20
```

**Output**
```text
140 1
```

## Learning Note

The `balance` and `count` variables are private, so code outside the class cannot access or modify them directly. Public member functions provide controlled access to the account operations. This is an example of encapsulation.
