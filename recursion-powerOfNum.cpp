//formula: a^b=a*a^(b-1)

#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if (b==0) return 1;
    return a* power(a,b-1);

}
int main(){
    int a,b;
    cout<<power(2,3);
    return 0;
}
