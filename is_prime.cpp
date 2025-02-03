#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    bool isPrime=true;

    if(n<=1){
        isPrime=false;
    }
    else{
        for(int i=2;i<=n/2;i++){  // Divisor check up to n/2
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }

    return 0;
}
//tc:O(n)
//sc:O(1)