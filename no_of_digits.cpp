#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=23323;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<count;
    return 0;
}
//sc:O(1)
//tc:O(log (n))