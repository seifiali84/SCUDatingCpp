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

    static vector<Person> People;
};

int main()
{
    Person p1;
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

    Person::People.push_back(p1);
    Person::People.push_back(p2);

    
    return 0;
}