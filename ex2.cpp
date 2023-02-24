#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int subarrays(int array[],int n)
{
    /* by using prefix O(n^2)
    int prefix[n]={0};
    prefix[0]=array[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+array[i];
    }
    int largestsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraysum= i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            largestsum=max(largestsum,subarraysum);
        }
    }
    return largestsum;
    */
    /*by bruteforce O(n^3)
    int largestsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarraysum=0;
            for(int k=i;k<=j;k++)
            {
                subarraysum+=array[k];
            }
            largestsum=max(largestsum,subarraysum);
        }
    }
    return largestsum;
    */
    // kadane method O(n) time
        int cs=0;
        int ms=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cs+=array[i];
            if(cs>ms)
            {
                ms=cs;
            }
            if(cs<0)
            {
                cs=0;
            }
        }
        return ms;
    }

int main()
{
    int arr[]={10,-1,6,20,63,10,3,-57,1,1,0};
    int arr1[]={-1,-2,-3};
    int n=sizeof(arr)/sizeof(int);
    int n1=sizeof(arr1)/sizeof(int);
    cout<<subarrays(arr,n)<<endl;
    cout<<subarrays(arr1,n1)<<endl;

    return 0;
}