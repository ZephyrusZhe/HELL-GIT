#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount()  {
            balance = 0.0; }


    void Deposit(double amount){
        balance = balance +amount;
        cout<< "Current balance: "<<balance<<endl; 
    }
    void Withdraw(double amount){
        balance = balance- amount;
        cout<< "Current balance: "<<balance<<endl;
    }
    double GetBalance(){
        return balance;
    }
};

int main(){
    BankAccount newacc;

    newacc.Deposit(1000);
    newacc.Withdraw(250.0);

    cout << "Final Statement Balance: " << newacc.GetBalance() << endl;
    
    
}