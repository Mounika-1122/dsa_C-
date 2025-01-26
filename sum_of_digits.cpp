#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=142;
    int sum=0;
    int digit;
    
    while(n>0){
        digit=n%10;
        sum+=digit;
        n=n/10;
    }
    cout<<sum;

    return 0;
}
    