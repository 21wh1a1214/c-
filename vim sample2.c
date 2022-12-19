//explicit conversion
#include<iostream>
using namespace std;
int main()
{
        // declaration of variables
        int a, b;
        float res;
        a = 35;
        b = 20;
        cout << " Implicit  Type Casting " << endl;
        cout << " Result " << a / b << endl;

        cout << " \n Expicit type casting  " << endl;

        res = (float) 35 / 20;
        cout << " The value of float variable (res): "<< res << endl;

        return 0;
}



