#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

    // Print People
    static void PrintPeople(vector<Person> People)
    {
        // Print Headers
        cout << "Name,Family,Age,Height,Weight,Gender,Eye Color,Skin Color,Religion,Location,Vehicle,Money"
             << "\n";

        for (Person P : People)
        {
            cout << P.Name << ',' << P.Family << ',' << P.Age << ',' << P.Height << ',' << P.Weight << ',' << P.Gender << ',' << P.EyeColor << ',' << P.SkinColor << ',' << P.Religion << ',' << P.Location << ',' << P.Vehicle << ',' << P.Money << '\n';
        }
    }

    // Filter All People
    static vector<Person> Filter(string name, string family, int MinAge, int MaxAge, int MinHeight, int MaxHeight, float MinWeight, float MaxWeight, bool gender, string eyeColor, string skinColor, string religion, string location, string vehicle, double MinMoney, double MaxMoney, vector<Person> PeopleDB)
    {
        vector<Person> FilteredPeople;

        for (Person P : PeopleDB)
        {
            // Filter Name
            if (name != "" && P.Name != name)
                continue;

            // Filter Family
            if (family != "" && P.Family != family)
                continue;
                
            // Filter Age
            if ((P.Age > MaxAge || P.Age < MinAge) && (MinAge != 0 && MaxAge != 0))
                continue;

            // Filter Height
            if ((P.Height > MaxHeight || P.Height < MinHeight) && (MinHeight != 0 && MaxHeight != 0))
                continue;

            // Filter Weight
            if ((P.Weight > MaxWeight || P.Weight < MinWeight) && (MinWeight != 0 && MaxWeight != 0))
                continue;

            // Filter Gender
            if (P.Gender != gender)
                continue;

            // Filter Eye Color
            if (eyeColor != "" && P.EyeColor != eyeColor)
                continue;

            // Filter Skin Color
            if (skinColor != "" && P.SkinColor != skinColor)
                continue;

            // Filter Religion
            if (religion != "" && P.Religion != religion)
                continue;

            // Filter Location
            if (location != "" && P.Location != location)
                continue;

            // Filter Vehicle
            if (vehicle != "" && P.Vehicle != vehicle)
                continue;

            // Filter Money
            if ((P.Money > MaxMoney || P.Money < MinMoney) && (MinMoney != 0 && MaxMoney != 0))
                continue;

            FilteredPeople.push_back(P);
        }

        return FilteredPeople;
    }

    // Normal Person Constructor for Method Overloading
    Person()
    {
    }
    // Constructor to Create Object From User Input
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
};

// Split Two Int by ','
void SplitInt(string data, int &a, int &b)
{
    if (data != "")
    {
        string TempData = "";
        for (char c : data)
        {
            if (c != ',')
            {
                TempData += c;
            }
            else
            {
                a = stoi(TempData);
                TempData = "";
            }
        }
        b = stoi(TempData);
    }
    else
    {
        a = 0;
        b = 0;
    }
}

// Split Two Float by ','
void SplitFloat(string data, float &a, float &b)
{
    if (data != "")
    {
        string TempData = "";
        for (char c : data)
        {
            if (c != ',')
            {
                TempData += c;
            }
            else
            {
                a = stof(TempData);
                TempData = "";
            }
        }
        b = stof(TempData);
    }
    else
    {
        a = 0;
        b = 0;
    }
}

// Split Two Double By ','
void SplitDouble(string data, double &a, double &b)
{
    if (data != "")
    {
        string TempData = "";
        for (char c : data)
        {
            if (c != ',')
            {
                TempData += c;
            }
            else
            {
                a = stod(TempData);
                TempData = "";
            }
        }
        b = stod(TempData);
    }
    else
    {
        a = 0;
        b = 0;
    }
}

// Print Filtered People
void ShowFilterPeople(string Name, string Family, string Age, string Height, string Weight, string Gender, string EyeColor, string SkinColor, string Religion, string Location, string Vehicle, string Money , vector<Person> PeopleDB)
{
    // Split Min Age and Max Age
    int MinAge;
    int MaxAge;
    SplitInt(Age, MinAge, MaxAge);
    cout << "Min Age : " << MinAge << "\n";
    cout << "Max Age : " << MaxAge << "\n";

    // Split Min and Max Height
    int MinHeight;
    int MaxHeight;
    SplitInt(Age, MinHeight, MaxHeight);

    // Split Min And Max Weight
    float MinWeight;
    float MaxWeight;
    SplitFloat(Weight, MinWeight, MaxWeight);

    // Split Min And Max Money
    double MinMoney;
    double MaxMoney;
    SplitDouble(Money, MinMoney, MaxMoney);

    // Filter and Show People
    vector<Person> People = Person::Filter(Name, Family, MinAge, MaxAge, MinHeight, MaxHeight, MinWeight, MaxWeight, (Gender == "1"), EyeColor, SkinColor, Religion, Location, Vehicle, MinMoney, MaxMoney , PeopleDB);
    Person::PrintPeople(People);
}

int main()
{
    Person p1;
    p1.Id = 1;
    p1.Name = "Ahmad";
    p1.Family = "Mohammadi";
    p1.Age = 20;
    p1.Height = 180;
    p1.Weight = 70;
    p1.Gender = 0;
    p1.EyeColor = "Blue";
    p1.SkinColor = "White";
    p1.Religion = "Islam";
    p1.Location = "Tehran";
    p1.Vehicle = "Pride";
    p1.Money = 37000;

    Person p2;
    p2.Id = 2;
    p2.Name = "Zahra";
    p2.Family = "Ghasemi";
    p2.Age = 22;
    p2.Height = 164;
    p2.Weight = 55;
    p2.Gender = 1;
    p2.EyeColor = "Black";
    p2.SkinColor = "Bronze";
    p2.Religion = "Islam";
    p2.Location = "Abadan";
    p2.Vehicle = "";
    p2.Money = 10000000;

    vector<Person> PeopleDB;

    PeopleDB.push_back(p1);
    PeopleDB.push_back(p2);

    cout << "Enter Your Filters"
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
    string Vehicle;
    getline(cin, Vehicle);

    // Money Filter
    cout << "Enter Money Range (Ex : 100000,1000000): ";
    string Money;
    getline(cin, Money);

    // Filter Person :
    ShowFilterPeople(Name , Family , Age , Height , Weight , Gender , EyeColor , SkinColor , Religion , Location , Vehicle , Money , PeopleDB);


    return 0;
}