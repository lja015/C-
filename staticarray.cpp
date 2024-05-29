#include<iostream>
using namespace std;
class arrayy{
    public:
    static int* a;
    static int n;
    static float sum;
    static float avg;
    int mult;
    void assign(){
        cout<<"Enter the size of array:";
        cin>>n;
        a=new int[n];
    }
    void read(){
        cout<<"Enter the array elements:"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
    static void aveg(){
        sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        avg=sum/n;
        cout<<"The average of the array is "<<avg<<endl;
    }
    void multiply(){
        cout<<"Enter the multiplier:";
        cin>>mult;
        for(int i=0;i<n;i++){
            a[i]=mult*a[i];
        }
    }
    void sort(){
        for(int i=0;i<n;i++){
            for(int j=0;j<(n-i-1);j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    void display(){
        cout<<"The array:"<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
    }
};
int* arrayy::a=nullptr;
int arrayy::n=0;
float arrayy::sum=0;
float arrayy::avg=0;
int main(){
    arrayy a1;
    a1.assign();
    a1.read();
    a1.aveg();
    arrayy a2;
    a2.multiply();
    a2.display();
    arrayy a3;
    a3.sort();
    a3.display();
    a1.aveg();
}