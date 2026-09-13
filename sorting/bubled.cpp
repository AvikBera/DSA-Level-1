#include<iostream>
using namespace std;
void bubSort(int a[],int n){
    for(int i=0; i<n-2;i++){
        bool swap=false;
        for(int j=0 ; j<n-i-2;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap=true;
            }
        }
        if(!swap){
            return;
        }
    }
}
int main(){
    int a[]={3,2,5,1,7};
    int n=5;
    bubSort(a,n);
    for(int c:a){
        cout<<c<<" ";
    }
}