#include <iostream>
#include <format>
#include <string>
#include <cmath>

using namespace std;

string name;
string corr;
string gender;
string choice;
int pokemon[6];

void checker(string userChoice) {
  //repurpose this eventually
}

int main() { 
  cout << "welcome to pokemon red!\n";
  cout << "this version has been adapted to be text only in terminal! run !!INFO at anytime to get info! enjoy! :) \n";
  do {
    cout << "SYS: enter your name: ";
    cin >> name;
    cout << format("SYS: so your name is {}? ", name) << "\n";  
    cout << "SYS: is this correct? (y/n) ";
    cin >> corr; 
    cin.ignore();
  }
  while (corr != "y");
  cout << "SYS: great! welcome to the world of pokemon! \n";
  corr = "n"; 
  cout << "OAK: hey! im professor oak. welcome to the region of kanto. (enter to continue) ";
  cin.get();
  cout << "OAK: in this region, we possess something supernatural called pokemon. (enter to continue) ";
  cin.get();
  cout << "OAK: we can form lifelong bonds with these pokemon. i have many pokemon that i have cared for since i was your age!  (enter to continue)";
  cin.get();
  cout << format("OAK: alright {}, you may now pick your starter! (enter to continue)", name); 
  cin.get();
  do {
    cout << "OAK: type in the starter you would like: (charmander, squirtle, bulbasaur) ";    
    cin >> choice;
    cout << format("SYS: are you sure that you want to pick {}? you cannot change this later. (y/n) ", choice);
    cin >> corr;
    if (choice != "charmander" && choice != "squirtle" && choice != "bulbasaur") {
      cout << format("SYS: {} is not a valid choice! keep in mind this is case and space sensitive :) \n", choice);
      corr = "n"; 
    }
  }
  while (corr != "y");
  return 0;
}
