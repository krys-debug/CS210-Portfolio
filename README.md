# CS 210 Portfolio

## Corner Grocer Item Tracking Program

### Project Summary

For this project, I created a C++ item tracking program for the Corner Grocer. The program reads a text file containing grocery items purchased throughout the day and counts how often each item appears. The user can search for a specific item, display all item frequencies, view the frequencies as a histogram, or exit the program. The program also creates a backup data file automatically when it starts.

### What I Did Well

One part of this project that I think went well was organizing the program instead of putting everything into main. I created a GroceryTracker class and separated the class declaration, implementation, and main program into different files. I also used a map to store each grocery item with its frequency, which made the counting process simple and kept the results organized. I added comments throughout the code and included menu input validation so invalid input does not immediately break the program.

### Areas I Could Improve

One improvement I would make is allowing item searches to ignore capitalization. Right now, a user needs to enter the item using the same capitalization as the input file. I could normalize both the stored item names and the search input before comparing them. I could also expand the file error handling so the program gives more detailed feedback when an input or output file cannot be opened. These changes would make the program easier to use and more reliable.

### Challenges and Resources

The more challenging parts were reading the input file correctly, accumulating the frequencies, and making sure the backup file was created automatically. Working with a map was also newer to me, so I had to make sure I understood how each item name worked as the key and the purchase count worked as the value. Testing each menu option separately helped me catch problems and confirm the results. Resources I can continue using include zyBooks, course materials, C++ documentation, and the Visual Studio debugger.

### Transferable Skills

This project gave me practice with several skills that will transfer to future coursework and programming projects. These include object oriented programming, classes, header and implementation files, maps, loops, functions, file input and output, user input validation, and debugging. It also helped me get better at breaking a larger problem into smaller pieces instead of trying to handle everything in one function.

### Maintainability, Readability, and Adaptability

I used descriptive function and variable names so the purpose of each part of the program is clear. The GroceryTracker class keeps the item data and file processing logic together, while main stays focused on the menu and user interaction. Keeping the program split into separate files makes it easier to read and makes future changes easier because one part of the program can be updated without rewriting everything else.

## Project Files

- GroceryTracker.h
- GroceryTracker.cpp
- main.cpp
- CornerGrocerInput.txt
- frequency.dat

**Author:** Krystan Sheridan
