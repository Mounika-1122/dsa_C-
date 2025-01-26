#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=782463;
    int smallest_digit=9;
    int digit;
    
    while(n>0){
        digit=n%10;

        if(digit<smallest_digit){
            smallest_digit=digit;
        }
        n=n/10;
    }
    cout<<smallest_digit;

    return 0;
}
    