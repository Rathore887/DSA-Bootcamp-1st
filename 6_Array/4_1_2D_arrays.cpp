#include<iostream>
using namespace std;
int main()
{
    int A[3][4]={{45,2,8,4},{7,45,84,8},{44,78,52,4}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout<<" "<<A[i][j];
        cout<<"\n";
    }
    
    

return 0;
}