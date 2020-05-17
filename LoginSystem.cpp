#include <iostream>

using namespace std;

int main()
{

    cout << "Register here: \n";
    string name;
    cout << "Input name: ";
    getline (cin, name);

    string password;
    cout << "Input password: ";
    getline (cin, password);

    cout << "Login here: \n";
    string enter_name;
    cout << "Enter name: ";
    getline (cin, enter_name);

    string enter_password;
    cout << "Enter password: ";
    getline (cin, enter_password);

    if (password == enter_password && name == enter_name){
        cout << "Welcome";
    }else{
        cout << "Get outta here ya wise guy";
    }




    return 0;
}
