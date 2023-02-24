#include <iostream>
#include <vector>
using namespace std;
int lowerbound(vector<int> arr,int val)
{
    /*bruteforce 
    int n=arr.size();
    int store = -1;
    int mini=1000;
    int minim=1000;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            mini=val;
            break;
        }
        else
        {
            int val1=abs(arr[i]-val);
            if(val1<minim)
            {
                minim =val1;
                mini=arr[i];
            }
        }
    }
    if(mini>=val)
    {
        cout<<mini;
    }
    else
    {
        cout<<"-1";
    }
    */
   //binarysearch
    int l=0;
    int r=arr.size()-1;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==val)
        {
            return val;
        }
        else if(arr[mid]>val)
        {
            r=mid-1;
        }
        else if(arr[mid]<val)
        {
            l=mid+1;
        }
    }
    if(l==0 && arr[l]>val)
    {
        return -1;
    }
    else
    {
        return arr[l];
    }
}
int main()
{
    vector<int> array={-1,-1,2,3,5};
    lowerbound(array,2);
}