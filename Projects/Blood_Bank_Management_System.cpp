#include <iostream>
#include <string>
using namespace std;

struct Donor
{
    int id;
    string name;
    int age;
    string bloodGroup;
};

Donor donors[100];
int countDonors = 0;

void addDonor()
{
    cout << "\nEnter Donor ID: ";
    cin >> donors[countDonors].id;

    cin.ignore();

    cout << "Enter Donor Name: ";
    getline(cin, donors[countDonors].name);

    cout << "Enter Age: ";
    cin >> donors[countDonors].age;

    cout << "Enter Blood Group: ";
    cin >> donors[countDonors].bloodGroup;

    countDonors++;

    cout << "\nDonor Added Successfully!\n";
}

void displayDonors()
{
    if (countDonors == 0)
    {
        cout << "\nNo donor records found.\n";
        return;
    }

    cout << "\n----- Donor Records -----\n";

    for (int i = 0; i < countDonors; i++)
    {
        cout << "\nDonor " << i + 1 << endl;
        cout << "ID          : " << donors[i].id << endl;
        cout << "Name        : " << donors[i].name << endl;
        cout << "Age         : " << donors[i].age << endl;
        cout << "Blood Group : " << donors[i].bloodGroup << endl;
    }
}

void searchBloodGroup()
{
    string bg;
    bool found = false;

    cout << "\nEnter Blood Group to Search: ";
    cin >> bg;

    for (int i = 0; i < countDonors; i++)
    {
        if (donors[i].bloodGroup == bg)
        {
            found = true;

            cout << "\nID: " << donors[i].id;
            cout << "\nName: " << donors[i].name;
            cout << "\nAge: " << donors[i].age;
            cout << "\nBlood Group: " << donors[i].bloodGroup << endl;
        }
    }

    if (!found)
    {
        cout << "\nNo donor found with blood group " << bg << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== BLOOD BANK MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Donor\n";
        cout << "2. Display All Donors\n";
        cout << "3. Search Donor by Blood Group\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addDonor();
                break;

            case 2:
                displayDonors();
                break;

            case 3:
                searchBloodGroup();
                break;

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}