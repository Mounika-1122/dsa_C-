#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){ //code running
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }   
        }
        swap(arr[i], arr[mini]);

    }
}
int main(){
    
    int arr[]={5,2,9,0,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}