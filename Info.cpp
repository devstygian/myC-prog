#include<iostream>

using namespace std;

int main() {
    // TO DO
/*
    1) Make a list of password and gmail
    2) The password should match in the gmail
    3) If the password is match in the username the system should display "Welcome (Username)"
    4) if not the system should display "Incorrect password or Username"
    

*/
    
    string gmail[] {"carl@gmail.com", "jack@gmail.com", "Mr.Black@gmail.com", "user@gmail.com", "test@gmail.com"};
    string password[] {"Cral2005", "Jack1973", "ImAlone18", "Thepasswordis01", "testernumber001"};
    string username[] {"Carl", "jack", "Mr.Black", "user001", "tester"};

    int gp;

    for (int gp = 0; gp < 5; gp++)
    {
        cout << "\n";
        cout << "Gmail : "<<gmail[gp] << endl;
        cout << "Password : "<<password[gp]<<endl;
        cout << "username : "<<username[gp]<<endl;
        cout << "\n";
    }

    return 0;
}