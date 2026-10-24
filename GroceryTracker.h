#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <map>
#include <string>

using namespace std;

class GroceryTracker {
public:
   GroceryTracker(string inputFileName, string backupFileName);

   int GetItemFrequency(string itemName) const;
   void PrintAllFrequencies() const;
   void PrintHistogram() const;

private:
   map<string, int> itemFrequency;
   string inputFileName;
   string backupFileName;

   void LoadInputFile();
   void CreateBackupFile() const;
};

#endif
