#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib> // For system function

using namespace std;

/*****************************
 *                           *
 *       Declarations        *
 *                           *
 *****************************/

void PrintMainHeader();
void PrintPageTitle(string Title);

/*****************************
 *                           *
 *         Database          *
 *                           *
 *****************************/

// Write a new Line to data file
void WriteLine(string line)
{
    ofstream file("data.txt", ios::app);
    file << line << "\n";
    file.close();
}

// Read All data rows from data file
vector<string> ReadAll()
{
    ifstream file("data.txt");
    vector<string> allLines;

    string line;
    while (getline(file, line))
    {
        allLines.push_back(line);
    }
    file.close();
}

// Get Last Id + 1
int GetNewId()
{
    ifstream file("LastId.txt");
    string line;
    getline(file, line);
    file.close();

    ofstream file2("LastId.txt");
    int id = stoi(line) + 1;
    file2 << id;
    file2.close();

    return id;
}

/*****************************
 *                           *
 *          Models           *
 *                           *
 *****************************/

class Person
{
public:
    // Attributes :

    int Id;
    string Name;
    string Family;
    int Age;
    int Height;
    float Weight;
    // Female : 1 , Male : 0
    bool Gender;
    string EyeColor;
    string SkinColor;
    string Religion;
    string Location;
    string Vehicle;
    double Money;

    // Methods :

    // Constructor For Creating Object from User Inputs
    Person(string name, string family, string age, string height, string weight, string gender, string eyeColor, string skinColor, string religion, string location, string vehicle, string money)
    {
        Id = 0;
        if (name != "")
        {
            Name = name;
        }
        if (family != "")
        {
            Family = family;
        }
        if (age != "")
        {
            Age = stoi(age);
        }
        if (height != "")
        {
            Height = stoi(height);
        }
        if (weight != "")
        {
            Weight = stof(weight);
        }
        if (gender != "")
        {
            if (gender == "1")
            {
                Gender = true;
            }
            else
            {
                Gender = false;
            }
        }
        if (eyeColor != "")
        {
            EyeColor = eyeColor;
        }
        if (skinColor != "")
        {
            SkinColor = skinColor;
        }
        if (religion != "")
        {
            Religion = religion;
        }
        if (location != "")
        {
            Location = location;
        }
        if (vehicle != "")
        {
            Vehicle = vehicle;
        }
        if (money != "")
        {
            Money = stod(money);
        }
    }

    // Show Person Infromation in Rows
    void ShowInformation()
    {
        PrintMainHeader();
        PrintPageTitle("Person Information");

        if (Id != 0)
            cout << "Id : " << Id << "\n";

        if (Name != "")
            cout << "Name : " << Name << "\n";

        if (Family != "")
            cout << "Family : " << Family << "\n";
        if (Age != 0)
            cout << "Age : " << Age << "\n";
        if (Height != 0)
            cout << "Height : " << Height << "\n";
        if (Weight != 0)
            cout << "Weight : " << Weight << "\n";
        cout << "Gender : " << Gender << "\n";
        if (EyeColor != "")
            cout << "Eye Color : " << EyeColor << "\n";
        if (SkinColor != "")
            cout << "Skin Color : " << SkinColor << "\n";
        if (Religion != "")
            cout << "Religion : " << Religion << "\n";
        if (Location != "")
            cout << "Location : " << Location << "\n";
        if (Vehicle != "")
            cout << "Vehicle : " << Vehicle << "\n";
        cout << "Money : " << Money << "\n";
    }

    /********************/
    //  Crud Functions  //
    /********************/

    // Create Function :
    void Create()
    {
        // Get New Id for this Person
        Id = GetNewId();

        // Create string CSV Data Line
        string DataLine = to_string(Id) + ',' + Name + ',' + Family + ',' + to_string(Age) + ',' + to_string(Height) + ',' + to_string(Weight) + ',' + to_string(Gender) + ',' + EyeColor + ',' + SkinColor + ',' + Religion + ',' + Location + ',' + Vehicle + ',' + to_string(Money);

        // Write Data Line to Data File
        WriteLine(DataLine);
    }

    // Read All Function
    vector<string> Read()
    {
    }
};

/*****************************
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
    cout << "Enter Weight Range (Ex : 50.3,70.6) : ";
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

    cout << "----- Enter New Person Inforation -----"
         << "\n";

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

    // Create Person Object :
    Person P(Name, Family, Age, Height, Weight, Gender, EyeColor, SkinColor, Religion, Location, Vehice, Money);

    // Show Person Information to Confirm :
    P.ShowInformation();

    // Get Confirmation And Add New Person to data File:
    cout << "Press Enter To Confirm the Information ...";
    string UserInput;
    getline(cin, UserInput);

    // Create The Person in Data File :
    P.Create();
    cout << "Person Added Successfully. Press Enter and return to Main Menu ...";
    getline(cin, UserInput);
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
        LoadAddPersonPage();
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