#include <iostream>

using namespace std; /*
   Name: DevStgian
   Copyright:
   Author:
   Date: 03/11/23 15:03
   Description: Calculator Of My Final Grade Here In PTCI
 */

int main()
{
    int grade[8];
    cout << "            FINAL GRADE CALCULATOR"<< endl;
    cout << "NOTE: Please Enter The Grade Below After The Subject" << endl;

    cout << "|------------------------------------------|" << endl;
    cout<<  "    SUBJECTS      |"; cout<< "      GRADE"<<endl;
    cout << "|------------------------------------------|" << endl;
    cout << "Intro To Computing: ";
    cin >> grade[0];

    cout << "Com Prog 1: ";
    cin >> grade[1];

    cout << "Mathematics In The Modern WOrld: ";
    cin >> grade[2];

    cout << "Ph History: ";
    cin >> grade[3];

    cout << "Society And Culture: ";
    cin >> grade[4];

    cout << "Pre-Cal For Non-Stem: ";
    cin >> grade[5];

    cout << "LTS/ROTC: ";
    cin >> grade[6];

    cout << "UTS: ";
    cin >> grade[7];

    cout << "Physical Fitness: ";
    cin >> grade[8];

    cout << "|------------------------------------------|" << endl;
    cout << " Total Grade: " << (grade[0] + grade[1] + grade[2] + grade[3] + grade[4] + grade[5] + grade[6] + grade[7] + grade[8]) / 9 << endl;
    cout << "|----------  --------------------------------|" << endl;
    return 0;
}
