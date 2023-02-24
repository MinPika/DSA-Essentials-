#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int sortedpairsum(vector<int> arr,int x)
{
    int n=arr.size();
    int val=100000;
    int p1,p2;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=arr[i]+arr[j];
            int mini=abs(sum-x);
            if(mini<val)
            {
                val=mini;
                p1=i;
                p2=j;
            }
        }
    }
    cout<<arr[p1]<<" and "<<arr[p2];
}
int main()
{
    vector<int> array={10,22,28,29,30,40};
    sortedpairsum(array,0);
}