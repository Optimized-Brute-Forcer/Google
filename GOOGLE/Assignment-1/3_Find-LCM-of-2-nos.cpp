#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    return b==0?0:GCD(a,a%b);
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers :";
    cin>>a>>b;
    cout<<"LCM is: "<<abs(a*b)/gcd(a,b);
    return EXIT_SUCCESS;
}