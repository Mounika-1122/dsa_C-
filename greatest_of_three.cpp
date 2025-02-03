#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=21,b=-2,c=5;

    if(a>b && a>c){
        cout<<"a is biggest"<<endl;
    }

    else if(b>a && b>c){
        cout<<"b is biggest"<<endl;
    }
    else{
          cout<<"c is biggest"<<endl;
    }
    return 0;
}
//TC: O(1)
//SC: O(!)