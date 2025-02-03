#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4572908;
    int large_digit=0;
    int digit;
    
    while(n>0){
        digit=n%10;

        if(digit>large_digit){
            large_digit=digit;
        }
        n=n/10;
    }
    cout<<large_digit;

    return 0;
}
//tc:O(log (n))
//sc:O(1)