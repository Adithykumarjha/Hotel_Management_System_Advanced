Hotel Management System (C++)
This is a console-based Hotel Management System project developed using C++ and demonstrates the use of Object-Oriented Programming (OOP) concepts to manage the core functionalities of hotel room booking, customer information, check-in, and check-out.

📑 Contents:

1.Project Overview
2.Key Features
3.Project Structure
4.Concepts Used
5.How to Compile and Run
6.Sample Output
7.Contributors


📌 Project Overview :
The Hotel Management System project allows hotel staff to perform essential operations such as adding rooms, reserving rooms, searching customer details, displaying available rooms, checking out customers, and generating reports. The program is entirely built using C++ and runs in the terminal/command line.

🔑 Key Features
Add and manage room details

Check room availability

Reserve rooms and store customer details

Search for customers by phone number

Check out customers and update room status

Generate a summary report of current guests

🗂️ Project Structure
Hotel_Management.cpp – The main source code file containing all class definitions and functions

The program is organized into multiple classes:

customer – Stores customer details

Room – Manages room information

HotelMgnt – Inherits from Room and handles booking, check-in, check-out, and summary features

💡 Concepts Used
Object-Oriented Programming (OOP) in C++

Classes and objects

Inheritance

Arrays and structures

Input/output operations

Conditional statements and looping constructs

🛠️ How to Compile and Run
Make sure a C++ compiler (like g++) is installed on your system.

Open terminal/command prompt.

Navigate to the folder containing the .cpp file.

Compile using the following command:

g++ Hotel_Management.cpp -o hotel
Run the program using:

./hotel
🖥️ Sample Output
mathematica

Enter Room Number: 101
Enter Booking ID: 23
Enter Customer Name: Aditya
Enter Address: Hyderabad
Enter Phone: 9876543210
Enter From Date: 10-08-2025
Enter To Date: 12-08-2025
Enter Advance Amount: 1500

Customer Checked-In Successfully...


👨‍💻 Contributors
Adithy Kumar Jha
