#include<iostream>
using namespace std;
void SelectionSot(int a[],int n){
    for(int i=0;i<n-1;i++){
        int smallIdx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[smallIdx]){
                 smallIdx=j;

            }
        }
        int temp=a[i];
        a[i]=a[smallIdx];
        a[smallIdx]=temp;
    }

}
int main(){
    int  a[]={3,1,4,2,5};
    int n=5;
    SelectionSot(a,n);
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;

}