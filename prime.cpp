#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;

    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count==2){
            cout<<"Prime";
        }
        else{
            cout<<"Not prime";
        }
    

    return 0;
}
