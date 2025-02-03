#include <bits/stdc++.h>
using namespace std;
string reverseStr(string str1){
    if(str1.length()<=1) return str1;
    return reverseStr(str1.substr(1))+str1[0];

}
int main(){
    string str1="hello";
    cout<<reverseStr(str1);

    return 0;
}
