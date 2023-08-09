#include<iostream>
using namespace std;
int main()
{int var=2;
int *ptr =&var;
cout<<"elemnt at var"<<var<<"\n"; //value of var
cout<<"element at *ptr"<<*ptr<<"\n"; // value at address indicated by ptr
cout<<"element at &var"<<&var<<"\n"; //address of var
cout<<"element at ptr"<<ptr<<"\n"; // value of ptr
cout<<"element at &ptr"<<&ptr<<"\n"; //address of ptr
return 0;
}
