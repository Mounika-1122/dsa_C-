#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
          
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }


int main(){

    int arr[]={8,2,7,3,11,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}