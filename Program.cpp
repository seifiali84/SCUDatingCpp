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
void clearScreen()
{
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
    cout << "|----------------------------------------------------------------------------------------|"
         << "\n";
    cout << "|  ____      ____    _   _       ____       _       _____               _   _     ____   |"
         << "\n";
    cout << "| / __\"| uU /\"___|U |\"|u| |     |  _\"\\  U  /\"\\  u  |_ \" _|     ___     | \\ |\"| U /\"___| u|"
         << "\n";
    cout << "|<\\___ \\/ \\| | u   \\| |\\| |    /| | | |  \\/ _ \\/     | |      |_\"_|   <|  \\| |>\\| |  _ / |"
         << "\n";
    cout << "| u___) |  | |/__   | |_| |    U| |_| |\\ / ___ \\    /| |\\      | |    U| |\\  |u | |_| |  |"
         << "\n";
    cout << "| |____/>>  \\____| <<\\___/      |____/ u/_/   \\_\\  u |_|U    U/| |\\u   |_| \\_|   \\____|  |"
         << "\n";
    cout << "|  )(  (__)_// \\\\ (__) )(        |||_    \\\\    >>  _// \\\\_.-,_|___|_,-.||   \\\\,-._)(|_   |"
         << "\n";
    cout << "| (__)    (__)(__)    (__)      (__)_)  (__)  (__)(__) (__)\\_)-' '-(_/ (_\")  (_/(__)__)  |"
         << "\n";
    cout << "|----------------------------------------------------------------------------------------|"
         << "\n";
}

// Print Title Of Page That Program on it
void PrintPageTitle(string Title)
{
    cout << "|";
    for (int i = 0; i < 44 - (Title.size() / 2); i++)
    {
        cout << ' ';
    }
    cout << Title;
    if (Title.size() % 2 == 0)
    {
        for (int i = 0; i < 44 - (Title.size() / 2); i++)
        {
            cout << ' ';
        }
    }
    else
    {
        for (int i = 0; i < 43 - (Title.size() / 2); i++)
        {
            cout << ' ';
        }
    }
    cout << "|"
         << "\n";
    cout << "|----------------------------------------------------------------------------------------|"
         << "\n";
}

// Print Main Menu Options :
void PrintMainMenu()
{
    PrintMainHeader();
    PrintPageTitle("Main Menu");
    cout << "1) Find a Person"
         << "\n";
    cout << "2) Add New Person"
         << "\n";
    cout << "3) Delete a Person"
         << "\n";
}

// Program Start :
int main()
{
    PrintMainMenu();
    return 0;
}