#include <iostream>

using namespace std;

bool checkEqual(string name1, string name2){
    if (name1 == name2){
        return true;
    }else{
        return false;
    }

}


int main()
{


    if(checkEqual("Hello", "Hello")){
        cout << "They're equal";
    }else{
        cout << "Not equal";

    }

    return 0;
}
