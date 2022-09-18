#include <bits/stdc++.h>
using namespace std;
bool square(int n)
{
    if(sqrt(n)*sqrt(n)==n)
        return 1;
    return 0;
}
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(square(a))
        cout<<"It's a perfect square";
    else
        cout<<"It's not a perfect square";
    
    return EXIT_SUCCESS;
}