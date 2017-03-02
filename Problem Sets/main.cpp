#include <iostream>
#include <cstdlib>
#include <sstream>
#include <math.h>
#include <iomanip>
#include <cstdio>

using namespace std;

void divider()
{

    for(int i = 0; i < 80; i++)
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

    int length = 80; // Define the length of one line to be 40 characters

    int spaces = (length - text.length()) / 2;

    for(int i = 0; i < spaces; i++)
    {

        cout << " ";

    }

    cout << text << endl;

}

void spacing(string text, int input)
{

    int length = 80; // Define the length of one line to be 40 characters

    int spaces = (length - (text.length() + input)) / 2;

    for(int i = 0; i < spaces; i++)
    {

        cout << " ";

    }

    cout << text;

}

void squares()
{

    divider();
    spacing();
    spacing("Welcome to the squares program!");
    spacing();
    spacing("Enter an integer: ", 2);

    int value;
    cin >> value;

    spacing();
    spacing("Number | Square");

    for(int i = 0; i < value; i++)
    {

        ostringstream output;
        ostringstream iStr;
        iStr << (i+1);
        ostringstream iSqrStr;
        iSqrStr << ((i+1)*(i+1));

        for(int j = 0; j < 6 - iStr.str().length(); j++)
        {
            output << " ";
        }

        output << (i+1) << " | " << ((i+1)*(i+1));

        for(int j = 0; j < 6 - iSqrStr.str().length(); j++)
        {
            output << " ";
        }

        spacing(output.str());

    }

    spacing();

}

void products()
{

    divider();
    spacing();
    spacing("Welcome to the products program!");
    spacing();
    spacing("How many numbers are we to process: ", 4);

    int numbers;
    cin >> numbers;

    spacing();

    int product = 1;

    for(int i = 0; i < numbers; i++)
    {

        ostringstream output;
        output << "#" << (i+1) << ": ";
        spacing(output.str(), 4);

        int read;
        cin >> read;

        if(read > 0)
        {
            product *= read;
        }

        else
        {
            ostringstream error;
            error << "The number " << read << " was not read.";
            spacing(error.str());
        }

    }

    ostringstream output;
    output << "The product of the positives is: " << product;
    spacing(output.str());

    spacing();

}

void factorial()
{

    divider();
    spacing();
    spacing("Welcome to the factorial program!");
    spacing();

    int input = -1;

    while(input < 1 || input > 12)
    {

        spacing("Enter a non - negative integer: ", 4);
        cin >> input;
        spacing();

        if(input < 1)
        {
            spacing("The value you entered was less than 1. Try again.");
            spacing();
        }

        else if(input > 12)
        {
            spacing("The value you entered would cause an integer overflow. Try again.");
            spacing();
        }

    }

    ostringstream output;
    int result = 1;

    for(int i = 1; i < input; i++)
    {

        output << i << " * ";
        result *= i;

    }

    result *= input;
    output << input << " = " << result;
    spacing(output.str());
    spacing();

}

void invest()
{

    divider();
    spacing("Welcome to the Invest Program!");
    spacing();
    spacing("Monthly Deposit ($):      ", 3);

    double deposit;
    cin >> deposit;

    deposit = ceil((deposit * pow (10,2 )) - 0.49 ) / pow(10,2);

    spacing("Annual Interest Rate (%): ", 3);

    double rate;
    cin >> rate;

    deposit = ceil((deposit * pow (10,2 )) - 0.49 ) / pow(10,2);

    spacing("Term (Months):            ", 3);

    int term;
    cin >> term;

    spacing();
    spacing("Starting    Interest    Monthly     Ending ");
    spacing("Balance     Earned      Deposit     Balance");
    spacing("--------    --------    --------    --------");

    double ending = 0.00;

    for(int i = 0; i < term; i++)
    {

        ostringstream output;

        double start = ending;
        ostringstream startStr;
        char startForm[100];
        sprintf(startForm, "%.2f", start);
        startStr << startForm;

        double interest = start * (rate/1200);
        ostringstream interestStr;
        char interestForm[100];
        sprintf(interestForm, "%.2f", interest);
        interestStr << interestForm;

        ostringstream depositStr;
        char depositForm[100];
        sprintf(depositForm, "%.2f", deposit);
        depositStr << depositForm;

        ending = start + deposit + interest;
        ostringstream endingStr;
        char endingForm[100];
        sprintf(endingForm, "%.2f", ending);
        endingStr << endingForm;

        for(int i = 0; i < (8 - startStr.str().length()); i++)
        {

            output << " ";

        }

        output << startStr.str();

        for(int i = 0; i < (12 - interestStr.str().length()); i++)
        {

            output << " ";

        }

        output << interestStr.str();

        for(int i = 0; i < (12 - depositStr.str().length()); i++)
        {

            output << " ";

        }

        output << depositStr.str();

        for(int i = 0; i < (12 - endingStr.str().length()); i++)
        {

            output << " ";

        }

        output << endingStr.str();

        spacing(output.str());

    }

    spacing();


}

int main() {

    int input = -1;

    while (input != 0) {

        divider();
        spacing();
        spacing("TER4M1");
        spacing("Problem Set 2");
        spacing("Kai Huang");
        spacing();
        divider();
        spacing();
        spacing("Pick an option:");
        spacing("1. Squares");
        spacing("2. Products");
        spacing("3. Factorial");
        spacing("4. Invest");
        spacing();
        spacing("0. Exit Program");
        spacing();

        cin >> input;

        if (input == 1)
        {

            squares();
            system("pause");

        }

        else if (input == 2)
        {

            products();
            system("pause");

        }

        else if (input == 3)
        {

            factorial();
            system("pause");

        }

        else if (input == 4)
        {

            invest();
            system("pause");

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