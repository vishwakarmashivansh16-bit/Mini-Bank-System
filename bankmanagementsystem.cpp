/*
---------------------------------------------------------
PROJECT : MINI BANK MANAGEMENT SYSTEM
LANGUAGE : C++
AUTHOR : SHIVANSH VISHWAKARMA
DESCRIPTION :
A simple console-based banking system that allows users to:
  - Create new bank accounts
  - Deposit or withdraw money
  - Check balance
  - View account details

This project demonstrates the use of:
  - Switch statements
  - Loops
  - String handling
  - Conditional statements
  - Basic user input/output
-----------------------------------------------------------
*/
#include<bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;
int main(){
     // Variables for user details and options
    string name,surname1;   // First name and surname
    int choice1;            // Main menu choice (Create / Existing)
    long long accountnumber; // Account number
    long long  balance=100;  // Initial Minimum Balance
    int choice2;            // Sub-menu choice (Deposit / Withdraw / etc.)
    
    // Welcome message
     cout<<"------ 🏦  WELCOME TO MINI BANK 🏦  ------"<<endl;
    cout<<"1.Create Account"<<endl;
    cout<<"2.Existing Accont"<<endl;
    cin>>choice1;
    // Switch for main menu choices
    switch(choice1){
        // Case 1: Creating a new account
        case 1:{
           string gender,father ,marital,address,response,surname2;
           long long mobile;
            cout<<"For Creating Account You Have To Fill Details Accordingly  "<<endl;
             // Taking personal details
            cout<<"Enter Your Name"<<endl;
            cin>>name>>surname1;
            string dob;
            cout<<"Enter Your Date of Birth in Format of DD/MM/YYYY"<<endl;
            cin>>dob;
            cout<<"Enter Your Gender"<<endl;
            cin>>gender;
            cout<<"Enter Your Father/Mother Name"<<endl;
            cin>>father>>surname2;
            string occupation;
            cout<<"Enter Your Occupation"<<endl;
            cin>>occupation;
            cout<<"Enter Your Marital Status"<<endl;
            cin>>marital;
            cout<<"Enter Your Address"<<endl;
            cin.ignore();   // To ignore newline before getline
            getline(cin, address);    // To take multi-word address
            cout<<"Enter Your Mobile Number"<<endl;
            cin>>mobile;
             // Display all details for confirmation
            cout<<"-------------------------"<<endl;
            cout<<"Check Your Details"<<endl;
            cout<<"NAME : "<<name<<" "<<surname1<<endl<<"DATE OF BIRTH : "<<dob<<endl<<"GENDER : "<<gender<<endl<<"FATHER/MOTHER NAME : "<<father<<" "<<surname2<<endl<<"OCCUPATION : "<<occupation<<endl<<"MARITAL STATUS : "<<marital<<endl<<"ADDRESS :" <<address<<endl<<"MOBILE NUMBER : "<<mobile<<endl;
            // Confirmation from user
            cout<<"If details are correct then type yes else no "<<endl;
            cin>>response;
            if (response == "yes" || response == "YES")  {
                cout<<"Your Account is Successfully Created✅"<<endl;
            }
            else{
                cout<<"❌Refill your Details!"<<endl;
            }
            break;
        }
         // Case 2: Existing account menu
        case 2:{
            
            cout<<"Enter Your Name"<<endl;
     cin>>name>>surname1;
     cout<<"Enter Your Account Number"<<endl;
     cin>>accountnumber;
     // Loop for banking operations
     do{
     cout<<"-------MAIN MENU-------"<<endl;
     cout<<"1.Deposit"<<endl;
     cout<<"2.Withdrawl Money"<<endl;
     cout<<"3.Check Balance"<<endl;
     cout<<"4.Bank Details"<<endl;
     cout<<"5.Exit"<<endl;
     cout<<"Enter Your Choice"<<endl;
     cin>>choice2;
     // Switch for sub-menu
     switch(choice2){
        // Deposit money
        case 1:{
            int depositbalance;
            cout<<"Enter Your Deposit Amount"<<endl;
            cin>>depositbalance;
            if(depositbalance>0){
                balance+=depositbalance;
                cout<<"Your Amount is Successfully Deposited ✅"<<endl;
                cout<<"Current Balance: "<<balance<<" Rs/-"<<endl;
            }
            else{
                cout<<" ❌Invalid Amount"<<endl;
            }
            break;
        }
        // Withdraw money
        case 2:{
            int withdrawl;
            cout<<"Enter Your Withdrawal Amount"<<endl;
            cin>>withdrawl;
            if(withdrawl>balance){
                cout<<"Insufficient Balance❌"<<endl;
            }
            else{
                balance-=withdrawl;
                cout<<"✅Withdrawal  "<<withdrawl<<" Rs/- successfully!"<<endl;
                cout<<"Current Balance: "<<balance<<" Rs/-"<<endl;
            }
            break;
        }
        // Check balance
        case 3:{
            cout<<"Current Balance: "<<balance<<" Rs/-"<<endl;
            break;
        }
        // Show account details
        case 4:{
            cout<<"-------------------"<<endl;
            cout<<"ACCOUNT DETAILS"<<endl<<"-------------------"<<endl;
            cout<<"Account Holder "<<name<<" "<<surname1<<endl;
            cout<<"Account Number "<<accountnumber<<endl;
            cout<<"Current Balance "<<balance<<endl;
            cout<<"-------------------"<<endl;
            break;


        }
         // Exit
        case 5:{
            break;
        }
        // Invalid choice handling
        default:{
            cout<<"❌ Invalid Choice! Try Again."<<endl;
        }
     }    

     }

     while(choice2 != 5); // Loop until user chooses Exit
     break;


        }
        // Default case for invalid main menu input
         default:{
            cout<<"❌ Invalid Option! Please try again."<<endl;
    }

     

    }
    return 0; 
}