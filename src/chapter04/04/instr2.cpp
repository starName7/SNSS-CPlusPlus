// instr2.cpp -- reding more than one word with getline
#include <iostream>
using namespace std;
int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n";
    cin.getline(name,ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert,ArSize);
    cout << "I have some delicious " << dessert;
    cout << " fot you, " << name << ".\n";
    return 0;
}