#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;
class Customers
{
public:
  string name, gender, address;
  int age, mobileNo, customerID;
  char all[999];

  void detDetails()
  {
    ofstream out("old-customer.txt", ios::app);
    {
      cout << "Enter Customer ID: ";
      cin >> customerID;
      cout << "Enter Name: ";
      cin >> name;
      cout << "Enter Age: ";
      cin >> age;
      cout << "Enter Mobile Number: ";
      cin >> mobileNo;
      cout << "Enter Address: ";
      cin >> address;
      cout << "Enter Gender: ";
      cin >> gender;
    }

    out << "\nCustomer ID: " << customerID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileNo << "\nAddress: " << address << "\nGender: " << gender << endl;
    out.close();
    cout << "\nSaved \nNote: We save your details record for future purpose \n"
         << endl;
  }

  void showDetails()
  {

    ifstream in("old-customer.txt");
    {
      if (!in)
      {
        cout << "File Error!" << endl;
      }
      while (!(in.eof()))
      {
        in.getline(all, 999);

        cout << all << endl;
      }
      in.close();
    }
  }
};
class Cabs
{
public:
  int cabChoice;
  int kilometers;
  float cabCost;
  float lastcabCost;
  void cabDetails()
  {

    cout << "We collaborated with fastest, safest, and smartest cab service around the country" << endl;
    cout << "------------Uthao Cabs------------\n"
         << endl;
    cout << "1. Rent a Standard Cab - Bdt.25 for 1KM" << endl;
    cout << "2. Rent a Luxury Cab - Bdt.35 per 1KM" << endl;

    cout << "\nTo calculate the cost for your journey:" << endl;
    cout << "Enter which kind of cab you need:";

    cin >> cabChoice;
    cout << "Enter kilometers you have to travel:";
    cin >> kilometers;

    int hireCab;

    if (cabChoice == 1)
    {
      cabCost = kilometers * 25;
      cout << "\nYour tour cost" << cabCost << "taka for Standard Cab" << endl;
      cout << "Press 1 to hire this cab: or";
      cout << "Press 2 select another cab: ";
      cin >> hireCab;

      system("CLS");
      if (hireCab == 1)
      {
        lastcabCost = cabCost;
        cout << "\nYou have successfully hired a Standard cab" << end;
        cout << "Goto Menu and take the receipt" << end;
      }
      else if (hireCab == 2)
      {
        cabDetails();
      }
      else
      {
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease wait!" << endl;
        Sleep(1100);
        system("CLS");
        cabDetails();
      }
    }

    else
    {
      cout << "Invalid Input! Redirecting to Main Menu \nPlease wait!" << endl;
      Sleep(1100);
      system("CLS");
      menu();
    }
    cout << "\Press 1 to go to Main Menu or Press 2 to Exit: ";
    cin >> hireCab;
    system("CLS");
    if (hireCab == 1)
    {
      menu();
    }
    else if (hireCab == 2)
    {
      exit(0);
    }
    else
    {
      cout << "Invalid Input! Redirecting to Main Menu \nPlease wait!" << endl;
      Sleep(1100);
      system("CLS");
      menu();
    }
  }
};
class Booking
{
public:
  int choiceHotel;
  int packChoice;
  float hotelCost;

  void hotels
  {
    string hotelNo[] = = {"Le Meridien", "Seagull", "Pan Pacific"};
    for (int a = 0; a < 3; a++)
    {
      cout << (a + 1) << ". Hotel" << hotelNo[a] << endl;
    }
    I
            cout
        << "InCurrently we collaborated with above hotels!" << endl;
    cout << "Press any key to back or\nEnter number of the hotel you want to book: ";
    cin >> choiceHotel;
    system("CLS");
    if (choiceHotel == 1)
    {
      cout << "------Welcome to Hotel Le Meridien------" << endl;

      cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and enjoy the summer" << endl;

      cout << "Package offered by Hotel Le Meridien" << endl;
      cout << "1. Standard Pack" << endl;
      cout << "\nAll basic facilities you need for: Bdt. 5000 per night" << endl;
      cout << "2. Premium Pack" << endl;
      cout << "\nEnjoy Premium facilities for: Bdt. 10000 per night" << endl;
      cout << "3. Luxury Pack" << endl;
      cout << "\nEnjoy Luxury facilities for: Bdt. 15000 per night" << endl;

      cout << "\nPress another key to go back or\nEnter number of the package you want to book: ";
      cin >> packChoice;

      if (packChoice == 1)
      {
        hotelCost = 5000;
        cout << "You have successfully booked Standard Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else if (packChoice == 2)
      {
        hotelCost = 10000;
        cout << "You have successfully booked Premium Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else if (packChoice == 3)
      {
        hotelCost = 15000;
        cout << "You have successfully booked Luxury Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else
      {
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease wait!" << endl;
        Sleep(1100);
        system("CLS");
        hotels();
      }

      int gotoMenu;
      cout << "\nPress 1 to go to Main Menu or Press 2 to Exit: ";
      cin >> gotoMenu;
      system("CLS");
      if (gotoMenu == 1)
      {
        menu();
      }
      else if (gotoMenu == 2)
      {
        exit(0);
      }
      else
      {
        cout << "Invalid Input! Redirecting to Main Menu \nPlease wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
      }
    }

    else if (choiceHotel == 2)
    {
      cout << "------Welcome to Hotel Seagull------" << endl;

      cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and enjoy the summer" << endl;

      cout << "Package offered by Hotel Seagull" << endl;
      cout << "1. Standard Pack" << endl;
      cout << "\nAll basic facilities you need for: Bdt. 5000 per night" << endl;
      cout << "2. Premium Pack" << endl;
      cout << "\nEnjoy Premium facilities for: Bdt. 10000 per night" << endl;
      cout << "3. Luxury Pack" << endl;
      cout << "\nEnjoy Luxury facilities for: Bdt. 15000 per night" << endl;

      cout << "\nPress another key to go back or\nEnter number of the package you want to book: ";
      cin >> packChoice;

      if (packChoice == 1)
      {
        hotelCost = 5000;
        cout << "You have successfully booked Standard Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else if (packChoice == 2)
      {
        hotelCost = 10000;
        cout << "You have successfully booked Premium Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else if (packChoice == 3)
      {
        hotelCost = 15000;
        cout << "You have successfully booked Luxury Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else
      {
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease wait!" << endl;
        Sleep(1100);
        system("CLS");
        hotels();
      }

      int gotoMenu;
      cout << "\nPress 1 to go to Main Menu or Press 2 to Exit: ";
      cin >> gotoMenu;
      system("CLS");
      if (gotoMenu == 1)
      {
        menu();
      }
      else if (gotoMenu == 2)
      {
        exit(0);
      }
      else
      {
        cout << "Invalid Input! Redirecting to Main Menu \nPlease wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
      }
    }

    else if (choiceHotel = 3)
    {
      cout << "------Welcome to Hotel Pan Pacific------" << endl;

      cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and enjoy the summer" << endl;

      cout << "Package offered by Hotel Pan Pacific" << endl;
      cout << "1. Standard Pack" << endl;
      cout << "\nAll basic facilities you need for: Bdt. 5000 per night" << endl;
      cout << "2. Premium Pack" << endl;
      cout << "\nEnjoy Premium facilities for: Bdt. 10000 per night" << endl;
      cout << "3. Luxury Pack" << endl;
      cout << "\nEnjoy Luxury facilities for: Bdt. 15000 per night" << endl;

      cout << "\nPress another key to go back or\nEnter number of the package you want to book: ";
      cin >> packChoice;

      if (packChoice == 1)
      {
        hotelCost = 5000;
        cout << "You have successfully booked Standard Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else if (packChoice == 2)
      {
        hotelCost = 10000;
        cout << "You have successfully booked Premium Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else if (packChoice == 3)
      {
        hotelCost = 15000;
        cout << "You have successfully booked Luxury Pack" << endl;
        cout << "Goto Menu and take the receipt" << endl;
      }
      else
      {
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease wait!" << endl;
        Sleep(1100);
        system("CLS");
        hotels();
      }

      int gotoMenu;
      cout << "\nPress 1 to go to Main Menu or Press 2 to Exit: ";
      cin >> gotoMenu;
      system("CLS");
      if (gotoMenu == 1)
      {
        menu();
      }
      else if (gotoMenu == 2)
      {
        exit(0);
      }
      else
      {
        cout << "Invalid Input! Redirecting to Main Menu \nPlease wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
      }
    }
  }
};

class Charges
{
};
int main()
{
  cout << "Hello World" << endl;
  return 0;
}
