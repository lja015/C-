#include<iostream>
using namespace std;
class matrix{
    public:
    int r,c;
    int p[10][10];
    void read(){
        cout<<"Enter the number of rows and coloumns:";
        cin>>r>>c;
        cout<<"Enter array elements"<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>p[i][j];
            }
        }  
    }
    matrix operator *(matrix &m){
        matrix a;
        a.r=r;
        a.c=m.c;
        a.p[r][m.c];
        for(int i=0;i<r;i++){
            for(int j=0;j<m.c;j++){
                a.p[i][j]=0;
                for(int k=0;k<m.r;k++){
                    a.p[i][j]+=(p[i][k]*m.p[k][j]);
                }
            }
        }
        return a;
    }
    void display(){
        cout<<"The matrix:"<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    matrix a,b,c;
    a.read();
    b.read();
    c=a*b;
    c.display();
}