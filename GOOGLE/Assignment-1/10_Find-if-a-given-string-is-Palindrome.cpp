#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<" Enter the string : ";
    cin>>str;
    
    int left=0,right=str.size()-1;
    bool flag=0;
    while(left<right)
    {
        if(str[left++]!=str[right--])
        {
            flag=1;
            cout<<endl<<"Not a palindrome";
            break;
        }
    }
    if(!flag)
    {
        cout<<endl<<"It's a palindrome";
    }
    return EXIT_SUCCESS;
}