#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"Factorial of "<<n<<" is : ";
    if(n<2)
    {
        cout<<n;
    }
    else
    {
        int fact=1;
        for(int i=2;i<=n;i++)
        {
            fact*=i;
        }
        cout<<fact;
    }
    return EXIT_SUCCESS;
}