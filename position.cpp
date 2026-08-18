#include<iostream>
using namespace std;
int main(){
    bool found =false;
    int n,arr[100],sr,pos=0;
    cout<<"Enter n number of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the searching element:"<<endl;
    cin>>sr;
    for(int j=0;j<n;j++){
        if(sr==arr[j]){
            found=true;
            pos=j;
            break;
    }
    }
    if(found){
        cout<<"Element Found at index "<<pos; 

    }else{
        cout<<"Element not found";
    }
}