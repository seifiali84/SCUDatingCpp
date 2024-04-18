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

// a Function for Printing Header of Program
void PrintMainHeader()
{
    clearScreen();
    cout << "|----------------------------------------------------------------------------------------|" << "\n";
    cout << "|  ____      ____    _   _       ____       _       _____               _   _     ____   |" << "\n";
    cout << "| / __\"| uU /\"___|U |\"|u| |     |  _\"\\  U  /\"\\  u  |_ \" _|     ___     | \\ |\"| U /\"___| u|" << "\n";
    cout << "|<\\___ \\/ \\| | u   \\| |\\| |    /| | | |  \\/ _ \\/     | |      |_\"_|   <|  \\| |>\\| |  _ / |" << "\n";
    cout << "| u___) |  | |/__   | |_| |    U| |_| |\\ / ___ \\    /| |\\      | |    U| |\\  |u | |_| |  |" << "\n";
    cout << "| |____/>>  \\____| <<\\___/      |____/ u/_/   \\_\\  u |_|U    U/| |\\u   |_| \\_|   \\____|  |" << "\n";
    cout << "|  )(  (__)_// \\\\ (__) )(        |||_    \\\\    >>  _// \\\\_.-,_|___|_,-.||   \\\\,-._)(|_   |" << "\n";
    cout << "| (__)    (__)(__)    (__)      (__)_)  (__)  (__)(__) (__)\\_)-' '-(_/ (_\")  (_/(__)__)  |" << "\n";
    cout << "|----------------------------------------------------------------------------------------|" << "\n";
}


// Program Start :
int main()
{
    PrintMainHeader();
    return 0;
}