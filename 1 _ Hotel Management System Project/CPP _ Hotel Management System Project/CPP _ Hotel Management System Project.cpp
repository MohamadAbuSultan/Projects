
#include <iostream>
using namespace std;

int main()
{
	int quantity, choice;
	// quantity
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0; // quantity of food we have
	// sold
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0; // quantity of food we sold
	// total price
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0; // total price of each of the food items or rooms

	cout << "\n\t\t\t Quantity of items : ";
	cout << "\n\nRooms available: ";
	cin >> Qrooms;
	cout << "\nQuantity of pasta : ";
	cin >> Qpasta;
	cout << "\nQuantity of burger : ";
	cin >> Qburger;
	cout << "\nQuantity of noodles : ";
	cin >> Qnoodles;
	cout << "\nQuantity of shake : ";
	cin >> Qshake;
	cout << "\nQuantity of chicken-roll : ";
	cin >> Qchicken;
	
	p:
	cout << "\n\n\t\t\t Please select from the menu options ";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n3) burger";
	cout << "\n4) noodles";
	cout << "\n5) shake";
	cout << "\n6) chicken-roll";
	cout << "\n7) Information regarding sales and collection ";
	cout << "\n8) Exit";

	cout << "\n\nPlease Enter the choice! ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\n\nEnter the number of rooms you want: ";
		cin >> quantity;
		if (Qrooms - Srooms >= 1)
		{
			Srooms += quantity;
			Total_rooms += quantity;
			cout << "\n\n\t\t" << quantity << " room/rooms have been alloted to you!";
			break;
		}
		else
		{
			cout << "\n\tOnly" << Qrooms - Srooms << " Rooms remaining in the hotel ";
			break;
		}
	case 2:
		cout << "\n\nEnter the number of pasta you want: ";
		cin >> quantity;
		if (Qpasta - Spasta >= quantity)
		{
			Spasta += quantity;
			Total_pasta += quantity;
			cout << "\n\n\t\t" << quantity << " pasta is the order!";
			break;
		}
		else
		{
			cout << "\n\tOnly " << Qpasta - Spasta << " pasta remaining in the hotel ";
			break;
		}
	case 3:
		cout << "\n\nEnter the number of burger you want: ";
		cin >> quantity;
		if (Qburger - Sburger >= quantity)
		{
			Sburger += quantity;
			Total_burger += quantity;
			cout << "\n\n\t\t" << quantity << " burger is the order!";		
			break;
		}
		else
		{
			cout << "\n\tOnly " << Qburger - Sburger << " burger remaining in the hotel ";
			break;
		}
	case 4:
		cout << "\n\nEnter the number of noodles you want: ";
		cin >> quantity;
		if (Qnoodles - Snoodles >= quantity)
		{
			Snoodles += quantity;
			Total_noodles += quantity;
			cout << "\n\n\t\t" << quantity << " noodles is the order!";
			break;
		}
		else
		{
			cout << "\n\tOnly " << Qnoodles - Snoodles << " noodles remaining in the hotel ";
			break;
		}
	case 5:
		cout << "\n\nEnter the number of shake you want: ";
		cin >> quantity;
		if (Qshake - Sshake >= quantity)
		{
			Sshake += quantity;
			Total_shake += quantity;
			cout << "\n\n\t\t" << quantity << " shake is the order!";
			break;
		}
		else
		{
			cout << "\n\tOnly " << Qshake - Sshake << " shake remaining in the hotel ";
			break;
		}
	case 6:
		cout << "\n\nEnter the number of chicken-roll you want: ";
		cin >> quantity;
		if (Qchicken - Schicken >= quantity)
		{
			Schicken += quantity;
			Total_chicken += quantity;
			cout << "\n\n\t\t" << quantity << " chicken-roll is the order!";
			break;
		}
		else
		{
			cout << "\n\tOnly " << Qchicken - Schicken << " chicken-roll remaining in the hotel ";
			break;
		}
	case 7:
		cout << "\n\t\tDetails of sales and collection: ";
		cout << "\n\nNumber of rooms we had : " << Qrooms;
		cout << "\nNumber of rooms we give for rent : " << Srooms;
		cout << "\nRemaining rooms : " << Qrooms - Srooms;
		cout << "\nTotal rooms collection for the day : " << Total_rooms;

		cout << "\n\nNumber of pastas we had : " << Qpasta;
		cout << "\nNumber of pastas we sold : " << Spasta;
		cout << "\nRemaining pastas : " << Qpasta - Spasta;
		cout << "\nTotal pasta collection for the day : " << Total_pasta;

		cout << "\n\nNumber of burger we had : " << Qburger;
		cout << "\nNumber of burger we sold : " << Sburger;
		cout << "\nRemaining burger : " << Qburger - Sburger;
		cout << "\nTotal burger collection for the day : " << Total_burger;

		cout << "\n\nNumber of Noodles we had : " << Qnoodles;
		cout << "\nNumber of Noodles we sold : " << Snoodles;
		cout << "\nRemaining Noodles : " << Qnoodles - Snoodles;
		cout << "\nTotal Noodles collection for the Day : " << Total_noodles;

		cout << "\n\nNumber of shakes we had : " << Qshake;
		cout << "\nNumber of Shakes we sold : " << Sshake;
		cout << "\nRemaining Shakes : " << Qshake - Sshake;
		cout << "\nTotal Shakes collection for the Day : " << Total_shake;

		cout << "\n\nNumber of Chicken-roll we had : " << Qchicken;
		cout << "\nNumber of Chicken-roll we sold : " << Schicken;
		cout << "\nRemaining Chicken-roll : " << Qchicken - Schicken;
		cout << "\nTotal Chicken-roll collection for the Day : " << Total_chicken;

		cout << "\n\n\nTotal Collection for the day : " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
		break;
	case 8:
		exit(0);
	default:
		cout << "\nPlease select from the numbers mentioned above!";
	}

	goto p;
}
