📘 Hotel Management System – README

📌 Overview

The Hotel Management System is a simple C program that helps manage room bookings in a hotel.
It allows you to:

Initialize hotel rooms

Book a room

Store customer details

View all booked rooms


This project is great for beginners learning structures, arrays, functions, and basic file handling in C.


---

📁 Project Structure

Hotel-Management/
│
├── hotel_management.c      # Main program file
├── README.md               # Documentation
└── (optional) data.txt     # To store booking data


---

🔧 Features

✔ 1. Room Initialization

All rooms are marked as empty when the program starts.

✔ 2. Room Booking

User can enter:

Room number

Customer name

Number of days


The system checks if a room is already booked.

✔ 3. View Bookings

Displays a list of all booked rooms with:

Room Number

Customer Name

Duration of Stay


✔ 4. Simple and User-Friendly Menu

Easy to navigate using number-based choices.


---

🧩 Technologies Used

C Programming Language

VS Code / GCC Compiler



---

▶️ How to Run

1. Install GCC (if not installed)

Linux:

sudo apt install gcc

Windows (using MinGW or TDM-GCC).

2. Compile the program

gcc hotel_management.c -o hotel

3. Run the program

./hotel


---

📜 Code Explanation

1. Room Structure

typedef struct {
    int isBooked;
    char customerName[50];
    int days;
} Room;

2. Global array of rooms

Room hotel[MAX_ROOMS];

3. Functions

Function	Description

initializeRooms()	Sets all rooms to empty
bookRoom()	Books a room and stores customer details
showBookings()	Displays all booked rooms
main()	Main menu loop



---

📈 Future Improvements

Add room cancellation

Add file storage for saving bookings

Add room rent bill calculation

Add admin login system

Author Subham Rauta
