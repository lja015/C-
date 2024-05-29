#include<iostream>
using namespace std;
class bank{
    public:
    string namee;
    static int accno;
    int acno;
    char type;
    float bal;
    float amt;
    float mbal;
    int x;
    void assign(){
        acno=++accno;
        cout<<"Enter name:";
        cin>>namee;
        cout<<"Enter account type:\n1) c for current\n2) s for savings:\n";
        cin>>type;
        if(type=='c'){
            cout<<"Deposit minimum balance Rs 500:";
            cin>>amt;
            mbal=500;
            bal=bal+amt;
            if(amt){
                cout<<"Deposited successfully"<<endl;
                cout<<"Account number:"<<accno<<endl;
                
            }
        }
         if(type=='s'){
            cout<<"Deposit minimum balance Rs 1000:";
            cin>>amt;
            mbal=1000;
            bal=bal+amt;
            if(amt){
                cout<<"Deposited successfully"<<endl;
                cout<<"Account number:"<<accno<<endl;
                
            }
        }

    }
    void deposit(){
        cout<<"Enter the amount to deposit:";
        cin>>amt;
        bal=bal+amt;
        cout<<"Current Balance:"<<bal<<endl;
    }
    void withdraw(){
        cout<<"Enter the amount to withdraw:";
        cin>>amt;
        if(bal<amt){
            cout<<"Insufficient Balance:";
    }if(bal>amt){
        if(bal-amt<mbal){
            cout<<"Minimum balance overcrossed"<<endl;
            cout<<"Do you want to continue:";
            cin>>x;
            if(x==1){
                bal=bal-amt;
                cout<<"Withdrawn successfully"<<endl;
            }else{
                cout<<"Withdrawal failed"<<endl;
            }

        }
        else{
            bal=bal-amt;
            cout<<"Withdrawn successfully";
        }
    }
}
void display(){
    cout<<"Name:"<<namee<<endl<<"Account number:"<<acno<<"Balance:"<<bal;
}};
int bank::accno=20222023;
int main(){
    bank b[100];
    int opt;
     int j=0;
    int x;
    do{
        cout<<"Enter the option:"<<endl<<"1)Create an account"<<endl<<"2)Deposit"<<endl<<"3)Withdraw"<<endl<<"4)Display"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
            b[j].assign();
            j++;
            break;
            case 2:
            cout<<"Enter the account number:";
            cin>>x;
            for(int i=0;i<j;i++){
                if(x==b[i].acno){
                    b[i].deposit();
                }
            }
            break;
            case 3:
            cout<<"Enter the account number:";
            cin>>x;
             for(int i=0;i<j;i++){
                if(x==b[i].acno){
                    b[i].withdraw();
                }
            }
            break;
            case 4:
            cout<<"Enter the account number:";
            cin>>x;
             for(int i=0;i<j;i++){
                if(x==b[i].acno){
                    b[i].display();
                }
            }
            break;
        }
        cout<<"Do you want to continue:";
        cin>>x;
    }while(x==1);
    return 0;

}