#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 3, 5, 7, 9, 11, 13};
    int st=0,end=6,tar=6;
    while(st<=end){
        int mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }else if(tar<arr[mid]){
            end=mid-1;
        }else{
                cout<<"Element found";
                return 0;
        }

    }
    cout <<"Element not found";
    return 0;
}