#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // For system function


using namespace std;

/****************************
 *                           *
 *          Models           *
 *                           *
 *****************************/

class Person
{
public:
    // Attributes :
    string Name;
    string Family;
    int Age;
    int Height;
    float Weight;
    bool Gender;
    string EyeColor;
    string SkinColor;
    string Religion;
    string Location;
    string Vehicle;
    double Money;

    // Methods :

};


/****************************
 *                           *
 *      Peresentation        *
 *                           *
 *****************************/

// A Function For Clear the Terminal in Windows or Another Operating Systems
void clearScreen() {
    #ifdef _WIN32
        // For Windows
        std::system("cls");
    #else
        // For Linux and macOS
        std::system("clear");
    #endif
}

// Program Start :
int main()
{

    return 0;
}