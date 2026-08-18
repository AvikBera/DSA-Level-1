#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    int min;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min=arr[0];
    for(int j=1;j<n;j++){
        if(min>arr[j]){
            min=arr[j];
        }

    }
cout<<min;
}