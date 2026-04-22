#include <iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    static int balance;
    public:
    BankAccount(){
        cout<<"Enter account number: ";
        cin>>accountNumber;
        balance=0;
    }
    void deposit(int amount){
        if(this->accountNumber==accountNumber){
            balance+=amount;
            cout<<"Amount deposited: "<<amount<<endl;
        }
        else{
            cout<<"Invalid account number!"<<endl;
        }
    }
    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Amount withdrawn: "<<amount<<endl;
        }
    }
    void getBalance(){
        cout<<"Current balance: "<<balance<<endl;
    }
};
int BankAccount::balance=0;
int main(){
  BankAccount account;
    account.deposit(1000);
    account.withdraw(500);
    account.getBalance();
    return 0;
}