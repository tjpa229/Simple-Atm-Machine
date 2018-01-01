//Name: Tirth Patel, CS 215 Section 011,  date project is due: Feb 10 2017
//project 1-  this program is a simple ATM machine, it lets users put in their account number and balance and then gives a variety of options such as deposit, check balance, and withdraw
// the program implements alot of loops and alot of conditional statements. The loops and conditional statements are used in coordination to run the program over and over again until told 
//told to shutdown and to implement user input validation. the most complex part about this project was the withdrawal option
//


#include<iostream>
#include<string>

using namespace std;

void main()     //main function starts here 
{
	
	float deposit;     //this variable is used for the amount of money the customer wants to deposit 
	string accountNum;     //this string is the account number/name
	float balance;       //this is the balance the user enters at the beginning 
	string option;      //this variable will store the menu option the user selects(B, W or D)
	float withdrawal;     //this float is the amount the user wants to withdraw
	int step = 0;       //this variable was made to control the loops for the withdrawal function as i could not figure out any other way to get it to run only once

	while (accountNum != "shutdown")     
	{
		cout << "" << endl;
		cout << "$---------------$" << endl;
		cout << "| Bank of Patel |" << endl;     //the logo
		cout << "|  CS 215-011   |" << endl;
		cout << "$---------------$" << endl;
		cout << "" << endl;
		cout << "Enter account number:     ";       //atm service starts here
		cin >> accountNum;
		if (accountNum == "shutdown")    //the statement to stop the program
		{
			cout << "shutting down!" << endl;
			system("pause");
			return;
		}
	
		
		cout << "Enter account balance:	  ";          
		cin >> balance;
		cout << "" << endl;
		
		cout << "Chose a menu option (B, W or D)" << endl;         //menu options displayed
		cout << "B - Balance enquiry" << endl;
		cout << "D - Deposit" << endl;
		cout << "W - Withdrawal" << endl;
		cout << "" << endl;
		
		do {        //the loop for the menu options starts here

			cout << "Enter option:	";
			cin >> option;
			cout << "" << endl;
			if (option == "B")
			{
				cout << "Your Receipt! $$" << endl;
				cout << "--------------" << endl;
				cout << "Account:	" << accountNum << endl;
				cout << "Balance:	" << balance << endl;
				cout << "" << endl;
				
				break;    //this will break out of the do loop
			}
			else if (option == "D")
			{
				cout << "Enter deposit amount: ";
				cin >> deposit;
				cout << "" << endl;
				cout << "Your Receipt! $$" << endl;
				cout << "--------------" << endl;
				cout << "Account: " << accountNum << endl;
				cout << "Prev Bal : " << balance << endl;
				cout << "Deposit : $ " << deposit << endl;
				cout << "New Bal : $ " << balance + deposit << endl;
				cout << "" << endl;
				
				break;   //this will break out of the do loop 
			}
			else if (option == "W")
			{

				do
				{

					cout << "Enter withdrawal amount: ";
					cout << "" << endl;
					cin >> withdrawal;
					if (withdrawal <= balance)
					{
						cout << "Your Receipt! $$" << endl;
						cout << "--------------" << endl;
						cout << "Account: " << accountNum << endl;
						cout << "Prev Bal : " << balance << endl;
						cout << "Withdrawn : $ " << withdrawal << endl;
						cout << "New Bal : $ " << balance - withdrawal << endl;
						cout << "" << endl;
						
						break;   //this will break out of the do loop
						
					}

					else
					{
						cout << "Insufficient funds!" << endl;
						cout << "" << endl;
						continue;    ////this will continue the do loop at the start (for the withdrawal function)
					}
				} while (step != 1);
				break;  //this will break out of the do loop
			}
			
			else {
				cout << '"' << option << '"' << " is not a valid option. Choose either B, D, or W." << endl;
				continue;   //this will continue the do loop at the start
			
				
			}
		} while (option != "B" || option != "W" || option != "D");   //this statement basically checks if option is not equal to B, W, or D
																	


	
	system("pause");
}