#include<bits/stdc++.h>
using namespace std;

int BinSearch(int k, vector<int> arr)
{
    int left=0;
    int right=arr.size() - 1;
    
    while(right-left > 1)
    {
        int mid=(right+left)/2;
        if(arr[mid] < k)
            left=mid+1;
        else
            right=mid;
    }

    if(arr[right] == k || arr[left] == k)
        return 0;
    else
        return -1;

}

int main()
{
    vector<int> array {1, 3, 5};
    int k=1;
    cout<<BinSearch(k,array)<<endl;

   
}
