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

    int *q;
    q=new int[10];
    
    for (int i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }
    // delete []p;
    free(p);
    p=q;
    q=NULL;
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<endl;
    }
    
return 0;
}