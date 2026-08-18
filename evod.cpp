#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even:"<<even<<endl;
    cout<<"Odd:"<<odd;
}