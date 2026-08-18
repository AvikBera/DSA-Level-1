#include<iostream>
using namespace std;
int main(){
    int n,arr[100],sum=0;
    float av;
    cout<<"Enter n elements";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
            av=(float)sum/n;

    cout<<av;
}