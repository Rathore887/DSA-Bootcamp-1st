#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[5];
    p[0]=5;
    p[1]=45;
    p[2]=87;
    p[3]=85;
    p[4]=12;

    for (int i = 0; i < 5; i++)
    {
        cout<<p[i];
    }
    

return 0;
}