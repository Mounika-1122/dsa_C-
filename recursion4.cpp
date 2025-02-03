//sum of n numbers using recursion

#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
    if(n<1){
        return n;
    }
    return n+sumOfN(n-1); 
}
int main(){

    int n=3;
    cout<< sumOfN(n);
    return 0;
}