#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=11;
    int reverse=0;
    int dup=n;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }

    if(reverse==dup){
        cout<<"palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}
//tc:O(log n)
//sc:O(1)
