#include<iostream>
using namespace std;
int main(){
  for(int k=0;k<50;k++){
    if(k%3==0 && k%5==0){
      cout<< k << " ";
    }
  }
}