#include<bits/stdc++.h>
using namespace std;

int sumOfTerms(int n){
    if(n<=0){
        return 0;
    }
    return pow(n,3)+sumOfTerms(n-1);

}
int main(){
    int n=2;
    cout<< sumOfTerms(n);

    return 0;
}

//tc:O(n)
//sc:O(n)

// Space Complexity Analysis
// Recursion Stack Usage: The function stores n calls in the call stack at its deepest point.
// Each call requires O(1) extra space for function parameters and local variables.
// Since recursion is used without additional data structures, the total space complexity is: O(n)