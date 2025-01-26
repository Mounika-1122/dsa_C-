//printing a name N times

#include<bits/stdc++.h>
using namespace std;

void printName(int i,int N){
    if(i>N){
        return;
    }
    cout<<"Mouni❤️ ";
    printName(i+1,N);

}
int main(){
    printName(1, 3);
    return 0;
}