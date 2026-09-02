#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,4,5};
    int ans;
    int st=-0,end=6,tar=2;
    while(st<=end){
        int mid=(st+end)/2;
        if(tar==arr[mid]){
                 ans=mid;
            end=mid-1;
        }
            else if(tar>arr[mid]){
                st=mid+1;

            }else{
                end=mid-1;
            }

        }
    
    cout<<"First occurance at index :"<<ans;
    return 0;
    }