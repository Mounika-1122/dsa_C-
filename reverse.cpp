#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=123;
    int reverse=0;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit; //remember this
        n=n/10;
    }
    cout<<reverse;
    return 0;
}