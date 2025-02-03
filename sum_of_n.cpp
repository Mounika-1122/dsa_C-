#include<bits/stdc++.h>
using namespace std;

int sumOfN(int i, int sum){
    if(i<1){
        return sum;
    }
    return sumOfN(i-1,sum+i);

}
int main(){
    int n=3;
    int sum;
    int i;
   cout<< sumOfN(n,0);
    return 0;
}

