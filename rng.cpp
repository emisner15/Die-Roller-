#include <iostream>
#include <fstream>  //For file input / output
#include <string> //For string processing
#include <cstdlib> //for atoi (C Standard Library)
#include "RNG.h"

using namespace std;


void rngD4()
{
    RNG random{};
    for(int i = 0; i < 1; i++)
    {
        cout << "Your D4 roll is: "<<random.rollD4() << endl;
    }
}

void rngD6()
{
    RNG random{};
    for(int i = 0; i < 1; i++)
    {
        cout << "Your D6 roll is: "<<random.rollD6() << endl;
    }
}

void rngD8()
{
    RNG random{};
    for(int i = 0; i < 1; i++)
    {
        cout << "Your D8 roll is: "<<random.rollD8() << endl;
    }
}

void rngD10()
{
    RNG random{};
    for(int i = 0; i < 1;i++)
    {
        cout << "Your D10 roll is: " << random.rollD10()<<endl;
    }
}

void rngD12()
{
    RNG random{};
    for(int i = 0; i < 1; i++)
    {
        cout << "Your D12 roll is: "<< random.rollD12() << endl;
    }
}
void rngD20()
{
    RNG random{};
    for(int i = 0; i < 1; i++)
    {
        cout << "Your D20 roll is: "<< random.rollD20() << endl;
    }
}

int main()
{
    string die_type = "null";
    char question;

    //linkedListTest();
    do
    {
        system("cls");
        cout << "Die types = D4,D6,D10,D12,D20"<< endl;
        cout << "Enter the type of die you wish to roll:" ;
        cin >> die_type;

        if (die_type == "D4")
        {
            rngD4();
        }
        else if (die_type == "D6")
        {
            rngD6();
        }
        else if (die_type == "D8")
        {
            rngD8();
        }
        else if (die_type == "D10")
        {
            rngD10();
        }
        else if (die_type == "D12")
        {
            rngD12();
        }
        else if (die_type == "D20")
        {
            rngD20();
        }
        else
        {
            cout << "Not a die type"<<endl;
        }

        do
        {
          cout << "would you like to role another die? (Y/N):";
          cin  >> question;
        }
        while(question != 'Y' & question != 'y' & question != 'N' & question != 'n');
    }
    while(question != 'N' & question != 'n');
    cout << "closing program, Good Bye <3"<< endl;
}
