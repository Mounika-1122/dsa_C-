// printing N to 1 using recursion

#include<bits/stdc++.h>
using namespace std;

void printNo(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<" ";
    printNo(i-1,n);

}
int main(){
    printNo(4,4);

    return 0;
}
