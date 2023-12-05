/*
I. Hotel Management System (100 points)
The project involves creating a basic Hotel Management System where users can perform
various operations related to room management, customer check-in and check-out, and
generate guest summary reports.
Features:
- Manage Rooms
- Add new rooms with details such as type (AC/Non-AC), comfort level, size, and daily rent.
- Search for existing rooms.
- Delete rooms.

**Check-In**
Develop a mechanism to check-in guests, capturing essential details like booking id,
 customer name, address, phone number, booking dates, and advance payment.
Ensure that rooms can only be booked if they are available.

**Get available rooms**
Create a feature that displays a list of available rooms, allowing users to see which
 rooms are ready for check-in.

**Search customer**
Implement a search functionality to find customer details based on their name.
 Display relevant information such as room number, address, and phone number.

**Check-out room**
Develop a system to process customer check-outs, calculating and displaying the bill.
 Include the total amount due, advance payment, and the remaining balance.

**Get guest summary report**
Generate a summary report of guests currently checked into the hotel, including
 their names, room numbers, addresses, and phone numbers.

Implement this in C++ using a customer class, a room class and a hotel management class
 that inherits from the room class.
An example of output is shown below:

######## Hotel Management #########

1. Manage Rooms
2. Check-In Room
3. Available Rooms
4. Search Customer
5. Check-Out Room
6. Guest Summary Report
7. Exit

Enter Option: 1

### Manage Rooms ###
1. Add Room
2. Search Room
3. Delete Room
4. Back to Main Menu

Enter Option: 1

Enter Room Number: 222

Room with AC/No AC (A/N) : A

Type of Comfort (S/N) : S

Room Size (B/S) : B

Daily Rate: 200

 Room Added Successfully!

### Manage Rooms ###
1. Add Room
2. Search Room
3. Delete Room
4. Back to Main Menu

Enter Option: 2

Enter room number: 222
Room Details

Room is available
Room Number: 	222
Room with AC/No AC (A/N): A
Type of Comfort (S/N): S
Room Size (B/S): B
Daily Rate: 200

### Manage Rooms ###
1. Add Room
2. Search Room
3. Delete Room
4. Back to Main Menu

Enter Option: 4

Going back to the main menu

######## Hotel Management #########

1. Manage Rooms
2. Check-In Room
3. Available Rooms
4. Search Customer
5. Check-Out Room
6. Guest Summary Report
7. Exit

Enter Option: 4
Enter Customer Name: Regis

Person not found.
######## Hotel Management #########

1. Manage Rooms
2. Check-In Room
3. Available Rooms
4. Search Customer
5. Check-Out Room
6. Guest Summary Report
7. Exit

Enter Option: 2

Enter Room number : 222

Enter booking id: 2223

Enter Customer Name (First Name): Regis

Enter Address (city only): Honolulu

Enter Phone: 987654321

Check-in Date: 12/01

Check-out Date: 12/12

Enter Advance Payment: 150

 Customer Checked-in Successfully..
 
 ######## Hotel Management #########

1. Manage Rooms
2. Check-In Room
3. Available Rooms
4. Search Customer
5. Check-Out Room
6. Guest Summary Report
7. Exit

Enter Option: 4
Enter Customer Name: Regis

Customer Name: Regis
Room Number: 222

Press enter for next record
######## Hotel Management #########

1. Manage Rooms
2. Check-In Room
3. Available Rooms
4. Search Customer
5. Check-Out Room
6. Guest Summary Report
7. Exit

Enter Option: 5
Enter Room Number : 222

Enter Number of Days:	11

	######## CheckOut Details ########

Customer Name : Regis
Room Number : 222
Address : Honolulu
Phone : 987654321
Total Amount Due : 2200 /
Advance Paid: 150 /
*** Total Payable: 2050/ only

######## Hotel Management #########

1. Manage Rooms
2. Check-In Room
3. Available Rooms
4. Search Customer
5. Check-Out Room
6. Guest Summary Report
7. Exit

Enter Option: 1

### Manage Rooms ###
1. Add Room
2. Search Room
3. Delete Room
4. Back to Main Menu

Enter Option: 3

Enter room number to delete: 222

Room Details to Delete

Room Number: 	222
Room with AC/No AC (A/N): A
Type of Comfort (S/N): S
Room Size (B/S): B
Daily Rate: 200
Room Deleted Successfully!
### Manage Rooms ###
1. Add Room
2. Search Room
3. Delete Room
4. Back to Main Menu

Enter Option: 4

Going back to the main menu

######## Hotel Management #########

1. Manage Rooms
2. Check-In Room
3. Available Rooms
4. Search Customer
5. Check-Out Room
6. Guest Summary Report
7. Exit

Enter Option: 7

THANK YOU! FOR USING SOFTWARE
*/


