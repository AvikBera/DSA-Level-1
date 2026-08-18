#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    int max;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
                max=arr[0];

    for(int j=1;j<n;j++){
        if(arr[j]>max){
max=arr[j];
        }
    }
    cout<<max;
    
}