#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20];
    for (int i = 0; i < 20; i++)
    {
        cin>>a[i];
    }
    
    int best=0;
    int len=1;
    int clech=0;
  for (int i = 1; i < 20; i++)
  {
    int dif=a[i]-a[i-1];
    if (dif==0)
    {
        if (len >best)
        {
            best=len;
           
        }
         len=1;
        clech=0; 
    }
    else{
        if (clech==0)
        {
            len=2;
            clech=dif;


        }
        else{
            if(clech*dif<0){
                len++;
                clech=dif;
            }
            else{
                if (len>best)
                {
                    best=len;
                }
                len=2;
                    clech=dif;
                
            }
        }
        
    }
    
  }
  if (len>best)
  {
    best=len;
  }
  

  cout << (best < 2 ? 0 : best);
  
    



}
