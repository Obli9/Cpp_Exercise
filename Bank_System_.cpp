/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class BankAccount{
    private:
    int acc_number;
    double balance;
/*
    public
*/
    public:
    void setAcc_number(int x){      //setter
        acc_number = x;
    }
    
    void setBalance(double x){
        balance = x;
    }
    
    int getAcc_number(){        //getter
        return acc_number;
    }
    
    double getBalance(){
        return balance;
    }
    
    double deposit(double depo){    //member function
        return balance += depo;
    }
    
    double withdraw(double wdraw){
        return balance -= wdraw;
    }
    
};


int main()
{
    int acc_number;
    double balance;
    double depo;
    double wdraw;
    string choice;
    
    BankAccount Ajmal;
    cout << "Enter the account number: ";
    cin >> acc_number;
    Ajmal.setAcc_number(acc_number);
    cout << "Enter the balance: ";
    cin >> balance;
    Ajmal.setBalance(balance);
    
    cout << Ajmal.getAcc_number() << endl;
    cout << "Balance: " << Ajmal.getBalance() << endl;
    
    while(true){
        cout << "How much do you want to deposit?" << endl;
        cin >> depo;
        Ajmal.deposit(depo);
        cout << "Your total money is " << Ajmal.getBalance() << endl;
        cout << "Do you want to deposit again? (Y/N)\n";
        cin >> choice;
        if(choice == "Y"){
            cout << "How much do you want to deposit?" << endl;
            cin >> depo;
            Ajmal.deposit(depo);
            cout << "Your total money is " << Ajmal.getBalance() << endl;
            cout << "How much do you want to withdraw?\n";
            cin >> wdraw;
            Ajmal.withdraw(wdraw);
            cout << "Your total money is " << Ajmal.getBalance() << endl;
            cout << "Thank you for using myBank!";
            break;
        }
        else{
           cout << "How much do you want to withdraw?\n";
           cin >> wdraw;
           Ajmal.withdraw(wdraw);
           cout << "Your total money is " << Ajmal.getBalance() << endl;
           cout << "Thank you for using myBank!";
           break;
           
        }
    }
    
    return 0;
}