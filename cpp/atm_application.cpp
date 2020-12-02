/*
Analyze the following requirements and design a professional looking application:

A bank previously attacked by the hackers want to secure all their software-based applications including the ATM machines.
For this, the bank needs the customization and redesigning of all of the software and the same apply for the ATM machines.
Imagine that all the customers in the bank have a maximum deposit of 90,000 Rs. For this the rule is to recognize customers
with their 4-digit pin code. The available balance for each customer is based on the first digit of the pin code multiplied
by 10000 e.g. if someone’s pin code is 1090, the available balance will be 1*10000 = 10,000, similarly if someone’s pin
code is 8976, his available balance will be 8*10000 = 80,000 and so on. The important thing is that the bank offers maximum
cash of 50,000 Rs in one day through the ATM machine depending on the available balance. Perform the following tasks:
Display the menu to the user having options of fast cash, cash withdrawal, balance inquiry and cash transfer. If user 
chooses the option of Fast cash then show him/her the options like 1000 RS, 2000 Rs, 3000 RS, 4000 Rs, 5000 Rs, 10000 Rs,
and 20,000 Rs. User should be able to select one of these amounts or select the option of going back to previous menu.
If he selects the amount, then transaction should be completed by a successful transaction message if the amount is
less than or equal to the account balance. If the amount is greater than the available balance, then display
the message “insufficient balance” and options to either continue transaction or abort transaction.
Provide the required functionality for the options of cash withdrawals and balance inquiry as well.*/
#include <iostream>
using namespace std;

int main()
{
	for (;;)
	{
		int choice, pin_code, balance, current_balance, deposit, withdraw, cash_transfer, fast_cash, option, option2, selected_amount;
		cout << "********************************************************************************" << endl;
		cout << "********                    WELCOME                                     ********" << endl;
		cout << "********************************************************************************" << endl;
		cout << "enter four digit pin code" << endl; //you have to write four digit code here.
		cin >> pin_code;
		if (pin_code > 999 && pin_code <= 9999)
		{
			cout << "\n-----------------------------" << endl;
			cout << "|          MENU             |" << endl;
			cout << "-----------------------------" << endl;
			cout << "| 1. deposit                |" << endl;
			cout << "| 2. cash Withdrawl         |" << endl;
			cout << "| 3. Balance inquiry        |" << endl;
			cout << "| 4. cash Transfer          |" << endl;
			cout << "| 5. fast cash              |" << endl;
			cout << "| 6. [Exit]                 |" << endl;
			cout << "-----------------------------" << endl;
			cin >> choice;
			balance = (pin_code / 1000) * 10000; // your total balance
			switch (choice)
			{
			case 1:
			{
				cout << "Enter amount you want to deposit: " << endl;
				cin >> deposit;
				current_balance = balance + deposit;
				if (current_balance > 90000)
				{
					cout << "you can't deposit money greater than 90000" << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
				}
				else
				{
					cout << "Now your balance is:  " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				break;
			}
			case 2:
			{
				cout << "Enter amount you want to withdraw" << endl;
				cin >> withdraw;
				current_balance = balance - withdraw;
				if (withdraw > balance)
				{
					cout << "SORRY! you can't withdraw cash" << endl;
				}
				else
					cout << "amount you withdraw is: " << withdraw << endl;
				cout << "Now your remaining balance is:  " << current_balance << endl;
				cout << "1:  make another transaction"
					 << "\t"
					 << "\t"
					 << "2:  back" << endl;
				cin >> option2;
				switch (option2)
				{
				case 1:
				{
					cout << "------------------------------------------------------------------------------------------- \n"
						 << "-------------------------------------------------------------------------------------------" << endl;
					break;
				}
				default:
					break;
				}
				break;
				break;
			}
			case 3:
			{
				current_balance = (pin_code / 1000) * 10000;
				cout << " now your balance is:  " << current_balance << endl;
				cout << "1:  make another transaction"
					 << "\t"
					 << "\t"
					 << "2:  back" << endl;
				cin >> option2;
				switch (option2)
				{
				case 1:
				{
					cout << "------------------------------------------------------------------------------------------- \n"
						 << "-------------------------------------------------------------------------------------------" << endl;
					break;
				}
				default:
					break;
				}
				break;
			}
			case 4:
			{
				cout << "enter amount you want to transfer" << endl;
				cin >> cash_transfer;
				current_balance = balance - cash_transfer;
				if (cash_transfer < balance)
				{
					cout << "cash is transferred successfully.\n"
						 << "now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				else
				{
					cout << "sorry! you cant transfer cash" << endl;
				}
				break;
			}
			case 5:
			{
				cout << "choose one option for fast cash" << endl;
				cout << "1- 1000"
					 << "\t"
					 << "\t"
					 << "2- 2000"
					 << "\t"
					 << "\t"
					 << "3- 3000" << endl;
				cout << "4- 4000"
					 << "\t"
					 << "\t"
					 << "5- 5000"
					 << "\t"
					 << "\t"
					 << "6- 10000" << endl;
				cout << "7- 20000"
					 << "\t"
					 << "8- other"
					 << "\t"
					 << "9- BACK" << endl;
				cin >> option;
				switch (option)
				{
				case 1:
				{
					cout << "you withdraw :1000" << endl;
					current_balance = balance - 1000;
					cout << "now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				case 2:
				{
					cout << "you withdraw :2000" << endl;
					current_balance = balance - 2000;
					cout << "now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				case 3:
				{
					cout << "you withdraw :3000" << endl;
					current_balance = balance - 3000;
					cout << "now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				case 4:
				{
					cout << "you withdraw :4000" << endl;
					current_balance = balance - 4000;
					cout << "now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				case 5:
				{
					cout << "you withdraw :5000" << endl;
					current_balance = balance - 5000;
					cout << "now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				case 6:
				{
					cout << "you withdraw : 10000" << endl;
					current_balance = balance - 10000;
					cout << "Now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				case 7:
				{
					cout << "you withdraw :20000" << endl;
					current_balance = balance - 20000;
					cout << "now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				case 8:
				{
					cout << "enter amount you want to withdraw: " << endl;
					cin >> selected_amount;
					current_balance = balance - selected_amount;
					cout << "Now your remaining balance is: " << current_balance << endl;
					cout << "1:  make another transaction"
						 << "\t"
						 << "\t"
						 << "2:  back" << endl;
					cin >> option2;
					switch (option2)
					{
					case 1:
					{
						cout << "------------------------------------------------------------------------------------------- \n"
							 << "-------------------------------------------------------------------------------------------" << endl;
						break;
					}
					default:
						break;
					}
					break;
				}
				default:
					break;
				}
			}
			default:
				break;
			}
		}
		else
		{
			cout << "invalid pin code" << endl;
		}
	}
	return 0;
}