#include <bits/stdc++.h>

using namespace std;

string name;
string corr;
string gender;
string choice;
string pokemon[6];
int pokemonAmt = 0;
string rival;
string opt;
string stage;
string challenger;

class Pokemon { //TODO: make this NOW
  public: 
    Pokemon(string name, int health, int defeated, int type);

    void damage() {

    }

    void heal() {

    }

    void attack() {

    
    }
};

map<string, string> opposite = {
    {"charmander", "squirtle"},
    {"squirtle", "bulbasaur"},
    {"bulbasaur", "charmander"}
};

void checker(string userChoice) {
  //repurpose this eventually
}

string toUpperStr(string s) {
    for (char &c : s) c = toupper(c);
    return s;
}

//TODO: make this work
void battleMaker(string challenger, string stage) {
  opt = "none"; 
  cout << format("{} challenges you to a battle!", toUpperStr(challenger));
    cin.get();
    if (stage == "starter") {
      while (true) {
        cout << format("{} sent out {} ", name, pokemon[0]);
        cout << format("what will you do? (fight / bag / pokemon / run) ");
        cin >> opt;
        if (opt == "fight") {
          //cout << format("{}/20 PP - tackle \n you have no other moves!");
        } else if (opt == "bag") {
          cout << format("there isnt anything in your bag!");
        } else if (opt == pokemon[0]) {
          cout << format("you only have {} as of now", pokemon[0]);
        } else if (opt == "run") {
          cout << "you can't run from a trainer battle! \n";
        } else {
          cout << "you entered an invalid option! try again! \n"; 
        }
      } 
    }
}

int main() { 
  cout << "welcome to pokemon red!\n";
  cout << "this version has been adapted to be text only in terminal! enjoy! :) \n";
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
  cout << "OAK: in this region, we possess something supernatural called pokemon. ";
  cin.get();
  cout << "OAK: we can form lifelong bonds with these pokemon. i have many pokemon that i have cared for since i was your age! ";
  cin.get();
  cout << format("OAK: alright {}, you may now pick your starter! ", name); 
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
  if (pokemonAmt < 6) {
    pokemon[pokemonAmt] = choice;
    pokemonAmt ++;
  }

  cin.ignore(); 
  corr = "n";
  cout << format("OAK: great choice! {} is now your starter and first pokemon! wait a minute.. ", choice);
  cin.get();  
  cout << format("OAK: ah! its my grandson! hello there er... ");
  cin.get();
  do { 
    cout << format("SYS: enter a name for professor oak's grandson: ");
    cin >> rival; 
    cout << format("SYS: {}? is that right? (y/n) ", rival);
    cin >> corr;
  }
  while (corr != "y");
  corr = "n";
  cin.ignore();
  cout << format("OAK: ah! i see now, hi {}! {} has just started to embark on a pokemon journey! would you like to join? ", rival, name);
  cin.get(); 
  cout << format("{}: of course! can i pick a starter? ", toUpperStr(rival));
  cin.get();
  cout << format("OAK: go ahead! ");
  cin.get();
  cout << format("{}: {}, i choose you! ", toUpperStr(rival), opposite[choice]);
  cin.get();
  cout << format("{}: alright {}, to start your pokemon journey, lets have a battle! ", toUpperStr(rival), name);
  cin.get();
  cout << "SYS: battle work in progress, thanks for playing :) \n";
  //TODO: reference battle here
  return 0;
}
