#include <bits/stdc++.h>
using namespace std;
int f(int n){
    if (n<=1) return n;
    return f(n-1)+f(n-2);
}
int main(){
    int n=4; //gives fibonacci number at 4th index
   cout<< f(n);

    return 0;
}
//time complexity-- O(n^2)
//space complexity-- O(n)

