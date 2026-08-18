#include<iostream>
using namespace std;
int main(){
    int arr[100],n,sr,count=0;
    cout<<"Enter the ekement";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Eneter the search element";
    cin>>sr;
    for(int j=0;j<n;j++){
        if(arr[j]==sr){
            count ++;
            
        }
    }
    cout<<count;
}