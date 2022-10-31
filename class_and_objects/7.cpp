#include<iostream>
#include<vector>
#include<string>
using namespace std;
class player//declaring class
    {
        public:
     string name;
     int health;
     int xp;
     void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;}
    };

int main()
{   player Frank;
    Frank.name="frank";
    Frank.health=100;
    Frank.xp=12;
    cout<<Frank.health<<" "<<Frank.name<<endl;//accessing data members
    player hero;
    hero.name="Hero";
    hero.health=99;
    hero.xp=13;
    Frank.talk("Hi there");
    player *enemy=new player;//pointer to object
    (*enemy).name="Enemy";
    enemy->xp=15;
    enemy->health=100;
    enemy->talk("I will destroy you");
    Frank.talk("HI, THERE");
    delete enemy;
    
}
