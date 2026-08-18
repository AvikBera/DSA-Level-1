#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    if(n%3==0 and n%5==0){
        cout<<"FizzBuzz";

    }else if(n%3==0){
        cout<<"Fizz";
    }
    else if(n%5==0){
        cout<<"Buzz";
    }
    else{
        cout<<n;
    }
return 0;
 

}
