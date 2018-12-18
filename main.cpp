<<<<<<< HEAD
#include <iostream>

using namespace std;

string firstLine = " bottles of beer on the wall, ";
string secondLine = " bottles of beer. ";
string endLine = " bottles of beer on the wall.";
string pass = "You take one down pass it around,";

void sing(int bottle) {
    cout << bottle << firstLine << bottle << secondLine << endl;
    --bottle;
    cout << pass <<  bottle << endLine << endl;
    if (bottle > 3) {
        sing(bottle);
    }


}


int main()
{

    int bottles = 99;
    sing(bottles);


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
=======
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
>>>>>>> 4d9d880a056edc71683b43d9d408c47b4969e8ae
