#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=24;
    int mult=1;
    int digit;
    
    while(n>0){
        digit=n%10;
        mult*=digit;
        n=n/10;
    }
    cout<<mult;

    return 0;
}
    