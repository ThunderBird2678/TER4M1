#include <iostream>
#include <cstdlib>
#include <sstream>
#include <math.h>

using namespace std;

void divider()
{

    for(int i = 0; i < 60; i++)
    {

        cout << "~";

    }

    cout << endl;

}

void spacing()
{

    cout << endl;

}

void spacing(string text)
{

    int length = 60; // Define the length of one line to be 40 characters

    int spaces = (length - text.length()) / 2;

    for(int i = 0; i < spaces; i++)
    {

        cout << " ";

    }

    cout << text << endl;

}



void arithmetic() {

    divider();
    spacing();
    spacing("Welcome to the Arithmetic Program!");
    spacing();
    spacing("Enter the first operand: ");
    spacing();

    int op1;
    cin >> op1;

    spacing();
    spacing("Enter the second operand: ");
    spacing();

    int op2;
    cin >> op2;

    spacing();
    divider();
    spacing();

    ostringstream addition;
    addition << op1 << " + " << op2 << " = " << (op1 + op2);
    spacing(addition.str());

    ostringstream subtraction;
    subtraction << op1 << " - " << op2 << " = " << (op1 - op2);
    spacing(subtraction.str());

    ostringstream mult;
    mult << op1 << " * " << op2 << " = " << (op1 * op2);
    spacing(mult.str());

    ostringstream div;
    div << op1 << " / " << op2 << " = ";

    if (op2 == 0) {
        div << "undefined";
    } else {
        div << (((double) (op1)) / ((double) (op2)));
    }

    spacing(div.str());
    spacing();

}

void equation()
{

    divider();
    spacing();
    spacing("Welcome to the Equation program!");
    spacing();
    spacing("Enter values for Ax + B = 0");
    spacing();
    spacing("A: ");

    int A;
    cin >> A;

    spacing();
    spacing("B: ");

    int B;
    cin >> B;

    spacing();

    ostringstream output;
    output << A << "x + " << B << " = 0";
    spacing(output.str());

    output.str("");
    output.clear();
    output << A << "x = " << (-B);
    spacing(output.str());

    output.str("");
    output.clear();
    output << "x = " << (-B) << "/" << (A);
    spacing(output.str());

    output.str("");
    output.clear();
    output << "x = " << ((double)(-B)/(double)(A));
    spacing(output.str());
    spacing();

}

void paycheque()
{

    divider();
    spacing();
    spacing("Welcome to the Paycheque program!");
    spacing();
    spacing("Enter number of hours worked:");

    int hours;
    cin >> hours;

    spacing();
    spacing("Enter hourly pay:");

    double pay;
    cin >> pay;

    spacing();

    double reg = pay * 40;
    reg = ceil((reg * pow (10,2 )) - 0.49 ) / pow(10,2);

    ostringstream output;
    output << "40 hours regular wage, paid $" << reg;
    spacing(output.str());

    if(hours > 40)
    {
        double over = pay * 1.5 * (hours - 40);
        over = ceil((over * pow (10,2 )) - 0.49 ) / pow(10,2);

        output.str("");
        output.clear();
        output << (hours - 40) << " hours overtime wage, paid $" << over;
        spacing(output.str());

        output.str("");
        output.clear();
        output << hours << " hours total, paid $" << (reg + over) << " in total";
        spacing(output.str());

    }

    spacing();

}

void pizza()
{

    divider();
    spacing();
    spacing("Welcome to the Pizza program!");
    spacing();
    spacing("How many pizzas would you like to buy?");

    int num;
    cin >> num;

    spacing();
    spacing("What size would you like the pizzas to be?");
    spacing();

    bool sizeVal = false;
    char size;

    string sizeStr;
    double cost;

    if(!sizeVal)
    {
        cin >> size;

        if(size == 'S' || size == 's' || size == 'M' || size == 'm' || size == 'L' || size == 'l')
        {
            sizeVal = true;
        }
        else
        {
            spacing();
            spacing("You have not entered a valid size. Please try again.");
            system("pause");
        }

    }

    spacing();

    if(size == 'S' || size == 's')
    {
        cost = num * 6.99;
        cost = ceil((cost * pow (10,2 )) - 0.49 ) / pow(10,2);

        ostringstream output;
        output << "You ordered " << num << "small pizzas";
        spacing(output.str());

        output.str("");
        output.clear();
        output << "This will cost you $" << cost;
        spacing(output.str());

    }

    else if(size == 'M' || size == 'm')
    {
        cost = num * 8.99;
        cost = ceil((cost * pow (10,2 )) - 0.49 ) / pow(10,2);

        ostringstream output;
        output << "You ordered " << num << "medium pizzas";
        spacing(output.str());

        output.str("");
        output.clear();
        output << "This will cost you $" << cost;
        spacing(output.str());

    }

    else if(size == 'L' || size == 'l')
    {
        cost = num * 10.99;
        cost = ceil((cost * pow (10,2 )) - 0.49 ) / pow(10,2);

        ostringstream output;
        output << "You ordered " << num << " large pizzas";
        spacing(output.str());

        output.str("");
        output.clear();
        output << "This will cost you $" << cost;
        spacing(output.str());

    }

    spacing();

}

void sort()
{

    divider();
    spacing();
    spacing("Welcome to the Sort program!");
    spacing();
    spacing("Enter the first number:");

    int num1;
    cin >> num1;

    spacing();
    spacing("Enter the second number:");

    int num2;
    cin >> num2;

    spacing();
    spacing("Enter the third number:");

    int num3;
    cin >> num3;

    spacing();

    ostringstream output;

    if(num1 > num2)
    {

        if(num2 > num3)
        {

            output << num1 << ", " << num2 << ", " << num3;
            spacing(output.str());

        }

        else
        {

            if(num1 > num3)
            {

                output << num1 << ", " << num3 << ", " << num2;
                spacing(output.str());

            }

            else
            {

                output << num3 << ", " << num1 << ", " << num2;
                spacing(output.str());

            }

        }

    }

    else
    {

        if(num1 > num3)
        {

            output << num2 << ", " << num1 << ", " << num3;
            spacing(output.str());

        }

        else
        {

            if(num2 > num3)
            {

                output << num2 << ", " << num3 << ", " << num1;
                spacing(output.str());

            }

            else
            {

                output << num3 << ", " << num2 << ", " << num1;
                spacing(output.str());

            }

        }

    }

    spacing();

}

int main() {

    int input = -1;

    while (input != 0) {

        divider();
        spacing();
        spacing("TER4M1");
        spacing("Problem Set 1");
        spacing("Kai Huang");
        spacing();
        divider();
        spacing();
        spacing("Pick an option:");
        spacing("1. Arithmetic");
        spacing("2. Equation");
        spacing("3. Paycheque");
        spacing("4. Pizza");
        spacing("5. Sort");
        spacing();
        spacing("0. Exit Program");
        spacing();

        cin >> input;

        if (input == 1)
        {

            arithmetic();
            system("pause");

        }

        else if (input == 2)
        {

            equation();
            system("pause");

        }

        else if (input == 3)
        {

            paycheque();
            system("pause");

        }

        else if (input == 4)
        {

            pizza();
            system("pause");

        }

        else if (input == 5)
        {

            sort();

        }

        else if (input != 0)
        {

            spacing("Invalid Response.");
            system("pause");

        }

        else
        {

            spacing("Fare thee well.");
            system("pause");

        }

    }

}

