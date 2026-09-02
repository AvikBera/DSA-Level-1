#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int st=0,end=4;
    while(st<=end){
        int mid=(st+end)/2;
        if(mid==4){
            cout<<"Last element found:"<<arr[mid];
            return 0;
        }else{
            st=mid+1;
        }
    }
    cout<<"Not found";
}