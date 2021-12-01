#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> arr){
    int largestSum=INT_MIN;
    bool flag=true;
    for(auto x:arr){
        if(x>0){
            flag=false;
        }
        largestSum=max(largestSum,x);
    }
    if(flag){
        return largestSum;
    }
    int currSum=0,n=arr.size();
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        largestSum=max(largestSum,currSum);
    }
    return largestSum;
}
int main()
{
   
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   cout<<maxSubarraySum(arr);
   return 0;
}