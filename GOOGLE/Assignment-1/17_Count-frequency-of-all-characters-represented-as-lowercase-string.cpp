#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    
    unordered_map<char,int>map;
    for(auto i:str)
        map[i]++;
    
    for(auto i:map)
        cout<<i.first<<" : "<<i.second<<endl;
        
    return EXIT_SUCCESS;
}