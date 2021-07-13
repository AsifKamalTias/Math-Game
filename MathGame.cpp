#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void addition(double n1,double n2)
{
    double answer;
    cout << "What is " << n1 << " + " << n2 << "?" << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == n1 + n2)
    {
        cout<< "Correct!" <<endl;
    }
    else
    {
        cout<< "Wrong! The right answer was " << n1 + n2 << endl;
    }
}

void subtraction(double n1,double n2)
{
    double answer;
    cout << "What is " << n1 << " - " << n2 << "?" << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == n1 - n2)
    {
        cout<< "Correct!" << endl;
    }
    else
    {
        cout <<"Wrong! The right answer was " << n1 * n2 << endl;
    }
}

void multi(double n1,double n2)
{
    double answer;
    cout << "What is " << n1 << " * " << n2 << "?" << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == n1 * n2)
    {
        cout<< "Correct!" << endl;
    }
    else
    {
        cout <<"Wrong! The right answer was " << n1 * n2 << endl;
    }
}

void division(double n1,double n2)
{
    double answer;
    double r = n1 / n2;
    cout << "What is " << n1 << " / " << n2 << "?" << endl;
    cout << "Remember that your answer must only have 6 numbers in it, round" << endl;
    cout << "0 does not count as a number, remember to do 0.123 etc." << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == r)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout <<"Wrong! The right answer was " << r << endl;
    }
}

int main()
{
    double n1,n2;
    int choice;

    cout << "Welcome to the Math Game!" << endl;

    for(;;)
    {
        cout<<endl;
        cout<<"Enter 1 for Addition"<<endl;
        cout<<"Enter 2 for Subtraction"<<endl;
        cout<<"Enter 3 for Multiplication"<<endl;
        cout<<"Enter 4 for Division"<<endl;
        cout<<"Enter 5 for Exit"<<endl;
        cout<<endl;

        cin >> choice;

        srand((unsigned)time(0));
        n1 = rand() ;
        n2 = rand() ;

        switch(choice)
        {
        case 1:
            addition(n1,n2);
            break;
        case 2:
            subtraction(n1,n2);
            break;
        case 3:
            multi(n1,n2);
            break;
        case 4:
            division(n1,n2);
            break;
        case 5:
            cout << "Thank you for playing. Please, come back again!" << endl;
            return 0;

        default:
            cout << "Invalid Number!" << endl;
            break;
        }
    }

    return 0;
}

