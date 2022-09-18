#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter rows and columns :";
    cin>>n>>m;
    cout<<"Enter the elements : "<<endl;
    vector<vector<int>>matrix;
    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        for(int j=0;j<m;j++)
        {
            int a;
            cin>>a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }
    cout<<"Transpose of matrix is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[j][i]<<' ';
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}