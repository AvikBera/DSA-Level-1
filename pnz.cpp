#include<iostream>
using namespace std;
int main(){
    int pos=0;
    int neg=0;
    int zero=0;
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int j=0;j<n;j++){
        if(arr[j]>0){
            pos++;
        }else if(arr[j]<0){
            neg++;
        }else{
            zero++;
        }
    }
    cout<<"Positive="<<pos<<endl;
    cout<<"Negative="<<neg<<endl;
    cout<<"Zero="<<zero;
}