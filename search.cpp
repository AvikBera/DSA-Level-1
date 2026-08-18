#include<iostream>
using namespace std;
int main(){
    int n,sr,a[100];
    bool found=false;
    cout<<"Enter n number of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"Enter the element you want to search :"<<endl;
    cin>>sr;
    for(int j=0;j<n;j++){
        if(a[j]==sr){
            found=true;
        }
    }
    if(found){
        cout<<"Element found:"<<" "<<sr;
    }else{
        cout<<" Element Not found";
    }
    return 0;
}