//printing address and value of a pointer
#include<iostream>
using namespace std;
int main()
{

       int a = 5000,val;
       int *ptr;
       ptr = &a;
       val = *ptr;
       cout << " value of a= " << a << endl;
       cout << " value of ptr= " << ptr << endl;
       cout << " value of val= " << val << endl;
       return 0;
}

~                                                                     
