#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=321, lastDig;
    int reverse=0;
    while(n>0){
        lastDig=n%10;
        reverse=(reverse*10)+lastDig;
         n=n/10;
        
    }
    cout<<reverse;
}