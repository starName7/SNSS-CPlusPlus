// exceed.cpp -- exceeding some integer limits
#include <iostream>
#include <climits>
#define ZERO 0
using namespace std;
int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl
         << "Now ";
    sam = sam + 1;
    sue = sue + 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Add $1 from each account." << endl
         << "Now ";

    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam  has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Lucky Suel!" << endl;
    return 0;
}