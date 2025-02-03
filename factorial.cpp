#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int fact=1;
    if(a==0){
        cout<<"Factorial is: "<<"0"<<endl;
    }
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    cout<<"Factorial is: "<<fact<<endl;
    return 0;
}
//TC:O(a)
//SC:O(1)