/*
 * CS 210 Project Three
 * Corner Grocer Item Tracking Program
 * Author: Krystan Sheridan
 *
 * This program allows the user to search grocery item frequencies,
 * display all item frequencies, view a histogram, or exit the program.
 */

#include "GroceryTracker.h"

#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
   GroceryTracker groceryTracker(
      "CornerGrocerInput.txt",
      "frequency.dat"
   );

   int menuChoice = 0;
   string itemName;

   while (menuChoice != 4) {
      cout << endl;
      cout << "==================================" << endl;
      cout << "          Corner Grocer           " << endl;
      cout << "==================================" << endl;
      cout << "1. Search for an item" << endl;
      cout << "2. Display all item frequencies" << endl;
      cout << "3. Display histogram" << endl;
      cout << "4. Exit" << endl;
      cout << "==================================" << endl;
      cout << "Enter your choice: ";

      cin >> menuChoice;

      // Validate the menu input.
      if (cin.fail()) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');

         cout << endl;
         cout << "Invalid input. Please enter a number from 1 to 4."
              << endl;

         menuChoice = 0;
         continue;
      }

      switch (menuChoice) {
         case 1:
            cout << endl;
            cout << "Enter the item you wish to search for: ";
            cin >> itemName;

            cout << itemName << " was purchased "
                 << groceryTracker.GetItemFrequency(itemName)
                 << " time(s)." << endl;
            break;

         case 2:
            groceryTracker.PrintAllFrequencies();
            break;

         case 3:
            groceryTracker.PrintHistogram();
            break;

         case 4:
            cout << endl;
            cout << "Thank you for using the Corner Grocer "
                 << "Item Tracking Program." << endl;
            break;

         default:
            cout << endl;
            cout << "Invalid selection. Please choose an option from 1 to 4."
                 << endl;
            break;
      }
   }

   return 0;
}
