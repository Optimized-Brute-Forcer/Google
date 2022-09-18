#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n;
    
    cout<<"Enter the length :";
    cin>>n;
    
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Second largest element is :";
    int largest=INT_MIN,second_largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest and arr[i]<largest)
        {
            second_largest=arr[i];
        }
    }
    cout<<second_largest;
    return EXIT_SUCCESS;
}