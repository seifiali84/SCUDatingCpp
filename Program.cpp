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

// Print Filtered People
void ShowFilterPeople(string Name, string Family, string Age, string Height, string Weight, string Gender, string EyeColor, string SkinColor, string Religion, string Location, string Vehicle, string Money)
{
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
         << "\n\n";
}

// Print User Filters in Rows
void PrintFilters(string Name, string Family, string Age, string Height, string Weight, string Gender, string EyeColor, string SkinColor, string Religion, string Location, string Vehicle, string Money)
{
    PrintMainHeader();
    PrintPageTitle("Your Filters");

    if (Name != "")
    {
        cout << "Name Filter : " << Name << "\n";
    }
    if (Family != "")
    {
        cout << "Family Filter : " << Family << "\n";
    }
    if (Age != "")
    {
        cout << "Age Filter : " << Age << "\n";
    }
    if (Height != "")
    {
        cout << "Height Filter : " << Height << "\n";
    }
    if (Weight != "")
    {
        cout << "Weight Filter : " << Weight << "\n";
    }
    if (Gender != "")
    {
        cout << "Gender Filter : ";
        if (Gender == "1")
        {
            cout << "Female"
                 << "\n";
        }
        else
        {
            cout << "Male"
                 << "\n";
        }
    }
    if (EyeColor != "")
    {
        cout << "Eye Color Filter : " << EyeColor << "\n";
    }
    if (SkinColor != "")
    {
        cout << "Skin Color Filter : " << SkinColor << "\n";
    }
    if (Religion != "")
    {
        cout << "Religion Filter : " << Religion << "\n";
    }
    if (Location != "")
    {
        cout << "Location Filter : " << Location << "\n";
    }
    if (Vehicle != "")
    {
        cout << "Vehicle Filter : " << Vehicle << "\n";
    }
    if (Money != "")
    {
        cout << "Money Filter : " << Money << "\n";
    }
}

// Load Find a Person Page
void LoadFindPersonPage()
{
    PrintMainHeader();
    PrintPageTitle("Find a Person");
    cout << "----- Set Your Filters to Find Best Person -----"
         << "\n";

    // Name Filter
    cout << "Enter Name : ";
    string Name;
    getline(cin, Name);

    // Family Filter
    cout << "Enter Family : ";
    string Family;
    getline(cin, Family);

    // Age Filter
    cout << "Enter Age Range (Ex : 18,22) : ";
    string Age;
    getline(cin, Age);

    // Height Filter
    cout << "Enter Height Range (Ex : 150,200) : ";
    string Height;
    getline(cin, Height);

    // Weitght Filter
    cout << "Enter Weight Range (Ex : 50,70) : ";
    string Weight;
    getline(cin, Weight);

    // Gender Filter
    cout << "Enter Gender (Enter 0 For Male and 1 for Female) : ";
    string Gender;
    getline(cin, Gender);

    // Eye Color Filter
    cout << "Enter Eye Color : ";
    string EyeColor;
    getline(cin, Gender);

    // Skin Color Filter
    cout << "Enter Skin Color : ";
    string SkinColor;
    getline(cin, SkinColor);

    // Religion Filter
    cout << "Enter Religion : ";
    string Religion;
    getline(cin, Religion);

    // Location Filter
    cout << "Enter Location : ";
    string Location;
    getline(cin, Religion);

    // Vehicle Filter
    cout << "Enter Vehicle : ";
    string Vehice;
    getline(cin, Vehice);

    // Money Filter
    cout << "Enter Money Range (Ex : 100000,1000000): ";
    string Money;
    getline(cin, Money);

    // Show Filters :
    PrintFilters(Name, Family, Age, Height, Weight, Gender, EyeColor, SkinColor, Religion, Location, Vehice, Money);

    // Enter to Continue
    cout << "Press Enter to See Result"
         << "\n";
    string UserInput;
    getline(cin, UserInput);

    ShowFilterPeople(Name, Family, Age, Height, Weight, Gender, EyeColor, SkinColor, Religion, Location, Vehice, Money);
}

void LoadAddPersonPage()
{
    PrintMainHeader();
    PrintPageTitle("Add New Person");

    cout << "----- Enter New Person Inforation -----" << "\n";

    // Get Name :
    cout << "Enter Name : ";
    string Name;
    getline(cin, Name);

    // Get Family
    cout << "Enter Family : ";
    string Family;
    getline(cin, Family);

    // Get Age
    cout << "Enter Age : ";
    string Age;
    getline(cin, Age);

    // Get Height
    cout << "Enter Height : ";
    string Height;
    getline(cin, Height);

    // Get Weitght
    cout << "Enter Weight : ";
    string Weight;
    getline(cin, Weight);

    // Get Gender
    cout << "Enter Gender(Enter 0 For Male and 1 for Female) : ";
    string Gender;
    getline(cin, Gender);

    // Get Eye Color
    cout << "Enter Eye Color : ";
    string EyeColor;
    getline(cin, Gender);

    // Get Skin Color
    cout << "Enter Skin Color : ";
    string SkinColor;
    getline(cin, SkinColor);

    // Get Religion
    cout << "Enter Religion : ";
    string Religion;
    getline(cin, Religion);

    // Get Location
    cout << "Enter Location : ";
    string Location;
    getline(cin, Religion);

    // Get Vehicle
    cout << "Enter Vehicle : ";
    string Vehice;
    getline(cin, Vehice);

    // Get Money
    cout << "Enter Money : ";
    string Money;
    getline(cin, Money);

    
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
    cout << "0) Exit"
         << "\n";
}

// Load Main Menu :
void LoadMainMenu()
{
    // Print Options :
    PrintMainMenu();

    // Get Option From User :
    cout << "Please Enter Your Choice : ";
    string UserOption;
    getline(cin, UserOption);

    if (UserOption == "1")
    {
        // Load Find a Person Page
        LoadFindPersonPage();
    }
    else if (UserOption == "2")
    {
        // Load Add New Person Page
    }
    else if (UserOption == "3")
    {
        // Load Delete a Person Page
    }
    else if (UserOption == "0")
    {
        // Exit From The Program
        return;
    }
    else
    {
        // Invalid Choice!
        cout << "Please Enter a Valid Choice!";
    }
}

// Program Start :
int main()
{
    LoadMainMenu();

    return 0;
}