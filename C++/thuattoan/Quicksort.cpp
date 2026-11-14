#include<bits/stdc++.h>
using namespace std;
void quicksort(vector<long long>& a,int l,int r){
  int i=l; int j=r; int p=a[((l+r)/2)];
  while(i<=j){
  while(a[i]<p) i++;
  while(a[j]>p) j--;
    if(i<=j) swap(a[i++],a[j--]);
  }
  if(l<j) quicksort(a,l,j);
  if(i<r) quicksort(a,i,r);
  
}
int main(){
  int n; cin>>n;
  vector<long long> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  quicksort(a,0,n-1);
  for(long long x:a){
    cout << x << " ";
  }
}