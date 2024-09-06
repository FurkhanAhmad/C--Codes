#include<iostream>
using namespace std;
class Player{
    public:
    int score;    //Class is a Blue Print
    int health;
};
int main(){
    Player virat; //virat is Object here. Obj 1.
    virat.score=100;
    virat.health=100;
   cout<<virat.score<<endl;
   cout<<virat.health<<endl;
   cout<<endl;
   Player Rohit;
   Rohit.score=120;
   Rohit.health=99;
   cout<<Rohit.score<<endl;
   cout<<Rohit.health<<endl;
   


}