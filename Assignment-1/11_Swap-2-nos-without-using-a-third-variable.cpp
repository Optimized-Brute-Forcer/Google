#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    // Using addition and subraction 
    a=a+b;
    b=a-b;
    a=a-b;
    // Using multiplication and division
    a=a*b;
    b=a/b;
    a=a/b;
    // Using XOR
    a=a^b;
    b=a^b;
    a=a^b;
    
    cout<<a<<" "<<b;
    
    return EXIT_SUCCESS;
}