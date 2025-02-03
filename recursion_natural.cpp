//print n natural numbers
#include<bits/stdc++.h>
using namespace std;
void f(int n){
    if(n<1) return;
    f(n-1);
    cout<<n<<" ";
}
int main(){

    int n=5;
    f(5);
    return 0;
}
//tc:O(n)
//sc:O(n)