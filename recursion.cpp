// printing numbers N to 1 using recursion

#include<bits/stdc++.h>
using namespace std;

void printNo(int num){
   
    if(num==0){
        return;
    }
    cout<<num<< " ";
    printNo(num-1);
   
}
int main(){
    int num=3;
    printNo(num);
    return 0;
}
