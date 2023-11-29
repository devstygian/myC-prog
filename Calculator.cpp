#include <iostream>

using namespace std;

int main()
{
    char operation;
    double num1, num2;

    cout << "          Simple C++ Calculator" << endl;
    cout << "|------------------------------------------|" << endl;
    cout << "  Enter an operation (+, -, *, /): " << endl;
    cout << "|------------------------------------------|" << endl;

    cout<< "  You Select This Operation: " ; 
    cin >>  operation;
    cout << "|__________________________________________|" << endl;

    cout << " Enter first number: ";
    cin >> num1;
    cout << " Enter Second number: ";
    cin >> num2;
    
    switch (operation)
    {
    case '+':
        cout << "|------------------------------------------|" << endl;
        cout << " Result: " << num1 + num2 << endl;
        cout << "|------------------------------------------|" << endl;
        break;
    case '-':
        cout << "|------------------------------------------|" << endl;
        cout << " Result: " << num1 - num2 << endl;
        cout << "|------------------------------------------|" << endl;
        break;
    case '*':
        cout << "|------------------------------------------|" << endl;
        cout << " Result: " << num1 * num2 << endl;
        cout << "|------------------------------------------|" << endl;
        break;
    case '/':

        if (num2 != 0)
        {
            cout << "|------------------------------------------|" << endl;
            cout << " Result: " << num1 / num2 << endl;
            cout << "|------------------------------------------|" << endl;
        }
        else
        {
            cout << "|------------------------------------------|" << endl;
            cout << "Error: Division by zero is not allowed." << endl;
            cout << "|------------------------------------------|" << endl;
        }
        break;
    default:
        cout << "Error: Invalid operation." << endl;
        break;
    }

    return 0;
}
