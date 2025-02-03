#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
int main(){

    int arr[]={2,8,7,3,11,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}