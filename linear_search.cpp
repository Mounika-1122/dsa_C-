#include<bits/stdc++.h>
using namespace std;

void linear_search(int arr[], int n){
    int temp=-1;
    for(int i=0; i<n; i++){
        if (arr[i]==n){
            temp=0;
            cout<<"number is found at index: "<<i<<endl;
            
        }
        if(temp==-1){
            cout<<"number is not found  "<<i<<endl;
        }
    }
}
int main(){
    int arr[4]={2,76,91,35};
    cout<<"enter a number to search: "<<endl;
    int num;
    cin>>num;
    
    linear_search(arr, num);
    return 0;
}