#include<iostream>
using namespace std;
int main(){
    /* int arr[]={1,2,3,4,5,6,7};
    arr[0]=7;
    cout<<arr[5] ;*/
    int arr[7];
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }
    //output
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}