#include <iostream>

using namespace std;

int main()
{

    bool isMale = true;
    bool isTall = false;

    if(isMale && isTall){
        cout << "You are a chad like me";
    } else if (isMale && !isTall) {
        cout << "You are Nick";
    } else if (!isMale && isTall){
        cout << "You are tall but not male... kinda hot";
    } else {
        cout << "You are not male and not tall";
    }




    return 0;
}
