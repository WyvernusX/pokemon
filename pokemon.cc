#include <bits/stdc++.h>

using namespace std;

string name;
string corr;
string gender;
string choice;
string rival;
string opt;
string stage;
string challenger;
string moveChosen;
int dollars;

/* void backgroundLoop() {
  while (pokemonAmt >= 1) {
    //pokemon[0].levelUp;
    //pokemon[0].faint(pokemon[0].health);
  }
}
*/

class Pokemon { //TODO: make this NOW
public:
    string name;
    int health;
    int level;
    int xp;
    int threshold;
    string type1;
    string type2;
    string move1;
    int pp1;
    string move2;
    int pp2;
    string move3;
    int pp3;
    string move4;
    int pp4;
    string type;
    string oppType;
    bool canEvolve;
    int maxhp;
    int stagesLeft;
    bool fainted; 

    Pokemon(string name, int health, int maxhp, bool canEvolve, int stagesLeft, int level, int xp, int threshold, bool fainted, string type1, string type2, string move1, int pp1, string move2, int pp2, string move3, int pp3, string move4, int pp4, string type) {
      this->name = name;
      this->health;
      this->maxhp;
      this->canEvolve;
      this->stagesLeft;
      this->level;
      this->xp;
      this->threshold;
      this->fainted;
      this->type1;
      this->type2;
      this->move1;
      this->move2;
      this->move3;
      this->move4;
      this->pp1;
      this->pp2;
      this->pp3;
      this->pp4;
      this->type;
    }

    Pokemon() {
    name = "missingno"; 
    health = 20; 
    maxhp = 20;
    canEvolve = false;
    stagesLeft = 0;
    level = 5; 
    xp = 0; 
    threshold = 20;
    fainted = false; 
    type1 = "normal";
    type2 = "none";
    move1 = "tackle"; pp1 = 20;
    move2 = "none"; pp2 = 0;
    move3 = "none"; pp3 = 0;
    move4 = "none"; pp4 = 0;
    type = "none";
    }
    
    void faint() {
      if (health <= 0) {
        health = 0;
        fainted = true;
      }
    }

    void damage(int amt, string oppType) {
      health -= amt;
      faint();
    } 

    void heal() {
      if (type == "joy" || type == "full") {
        health = maxhp; 
      }
    }

    void attack() {
      do {
         
      }
      while (moveChosen == "empty");
    }

    void evolve() {
      if (canEvolve == true && stagesLeft >= 1) {
        //add evolution logic here
      }
    }

    void levelUp() {
      if (xp >= threshold) {
        xp = 0;
        level ++;
        threshold *= 1.1;
      }
    }

    void caught() {

    }
};

Pokemon pokemon[6];
int pokemonAmt = 0;

map<string, string> opposite = {
    {"charmander", "squirtle"},
    {"squirtle", "bulbasaur"},
    {"bulbasaur", "charmander"}
};

map <string, string> weakness = {
  {"water", "grass"},
  {"water", "dragon"},
  {"fire", "water"},
  {"fire",  "rock"},
  {"fire", "dragon"},
  {"grass", "bug"},
  {"grass", "fire"},
  {"grass", "poison"},
  {"grass", "flying"},
  {"grass", "dragon"},
  {"electric", "grass"},
  {"elecric", "dragon"}, 
  //TODO: finish chart and add strength and no effect later
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
        cout << format("{} sent out ", name); //TODO: add this back eventually
        cout << format("what will you do? (fight / bag / pokemon / run) ");
        cin >> opt;
        if (opt == "fight") {
          //cout << format("{}/20 PP - tackle \n you have no other moves!");
        } else if (opt == "bag") {
          cout << format("there isnt anything in your bag!"); //TODO: add back lines 127 and lines 128 back.
        } else if (opt == "pokemon") {
          cout << format("you only have {} as of now", "citykeys");
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
    //TODO: continue ts
    pokemon[0] = Pokemon(choice, 20, 20, true, 2, 5, 0, 20, false, "x", "y", "tackle", 20, "none", 0, "none", 0, "none", 0, "none");
  }
  choice = "";
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
