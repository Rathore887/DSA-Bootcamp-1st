#include<iostream>
using namespace std;
int main()
{
int A[5];
int B[5]={1,2,3,4,6};
int C[]={1,5,4,5,6,4,5,60};
int D[5]={1,3,4};
int E[5]={0};

for (int i = 0; i < 5; i++)
{
    cout<<B[i];
    
}
cout<<endl;
cout<<*(B+2);

return 0;
}