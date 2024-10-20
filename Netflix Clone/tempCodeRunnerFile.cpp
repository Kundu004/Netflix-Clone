#include <iostream>
using namespace std;

class hero{
    int health;
    char level;
};

int main(){
    hero raju;
    raju.health = 70;
    raju.level = 'B';
    cout<<"Health is: "<<raju.health<<endl;
    cout<<"Level is: "<<raju.level<<endl;
}