#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int route1();
int route2();
int route3();
int route4();
int route5();
int tickets1();
int tickets2();
int tickets3();
int details1(int);
int details2(int);
int details3(int);
int payment1(int);
int payment2(int);
int payment3(int);

struct bus_ticket
{
    char date[10];
};

typedef struct person
{
    char name[50];
    char age[10];
    char Phone_number[50];
    char Mail_id[50];
} pers;

int main()
{
    int SOUDES;
    time_t t;
    time(&t);
    cout << ctime(&t);
    struct bus_ticket b[50];
    cout << "\n######  WELCOME TO BUS4U  ######\n\n";
    cout << "Enter the date after this current date and time when you want to travel:\n";
    cin >> b[50].date;
    cout << "\nDate = " << b[50].date << endl;
    cout << "\nThe Bus-Routes on this Date:\n\t1.Guntur-Vijayawada\n\t2.Vizag-Hyderabad\n\t3.Vijayawada-Kadapa\n\t4.Waragal-Ongole\n\t5.Vijayawada-Tirupati\n";
    cout << "\nEnter the bus route number which you want to travel=\n";
    cin >> SOUDES;
    switch (SOUDES)
    {
    case 1:
        route1();
        break;
    case 2:
        route2();
        break;
    case 3:
        route3();
        break;
    case 4:
        route4();
        break;
    case 5:
        route5();
        break;
    }
}

int route1()
{
    cout << "This bus route is Guntur-Vijayawada\n";
    int guvi;
    cout << "Types of buses for the route Guntur-Vijayawada:  ";
    cout << "\n\t 1.APSRTC at 7:00am\n\t 2.LUXURY at 1:00pm\n\t 3.DELUXE at 9:00pm\n";
    cin >> guvi;
    switch (guvi)
    {
    case 1:
        cout << "You have selected APSRTC bus\n";
        tickets1();
        break;
    case 2:
        cout << "You have selected LUXURY bus\n";
        tickets2();
        break;
    case 3:
        cout << "You have selected DELUXE bus\n";
        tickets3();
        break;
    }
}

int route2()
{
    cout << "This bus route is Vizag-Hyderabad\n";
    int vihy;
    cout << "Types of buses for the route Vizag-Hyderabad:  ";
    cout << "\n\t 1.Orange Travels at 9:00am\n\t 2.Knight Rider at 2:00pm\n\t 3.SRM Travels at 8:00pm\n";
    cin >> vihy;
    switch (vihy)
    {
    case 1:
        cout << "You have selected Orange Travels bus\n";
        tickets1();
        break;
    case 2:
        cout << "You have selected Knight Rider bus\n";
        tickets2();
        break;
    case 3:
        cout << "You have selected SRM Travels bus\n";
        tickets3();
        break;
    }
}

int route3()
{
    cout << "This bus route is Vijayawada-Kadapa\n";
    int vihy;
    cout << "Types of buses for the route Vijayawada-Kadapa:  ";
    cout << "\n\t 1.Hans Travels at 6:00am\n\t 2.AMD at 3:00pm\n\t 3.SYT Travels at 10:00pm\n";
    cin >> vihy;
    switch (vihy)
    {
    case 1:
        cout << "You have selected Hans Travels bus\n";
        tickets1();
        break;
    case 2:
        cout << "You have selected AMD bus\n";
        tickets2();
        break;
    case 3:
        cout << "You have selected SYT Travels bus\n";
        tickets3();
        break;
    }
}

int route4()
{
    cout << "This bus route is Warangal-Ongole\n";
    int vihy;
    cout << "Types of buses for the route Warangal-Ongole:  ";
    cout << "\n\t 1.Sea Bird at 4:00am\n\t 2.MDA at 1:00pm\n\t 3.Sky Stars Travels at 9:00pm\n";
    cin >> vihy;
    switch (vihy)
    {
    case 1:
        cout << "You have selected Sea Bird bus\n";
        tickets1();
        break;
    case 2:
        cout << "You have selected MDA bus\n";
        tickets2();
        break;
    case 3:
        cout << "You have selected Sky Stars Travels bus\n";
        tickets3();
        break;
    }
}

int route5()
{
    cout << "This bus route is Vijayawada-Tirupathi\n";
    int vihy;
    cout << "Types of buses for the route Vijayawada-Tirupathi:  ";
    cout << "\n\t 1.AP Travels at 6:00am\n\t 2.Vikram Travels at 3:00pm\n\t 3.Amaravathi Travels at 10:00pm\n";
    cin >> vihy;
    switch (vihy)
    {
    case 1:
        cout << "You have selected AP Travels bus\n";
        tickets1();
        break;
    case 2:
        cout << "You have selected Vikram Travels bus\n";
        tickets2();
        break;
    case 3:
        cout << "You have selected Amaravathi Travels bus\n";
        tickets3();
        break;
    }
}

int tickets1()
{
    cout << "Select the seat according to your comfort: \n";
    cout << "\n\n ---------------------------------- \n|                                  |\n ---------------------------------- \n|  .__.  .__.          .__.  .__.  |\n|  |1 |  |2 |          |3 |  |4 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |5 |  |6 |          |7 |  |8 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |9 |  |10|          |11|  |12|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |13|  |14|          |15|  |16|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |17|  |18|          |19|  |20|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.   .__.   .__.  .__.  |\n|  |21|  |22|   |23|   |24|  |25|  |\n|  |__|  |__|   |__|   |__|  |__|  |\n|                                  |\n ---------------------------------- \n";
    int i, n, seats, tickt;
    cout << "Enter the number of seats you want to select = \n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter the seat number b/w 1 to 25 =\n";
        cin >> seats;
    }
    tickt = details1(n);
}

int tickets2()
{
    cout << "Select the seat according to your comfort: \n";
    cout << "\n\n ---------------------------------- \n|                                  |\n ---------------------------------- \n|  .__.  .__.          .__.  .__.  |\n|  |1 |  |2 |          |3 |  |4 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |5 |  |6 |          |7 |  |8 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |9 |  |10|          |11|  |12|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |13|  |14|          |15|  |16|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |17|  |18|          |19|  |20|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.   .__.   .__.  .__.  |\n|  |21|  |22|   |23|   |24|  |25|  |\n|  |__|  |__|   |__|   |__|  |__|  |\n|                                  |\n ---------------------------------- \n";
    int i, n, seats, tickt;
    cout << "Enter the number of seats you want to select =\n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter the seat number b/w 1 to 25 =\n";
        cin >> seats;
    }
    tickt = details2(n);
}

int tickets3()
{
    cout << "Select the seat according to your comfort: \n";
    cout << "\n\n ---------------------------------- \n|                                  |\n ---------------------------------- \n|  .__.  .__.          .__.  .__.  |\n|  |1 |  |2 |          |3 |  |4 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |5 |  |6 |          |7 |  |8 |  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |9 |  |10|          |11|  |12|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |13|  |14|          |15|  |16|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.          .__.  .__.  |\n|  |17|  |18|          |19|  |20|  |\n|  |__|  |__|          |__|  |__|  |\n|                                  |\n|  .__.  .__.   .__.   .__.  .__.  |\n|  |21|  |22|   |23|   |24|  |25|  |\n|  |__|  |__|   |__|   |__|  |__|  |\n|                                  |\n ---------------------------------- \n";
    int i, n, seats, tickt;
    cout << "Enter the number of seats you want to select = \n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter the seat number b/w 1 to 25 =\n";
        cin >> seats;
    }
    tickt = details3(n);
}

int details1(int n)
{
    pers *p = new pers[n];
    int i, token;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the Name of person " << i + 1 << ":\n";
        cin.ignore();
        cin.getline(p[i].name, 50);
        cout << "Enter the Age of person " << i + 1 << ":\n";
        cin >> p[i].age;
        cout << "Enter the Phone number of person " << i + 1 << ":\n";
        cin >> p[i].Phone_number;
        cout << "Enter the Mail Id of person " << i + 1 << ":\n";
        cin >> p[i].Mail_id;
        cout << "\n  The details of person " << i + 1 << ":\n";
        cout << " ------------------------------------------------\n";
        cout << " Name of the person =" << p[i].name << "\n Age = " << p[i].age << "\n phone number = " << p[i].Phone_number << "\n Mail Id = " << p[i].Mail_id << endl;
        cout << " ------------------------------------------------\n";
    }
    token = payment1(n);
    delete[] p;
    return token;
}

int details2(int n)
{
    pers *p = new pers[n];
    int i, token;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the Name of person " << i + 1 << ":\n";
        cin.ignore();
        cin.getline(p[i].name, 50);
        cout << "Enter the Age of person " << i + 1 << ":\n";
        cin >> p[i].age;
        cout << "Enter the Phone number of person " << i + 1 << ":\n";
        cin >> p[i].Phone_number;
        cout << "Enter the Mail Id of person " << i + 1 << ":\n";
        cin >> p[i].Mail_id;
        cout << "\n  The details of person " << i + 1 << ":\n";
        cout << " ------------------------------------------------\n";
       cout << " Name of the person =" << p[50].name << "\n Age = " << p[10].age << "\n phone number = " << p[50].Phone_number << "\n Mail Id = " << p[50].Mail_id << endl;
        cout << " ------------------------------------------------\n";
    }
    token = payment1(n);
}


int details3(int n)
{
    pers *p;
    int i, token;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter the Name of person " << i << ":\n";
        cin.ignore();
        cin.getline(p[50].name, 50);
        cout << "Enter the Age of person " << i << ":\n";
        cin >> p[10].age;
        cout << "Enter the Phone number of person " << i << ":\n";
        cin >> p[50].Phone_number;
        cout << "Enter the Mail Id of person " << i << ":\n";
        cin >> p[50].Mail_id;
        cout << "\n  The details of person " << i << ":\n";
        cout << " ------------------------------------------------\n";
        cout << " Name of the person =" << p[50].name << "\n Age = " << p[10].age << "\n phone number = " << p[50].Phone_number << "\n Mail Id = " << p[50].Mail_id << endl;
        cout << " ------------------------------------------------\n";
    }
    token = payment3(n);
}

int payment1(int n)
{
    int z;
    cout << "Each ticket costs = 500/-\n";
    int amount = 500, cost, bill_amount;
    bill_amount = n * amount;
    cout << "Total bill amount is " << bill_amount;
    cout << "\nEnter the amount = \n";
    cin >> cost;
    if (cost == bill_amount)
    {
        cout << "*Payment is successful\n*Hope you will enjoy the trip**\nDo you want to continue booking (1-Yes/0-No):\n";
    }
    else
    {
        cout << "Payment declined\nPlease try again\n";
        cout << "Do you want to continue booking (1-Yes/0-No):\n";
    }
    cin >> z;
    if (z == 1)
    {
        main();
    }
    if (z == 0)
    {
        exit(0);
    }
}

int payment2(int n)
{
    int z;
    cout << "Each ticket costs = 700/-\n";
    int amount = 700, cost, bill_amount;
    bill_amount = n * amount;
    cout << "Total bill amount is " << bill_amount;
    cout << "\nEnter the amount = \n";
    cin >> cost;
    if (cost == bill_amount)
    {
        cout << "*Payment is successful\n*Hope you will enjoy the trip**\nDo you want to continue booking (1-Yes/0-No):\n";
    }
    else
    {
        cout << "Payment declined\nPlease try again\n";
        cout << "Do you want to continue booking (1-Yes/0-No):\n";
    }
    cin >> z;
    if (z == 1)
    {
        main();
    }
    if (z == 0)
    {
        exit(0);
    }
}

int payment3(int n)
{
    cout << "Each ticket costs = 1000/-\n";
    int amount = 1000, cost, bill_amount;
    bill_amount = n * amount;
    int z;
    cout << "Total bill amount is " << bill_amount << endl;
    cout << "\nEnter the amount = \n";
    cin >> cost;
    if (cost == bill_amount)
    {
        cout << "*Payment is successful\n*Hope you will enjoy the trip**\nDo you want to continue booking (1-Yes/0-No):\n";
    }
    else
    {
        cout << "Payment declined\nPlease try again\n";
        cout << "Do you want to continue booking (1-Yes/0-No):\n";
    }
    cin >> z;
    if (z == 1)
    {
        main();
    }
    if (z == 0)
    {
        exit(0);
    }
}
