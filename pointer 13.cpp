#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,7,8,9,9};
    int i;
    int *ptr=&arr[0];
    for (i=0;i<5;i++)
    {
        cout<<ptr<<"\n";
        ptr++;
    }
    return 0;
}