##  Features

* **Customer Management:** Dynamic onboarding and registration of new clients stored in memory.
* **Secure Ledger Operations:** Robust mechanisms for processing financial transactions:
    * **Deposits:** Instant balance updates.
    * **Withdrawals:** Embedded security layers preventing overdrafts.
* **Peer-to-Peer (P2P) Fund Transfers:** Secure intra-bank money transfers with multi-account validation and balance sufficiency checks.
* **Modular Architecture:** Organized into distinct entity classes (`Customer`, `Employee`, `User`) and management modules to ensure scalability.

---

##  Tech Stack & Concepts Applied

* **Language:** C++ (Structured into multi-file components `.h` / `.cpp`).
* **Object-Oriented Programming (OOP):** Encapsulation, inheritance, access specifiers, and constructors/destructors.
* **Data Structures:** Utilized dynamic memory allocations through standard vectors (`std::vector`) to manage application state.
* **Defensive Programming:** Implemented conditional logical validation guards against incorrect runtime inputs (e.g., account-not-found loops, insufficient fund flags).

---

##  Future Roadmap

- [ ] Integrate **File Handling (I/O)** to persist banking ledger data across system reboots.
- [ ] Add User Authentication with encrypted passwords for customers and employees.
- [ ] Transition the CLI into a modern Graphical User Interface (GUI).
