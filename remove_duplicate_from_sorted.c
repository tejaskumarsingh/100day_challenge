#include<bits/stdc++.h>
using namespace std;
int duplicatesorted(vector<int> &arr,int n){
  if(n==0||n==1){
  return n;
  }
int j=0;
for(int i=0;i<n-1;i++){
  if(arr[i]!=arr[i+1]){
    arr[j++]=arr[i];
  }
}
arr[j++]=arr[n-1];
return j;
}
int main(){
  vector<int> arr={1,1,1,2,3,3,3,4,5};
  int n=arr.size():
  int y=duplicatesorted(arr,n);
  cout<<y<<enld;
return 0;
}
