#include <iostream>

using namespace std;

int main() {

    
    int Grade;

    cout << "\n\n";
    cout << "Enter your General Grade For First Sem: ";
    cin >> Grade;

    if (Grade == 95)
    {
        cout << "With Highest Honor" << endl;
    }

    else if (Grade >= 90 && Grade < 95)
    {
        cout << "With high honor"<< endl;
    }

    else if (Grade >= 85 && Grade < 90)
    {
        cout << "With honor" << endl;
    }

    else if (Grade >= 75 && Grade < 85)
    {
        cout << "Good Job!! MAKE IT 85 Next sem!!" << endl;
    }

    else if (Grade < 75)
    {
        cout << "Better luck next Year!!!!";
        }
    
    else{
        cout << "YOU ENTERD A INVALID NUMBERS!!!";
    }
    return 0;
}
