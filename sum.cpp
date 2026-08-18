#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter n elements:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
    sum=sum+arr[j];
}
    cout<<sum;
}