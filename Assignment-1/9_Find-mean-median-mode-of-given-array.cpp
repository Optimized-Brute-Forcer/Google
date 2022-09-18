#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n;
    
    cout<<"Enter the length : ";
    cin>>n;
    
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(),arr.end());
    
    float mean=0;
    for(int i=0;i<n;i++)
    {
        mean+=arr[i];
    }
    cout<<"Mean of array is : "<<mean/n<<endl;
    
    cout<<"Median of array is : ";
    if(!n&1)
        cout<<(arr[n/2]+arr[(n/2)-1])/2<<endl;
    else
        cout<<arr[n/2]<<endl;
    
    cout<<"Mode of an array is : ";
    
    unordered_map<int,int>map;
    for(auto i:arr){map[i]++;}
    
    int largest=0,mode;
    for(auto i:map)
    {
        if(i.second>largest)
        {
            largest=i.second;
            mode=i.first;
        }
    }
    cout<<mode;
    return EXIT_SUCCESS;
}