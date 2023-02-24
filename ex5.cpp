#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int krotate(vector<int> arr,int k)
{
    int n=arr.size();
    vector<int> arr1=arr;
    if(k>=n)
    {
       k=remainder(k,n); 
    }
    for(int i=1;i<=k;i++)
    {
        arr1[0]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            arr1[i]=arr[i-1];
        }
        arr=arr1;
    }
    cout<<"{";
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<arr[n-1]<<"}";
}
int main()
{
    vector<int> array={10,22,28,29,30,40};
    krotate(array,7);
}