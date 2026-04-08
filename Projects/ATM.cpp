//----ATM Manager Projectby:Prince Timilsina
//---Here,ATM class with various member functions like: login,changePassword,addBalance,withdrawBalance,viewAccountInfo,logout, it is simple userfriendly ATM simulation
#include <iostream>
#include <string>
#include <limits>  // For numeric limits
using namespace std;
class ATM {
private:
    string username;
    string password;
    float balance;
public:
	//here i am using constructor:
    ATM(string user,string pass,float initialbalance) {
        username=user;
        password=pass;
        balance=initialbalance;
    }

    // Method to login using the entered username and password,I didnot used int as return type is not necessary in this portion,only displayed message
    void login(string& user,string& pass) {
        while (user!=username || pass!=password)
		{ 
            cout<<"Invalid username or password! Please try again."<< endl;
            cout<<"Enter username: ";
            getline(cin, user);//here i used geTline to capture space
            cout<<"Enter password: ";
            getline(cin, pass);
        }
        cout << "Login successful!"<< endl;
    }

    // Method to change password, 
    
    void changePassword(const string& newPass) {  //i made const in new passsword
        password = newPass;
        cout << "Password updated successfully!" << endl;
    }
    
  // Method to add balance
    void addBalance(float amount) {
        while (true) 
		{ 
    if (cin>>amount &&amount > 0) 
	{
         balance += amount;  //balance = balance + amount;
         cout<<"Added Rs"<<amount<<"to your account.New balance: Rs "<<balance<<endl;
        break;  
        } 
	else {
    cout<<"Invalid amount! Please enter a positive value: ";
    cin.clear();  // Clear the error flag
	}
    }
    }

    // Method to withdraw balance
    void withdrawBalance(float amount)
	 {
        if (amount<=balance)
		{
            balance-=amount; //balance=balance-amount;
            cout<<"Withdrew Rs"<<amount<<".New balance:Rs"<<balance<< endl;
        } 
		else 
		{
            cout<<"Insufficient funds!"<<endl;
        }
    }

    // Method to view account information
    
    void viewAccountInfo()
	 {  //i just displayed username and balance here,
        cout<<"Username:"<<username<<endl;
        cout<<"Current balance: Rs"<<balance<<endl;
    }

    // Method to logout
    void logout() 
	{
        cout<<"Logging out..." <<endl;
    }
};

int main() {
	ATM user1("user1", "password123", 1000.0);  //as i made ATM's constructor so no need to call i just passed parameters
    string enteredUsername, enteredPassword;
    // Login 
    cout<<"Enter username: ";
    cin>>enteredUsername;
    cout<<"Enter password: ";
    cin>>enteredPassword;
    
    user1.login(enteredUsername, enteredPassword);  //login()
    int choice;
    do {
        cout<<"ATM Menu:"<<endl;
        cout<<"1. Change Password"<<endl;
        cout<<"2. Add Balance"<<endl;
        cout<<"3. Withdraw Balance"<<endl;
        cout<<"4. View Account Info"<<endl;
        cout<<"5. Logout"<<endl;
        cout<<"Enter your choice:";
        cin>> choice;  
        
        switch (choice) {
        case 1: {
        string newPassword;
        cout<<"Enter new password: ";
           cin>>newPassword;
        user1.changePassword(newPassword);
            break;
            }

            case 2:
			 {
        float amount;
         cout << "Enter amount to add: ";
          user1.addBalance(amount);
             break;
            }
            case 3:
            	
			 {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        user1.withdrawBalance(amount);
         break;
            }
            
    case 4:
	{
        user1.viewAccountInfo();
        break;
    }
    case 5:
    	{
       user1.logout();
       break;
   }
    default:
    cout<<"Invalid choice , Please try again."<<endl;
        }   
    } 
  while (choice != 5);  //this exit when user selects logout
    return 0;
}

