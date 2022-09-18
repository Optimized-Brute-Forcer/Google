#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number :";
    cin>>a;
    while(a)
    {
        cout<<a%10<<' ';
        a/=10;
    }
    return EXIT_SUCCESS;
}