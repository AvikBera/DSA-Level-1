//Take n number of elements and print numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout<<"Enter the n number of elements:";
    cin>>n;
for(int i=0;i<n;i++){
    
    cin>>arr[i];
}
for(int j=0;j<n;j++){ 
    cout<<arr[j]<<" ";
}


}