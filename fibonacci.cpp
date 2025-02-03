#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int a=0,b=1, temp;
    cout<<"Fibonacci series: "<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        temp=a+b;
        cout<<temp<<" ";
        b=temp;
        a=b;
    }

    return 0;
}
//TC: O(n)
//SC: O(1)
