#include<bits/stdc++.h>
using namespace std;
bool so6(int i){
    while (i)
    {
        int s=i%10;
        if(s==6){
            return true;
        }
        
            i/=10;
        
    }
return false;
}
bool tongchan(int i){
    int sum=0;
    while (i)
    {
        sum+=i%10;
        i/=10;
    }
    if(sum %2 ==0){
        return true;
    }
    return false;
}
bool chanle(int n){
int tongchan=0;
int tongle=0;
while (n)
{
    int s=n%10;
    if(s%2==0){
        tongchan+=s;
    }
    else{
        tongle+=s;
    }
    n/=10;
}
if(tongle > tongchan){
    return true;
}
return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int a,b; cin>>a>>b;
for (int i = a; i <= b; i++)
{
    if(so6(i)&&tongchan(i)&&chanle(i)){
        cout << i << " ";
    }
}


    
return 0;
}

