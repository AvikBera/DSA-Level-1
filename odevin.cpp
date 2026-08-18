#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100];
    for (int i=0;i<n;i++){
    cin>>a[i];
}

  cout << "Even indexes: ";
    for(int j = 0; j < n; j++){
        if(j % 2 == 0){
            cout << a[j] << " ";
        }
    }
     cout << endl;

    cout << "Odd indexes: ";
    for(int j = 0; j < n; j++){
        if(j % 2 != 0){
            cout << a[j] << " ";
        }
    }
    }
