#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,coef=1;
    cout<<"Enter number of rows: ";
    cin>>row;

    for(int i=0;i<row;i++)
    {
        for(int s=1;s<=row-i;s++)
            cout<<"  ";
            
        for(int j=0;j<=i;j++)
        {
            if(j==0 || i==0)
                coef=1;
            else
                coef=coef*(i-j+1)/j;
                
            cout<<coef<<"   ";
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}