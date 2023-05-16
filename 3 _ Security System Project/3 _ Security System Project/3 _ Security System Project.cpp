
#include <iostream>
#include <fstream> 
#include <sstream>
#include <string>

using namespace std;

int main()
{
	int a = 0, i = 0;
	string text, old, password1, password2, pass, name, password0, age, user, word, word1;
	string creds[2], cp[2];

	cout << "\tsecurity system" << "\n";

	cout << "___________________________"<< "\n";
	cout << "|       1.Register        |" << "\n";
	cout << "|       2.Login           |" << "\n";
	cout << "|       3.Change Password |" << "\n";
	cout << "|_______4.End Program_____|" << "\n\n";

	do
	{
		cout << "\n\n";
		cout << "Enter Your Choice:- ";
		cin >> a;
		switch (a)
		{
		case 1: {
			cout << "_______________________\n";
			cout << "|-------Register------|\n";
			cout << "|_____________________|\n\n";
			cout << "Please Enter User Name:- ";
			cin >> name;
			cout << "Please Enter The Password:- ";
			cin >> password0;
			cout << "Please Enter Your Age:- ";
			cin >> age;

			ofstream of1;
			of1.open("file.txt");
			if (of1.is_open()) {
				of1 << name << "\n";
				of1 << password0 << "\n";
				cout << "Registeration successfull\n";
			}
			break;
		}
		case 2: {
			i = 0;
			
			cout << "_____________________\n";
			cout << "|-------login-------|\n";
			cout << "|___________________|\n\n";

			ifstream of2;
			of2.open("file.txt");
			cout << "Please Enter The User Name:- ";
			cin >> user;
			cout << "Please Enter The Password:- ";
			cin >> pass;

			if (of2.is_open())
			{
				while (!of2.eof())
				{
					while (getline(of2, text)) {
						istringstream iss(text);
						iss >> word;
						creds[i] = word;
						i++;
					}

					if (user == creds[0] && pass == creds[1])
					{
						cout << "--Log in successful---\n";
						cout << "Details: \n";
						cout << "Username: " + name << "\n";
						cout << "Password: " + pass << "\n";
						cout << "Age: " + age << "\n";
					}
					else
					{
						cout << "\n\nIncorrect Credentials\n";
						cout << "|\t1. Press 2 to login              |"; 
						cout << "|\t2. Press 3 to change Password    |";
						break;
					}
				}
			}
			break;
		}
		case 3: {
			i = 0;

			cout << "----------Change Password----------\n";

			ifstream of0;
			of0.open("file.txt");
			cout << "Enter The Old Password:- ";
			cin >> old;
			if (of0.is_open()) {
				while (of0.eof()) {
					while (getline(of0, text)) {
						istringstream iss(text);
						iss >> word1;
						cp[i] = word1;
						i++;
					}

					if (old == cp[1]) {
						of0.close();

						ofstream of1;
						if (of1.is_open()) {
							cout << "Enter Your new password:- ";
							cin >> password1;
							cout << "Enter Your Password Again:- ";
							cin >> password2;

							if (password1 == password2)
							{
								of1 << cp[0] << "\n";
								of1 << password1;
								cout << "Password changed successfully\n";
							}
							else {
								of1 << cp[0] << "\n";
								of1 << old;
								cout << "Password do not match\n";
							}
						}
					}
					else {
						cout << "Please enter valid password\n";
						break;
					}
				}
			}
			break;
		}
		case 4: {
			cout << "_________Thank you!_________";
			break;
		}
		default:
			cout << "Enter a valid choice!";
			break;
		}
	} while (a != 4);
	return 0;
}
