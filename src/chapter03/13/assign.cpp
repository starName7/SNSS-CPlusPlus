// assign.cpp -- type changes on initialization
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree = 3;
    int quess(3.9832);
    int debt = 7.2E12;
    cout << "tree = " << tree << endl;
    cout << "quess = " << quess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}