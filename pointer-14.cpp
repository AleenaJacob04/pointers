#include<iostream>
using namespace std;
int main()
{
    float y =89.6;
    float *ptr=&y;
    float i;
    
    for (i=0;i<5;i++)
    {
        cout<<ptr<<"\n";
        ptr++;
    }
    return 0;
}