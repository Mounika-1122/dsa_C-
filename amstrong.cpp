#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=371, lastDig, sum=0 ;
    int dup=n;

    while(n>0){
        lastDig=n%10;
        sum=sum+(lastDig*lastDig*lastDig);
        n=n/10;
        
    }
    if(dup==sum){
        cout<<"true";
    }
    else{
         cout<<"False";
     }
}
//tc:O(log10 (n))
//sc:O(1)