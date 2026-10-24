/*
 * CS 210 Project Three
 * Corner Grocer Item Tracking Program
 * Author: Krystan Sheridan
 *
 * This file contains the implementation of the GroceryTracker class.
 * The class reads grocery items from an input file, counts each item's
 * frequency, creates a backup file, and displays frequency information.
 */

#include "GroceryTracker.h"

#include <fstream>
#include <iostream>

using namespace std;

// Constructor initializes file names, loads grocery data,
// and automatically creates the required backup file.
GroceryTracker::GroceryTracker(string inputFileName, string backupFileName) {
   this->inputFileName = inputFileName;
   this->backupFileName = backupFileName;

   LoadInputFile();
   CreateBackupFile();
}

// Reads each grocery item from the input file and counts
// how many times each item appears.
void GroceryTracker::LoadInputFile() {
   ifstream inputFile;
   string itemName;

   inputFile.open(inputFileName);

   if (!inputFile.is_open()) {
      cout << "Error: Unable to open " << inputFileName << endl;
      return;
   }

   while (inputFile >> itemName) {
      ++itemFrequency[itemName];
   }

   inputFile.close();
}

// Creates frequency.dat automatically and writes each item
// along with the number of times it was purchased.
void GroceryTracker::CreateBackupFile() const {
   ofstream backupFile;

   backupFile.open(backupFileName);

   if (!backupFile.is_open()) {
      cout << "Error: Unable to create " << backupFileName << endl;
      return;
   }

   for (const auto& item : itemFrequency) {
      backupFile << item.first << " " << item.second << endl;
   }

   backupFile.close();
}

// Returns the frequency of a requested grocery item.
// If the item was not found, zero is returned.
int GroceryTracker::GetItemFrequency(string itemName) const {
   auto item = itemFrequency.find(itemName);

   if (item != itemFrequency.end()) {
      return item->second;
   }

   return 0;
}

// Displays every grocery item and its numeric frequency.
void GroceryTracker::PrintAllFrequencies() const {
   cout << endl;
   cout << "Item Purchase Frequencies" << endl;
   cout << "-------------------------" << endl;

   for (const auto& item : itemFrequency) {
      cout << item.first << " " << item.second << endl;
   }
}

// Displays every grocery item as a text-based histogram.
void GroceryTracker::PrintHistogram() const {
   cout << endl;
   cout << "Item Purchase Histogram" << endl;
   cout << "-----------------------" << endl;

   for (const auto& item : itemFrequency) {
      cout << item.first << " ";

      for (int i = 0; i < item.second; ++i) {
         cout << "*";
      }

      cout << endl;
   }
}
