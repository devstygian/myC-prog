#include <iostream>

using namespace std;

int main(){

    char answer;
    int code;

    
    cout << "\n\n";
    cout << "                   TO DO LIST"<< endl;

    cout << "----------------------------------------------" << endl;
    cout << "|              LIST                  |"<< "STATUS |"<< endl;
    cout << "----------------------------------------------"<< endl;

    cout << "Learn how to use a basic sytax        "<<"DONE" <<endl;
    cout << "Learn If Else Statement               "<<"50%"  <<endl;
    cout << "Learn switch Statement                "<<"20%"   <<endl;
    cout << "Learn While Loop                      "<<"20%"   <<endl;
    cout << "Learn DO While Loop                   "<<"20%"   <<endl;
    cout << "Learn the meaning of && and ||        "<<"DONE" <<endl;
    cout << "Learn For Loop                        "<<"5%"   <<endl;
    cout << "Learn Nested Loop                     "<<"0%"   <<endl;
    cout << "Learn OOP                             "<<"0%"   <<endl;
    cout << "Learn how to add GUI                  "<<"0%"   <<endl;
    cout << "Combine C++ to other language         "<<"0%"   <<endl;
    cout << "----------------------------------------------" << endl;
    
    cout << "\n\n";
    cout << "Do you want to continue(Y/N)?...... ";
    cin >> answer;
    if(answer == 'y')
    {

        cout << "\n\n";
        cout << "            Project TO DO LIST" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "|              LIST                  |"<< "STATUS |"<< endl;
        cout << "----------------------------------------------"<< endl;

        cout << "Make a QUIZ Game                      "<<"Pending"<<endl;
        cout << "Make a Calculator                     "<<"DONE"<<endl;
        cout << "Make a Grade Calculator               "<<"DONE"<<endl;
        cout << "Create a Tic Tack Toe game            "<<"Unkown"<<endl;
        cout << "Classified                            "<<"Classified"<<endl;
        cout << "Classified                            "<<"Classified"<<endl;
        cout << "----------------------------------------------" << endl;
    }
    else
    {
        cout << "YOU ENTERD A INVALID NUMBERS!!!"<<endl;
        
    }
          cout<<"\n\n";
          cout << "Do you want to open another file?(Y/N): " ;
          cin>>answer;
          if (answer == 'y')
          {
              cout << "WARNING!!" << endl;
        }else if(answer =='n'){
          cout <<"Thank you for checking this foder!!"<< endl;
        }

      cout << "Classified file ahead!!"<<endl;
      cout << "Please ENTER a Code/PIN..... ";
      cin >> code;

    if (code == 7319){

        cout << "\n\n";
        cout << "----------------------------------------------" << endl;
        cout << "            Crack and Open" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "|              LIST                  |"<< "STATUS |" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Try To Crack This CODE" << endl;
        cout << "NOte I dont know what's Inside" << endl;
        cout << "(Just fund it in YT)" << endl;
        cout << "Date 11-18-23" << endl;
        cout << "Cheack your Email" << endl;

        cout << "----------------------------------------------" << endl;
        cout << "TWFOaGVtYXRpY3MgYXjlIHRoZSByZXN1bHQ |"
             << "Classified|" << endl;
        cout << "----------------------------------------------" << endl;
      }

      else
      {
        cout<<"\n";
        cout << "YOU ENTERD A INVALID CODE!!!"<<endl;
      }

    return 0;
}
