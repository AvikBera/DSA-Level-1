#include<iostream>
using namespace std;
int    main(){
    int arr[]={1, 3, 5, 7, 9, 11, 13};
    int st=0, end=6 ;// end=n-1
    int tar=10;
    while(st<=end){
        int mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }else if(tar<arr[mid]){
            end=mid-1;
        }else{
            cout<<"Element found at index :"<<mid;
            return 0;
        }
    }
            cout<<"Element Not found in any index!!";

    return 0;
}
