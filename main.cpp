#include <iostream>

using namespace std;

int main()
{
    int bottles = 99;
    while (bottles >= 3){
        cout << bottles << " bottles of beer on the wall,"
             << bottles << " bottles of beer." << endl;
        --bottles;
        cout << "You take one down, pass it around," << endl;
        cout << bottles << " bottles of beer on the wall.";
        cout << endl << endl << endl;
    }
    cout << "2 bottles of beer on the wall, "
         << "2 bottles of beer." << endl;
    cout << "You take one down, pass it around," << endl;
    cout << "1 bottle of beer on the wall.";
    cout << endl << endl << endl;
    cout << "1 bottle of beer on the wall,"
         << "1 bottle of beer." << endl;
    cout << "You take it down, pass it around," << endl;
    cout << "Go home, you're drunk!" << endl;
    return 0;
}
