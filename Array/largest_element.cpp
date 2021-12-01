#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> arr){
   int largest=INT_MIN;
   for(auto x:arr){
       largest=max(x,largest);
   }
   return largest;
}
int main()
{
   
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   cout<<largestElement(arr);
   return 0;
}