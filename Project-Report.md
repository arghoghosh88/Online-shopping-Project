🛒 Argho Online Shopping System

A console-based online shopping application developed in C++ using Object-Oriented Programming (OOP) principles.
This project simulates a simple e-commerce workflow including product selection, discount calculation, billing, and PIN-based payment verification.

📖 Project Overview

The Argho Online Shopping System is designed as an academic mini-project to demonstrate the use of C++ and OOP concepts in building a real-world inspired application.
Users can choose products from a predefined list, receive automatic discounts based on price ranges, and complete purchases using a virtual account balance.

🎯 Objectives

Implement a basic online shopping system in C++

Apply Object-Oriented Programming concepts

Practice arrays of objects and function design

Implement conditional discount logic

Simulate secure payment using PIN verification

🧑‍💻 Technologies Used

Programming Language: C++

Programming Paradigm: Object-Oriented Programming (OOP)

Compiler: GCC / CodeBlocks

Standard Library: <bits/stdc++.h>

🏗️ Project Structure
📦 Argho-Online-Shopping-System
 ┣ 📄 main.cpp
 ┗ 📄 README.md

🧠 OOP Concepts Applied

Class and Object

Encapsulation

Getter and Setter methods

Arrays of objects

Friend function

Modular function design

🛍️ Available Products

Laptop

PC Items

Dresses

Shoes

Grocery

Television

Smart Phone

Refrigerator

Washing Machine

Educational Products

Each product has a predefined price range for realistic simulation.

💸 Discount Policy
Price Range (BDT)	Discount
1,000 – 5,000	10%
5,001 – 10,000	12%
10,001 – 50,000	15%
50,001 – 100,000	20%
100,001 – 200,000	25%

Discounts are applied automatically based on the entered product price.

🔄 Program Workflow

Display welcome message

User enters name and sets PIN

User selects number of products

Product list is displayed

User selects products and enters prices

Discount is calculated for each product

Billing summary is displayed

User re-enters PIN for payment verification

Total amount is deducted from balance

Updated balance is shown

▶️ How to Run
Compile
g++ main.cpp -o shopping

Run
./shopping

✅ Key Features

Menu-driven interface

Multiple product purchase support

Automatic discount calculation

PIN-based secure payment

Virtual account balance system

Clear billing and summary output

⚠️ Limitations

Console-based application (no GUI)

No database or file storage

PIN is stored as plain text

No input validation for incorrect prices

Single-user system

🔮 Future Improvements

Add file handling to store user and order data

Implement multiple user accounts

Add product quantity support

Encrypt PIN for better security

Develop GUI using Qt or graphics libraries

Add admin panel for product management

📚 Learning Outcomes

Through this project, the following skills were developed:

Practical use of OOP concepts in C++

Designing menu-driven applications

Implementing discount and billing logic

Handling user input and validation

Writing clean and modular code

👤 Author

Argho
CSE Student
Bangladesh 🇧🇩

⭐ Acknowledgement

Thanks to instructors, classmates, and online C++ documentation that helped during the development of this project.
