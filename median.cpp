#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"Enter the size of array:";
    cin>>s;
    int a[s];
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"The prime numbers in the array:"<<endl;
    int k;
    int f;
    for(int i=0;i<s;i++){
        f=0;
        if(a[i]<=1){
            continue;
        }
        for(k=2;k<a[i];k++){
            if(a[i]%k==0){
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<a[i]<<endl;
        }
    }
    return 0;
    }