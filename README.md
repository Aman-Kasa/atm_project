![ATM-PROJECT](https://imgs.search.brave.com/CrvsB9e5pkhap1opZGkz1W5Q-BYU2f61tiMAh7FkV6g/rs:fit:860:0:0:0/g:ce/aHR0cHM6Ly9pMi53/cC5jb20vd3d3Lm1l/ZGlhbmlnZXJpYS5j/b20vd3AtY29udGVu/dC91cGxvYWRzLzIw/MTgvMDUvQVRNLmpw/Zz9maXQ9NjE1LDUw/MCZzc2w9MQ)

# ATM Project in C

## Description
This project simulates a simple ATM system for a **single user** in C.  
It allows the user to:
- Check account balance
- Deposit money
- Withdraw money
- Exit the program


The program uses **functions, loops, and conditional statements** to implement modular design and input validation.

---


## Features
- **Check Balance:** Displays the current account balance.  
- **Deposit:** Adds a specified amount to the balance. Only positive amounts are accepted.  
- **Withdraw:** Subtracts a specified amount from the balance if sufficient funds are available. Only positive amounts are accepted.  
- **Exit:** Terminates the program gracefully.
-----------------------------
ATM Menu:
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Enter your choice:
-------------------------------

### Input Validation
- Menu selection must be a number from 1–4.
- Deposit and withdrawal amounts must be **positive numbers**.
- Withdrawal cannot exceed the current balance.
- Invalid inputs (letters, symbols) display an error message and prompt the user again.

---


## How to Compile and Run

- Open a terminal and navigate to the project folder:
````bash
----->>>>> gcc atm.c -o gcc atm
----->>>>>./atm


## git-hub reposotory
    ------->>>>>>>>>>https://github.com/Aman-Kasa/atm_project.git

