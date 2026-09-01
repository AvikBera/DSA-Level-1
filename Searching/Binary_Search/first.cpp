#include<iostream>
using namespace std;
int main(){
    int arr[]={10, 20, 30, 40, 50};
    int st=0,end=4;
while(st<=end){
    int mid=(st+end)/2;
    if(mid==0){
        cout<<"Element found :"<<arr[mid];
        return 0;
    
    }else{
        end=mid-1;
    }
}
    return 0;
}
