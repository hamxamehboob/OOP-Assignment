#include <iostream>
using namespace std;

class BankAccount{
    protected:
  string AccountID;
  float balance;
  public:
  void balanceInquiry(float balance){
    this->balance = balance;
    cout<<"The Current Amount In the Account is :"<<balance<<endl;
  }
};
class CurrentAccount : public BankAccount{
    public:
    float amount;
    CurrentAccount(string AccountID,float Balance){
        this->AccountID = AccountID;
        this->balance =  balance;
    }
    void AmountWithdrawn(){
        cout<<"Enter Amount to Withdrawn"<<endl;
        cin>>amount;
        if(balance < 5000){
            cout<<"Insufficient Balance in the Account"<<endl;
        }
        else{
            cout<<"Your Amount Rs "<<amount<<"is successfully withdrawn from the account"<<endl;
        }
    }
    void depositAmount(){
        cout<<"Enter The Amount to Deposit into the Account"<<endl;
        cin>>amount;
        cout<<"The amount Rs"<<amount<<"is successfully depostied to your account"<<endl;
    }
};
class SavingAccount : public BankAccount{
    public:
    float amount;
    SavingAccount(string AccountID,float Balance){
        this->AccountID = AccountID;
        this->balance =  balance;
    }
    void AmountWithdrawn(){
        cout<<"Enter Amount to Withdrawn"<<endl;
        cin>>amount;
        if(balance < 10000){
            cout<<"Insufficient Balance in the Account"<<endl;
        }
        else{
            cout<<"Your Amount Rs "<<amount<<"is successfully withdrawn from the account"<<endl;
        }
    }
    void depositAmount(){
        cout<<"Enter The Amount to Deposit into the Account"<<endl;
        cin>>amount;
        cout<<"The amount Rs"<<amount<<"is successfully depostied to your account"<<endl;
    }
};

int main(){
    BankAccount B1;
    CurrentAccount C1("5344000Abs",6000);
    SavingAccount S1("asb4422995",1100);
    C1.AmountWithdrawn();
    C1.depositAmount();
    S1.AmountWithdrawn();
    S1.depositAmount();

}