#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	system("pause");
	string show[30],stu[3],food[11] = { "0","TEA","SMALL PIZZA","PATTIES","PASTARY","SAMOSA","GREEN SALAD","SANDWICH","BURGER","FRIES","COFFEE" };
	char  x = '0';
	int price[11] = { 0,30,40,40,40,10,30,70,100,100,50 };
	int expenses = 0,q=0, b[10], i = 0, a = 0, item = 0, s = 0, students = 0, employ = 0, emp = 0, menu = 0, pri = 0, c = 1;
d:	system("cls");
	cout << "Enter your ID to login\n";
	cin >> employ;
	switch (employ) {
	case 431: {
		cout << "Welcome " << employ << endl;
		break;
	}
	case 532:
	{
		cout << "Welcome " << employ << endl;
		break;
	}
	default:
	{
		while (employ != 431 && employ != 532) {
			cout << "Wrong ID.Enter again\n";
			cin >> employ;
		}
		cout << "Welcome " << employ << endl;
	}
	}
	cout << "You are login succeesfuly\n";
	system("pause");

a:    system("cls");
	cout << "0. Employ check\n";
	cout << "1. student/Customer Service\n";
	cout << "2. Exit\n";
	cout << "Enter choice\n";
	cin >> menu;
	system("cls");
	switch (menu) {
	case 0:
	{

	b:		system("cls");
		cout << "0. Check account balance\n";
		cout << "1. Check item You sell\n";
		cout << "2. Logout\n";
		cout << "3. Switch to other employ\n";
		cout << "4. back\n";
		cin >> emp;
		system("cls");
		if (emp == 0)
		{
			cout << "Your account balance is " << expenses << endl;
			cout << "0. Back\n";
			cout << "Enter\n";
			cin >> a;
			goto b;
		}
		else if (emp == 1)
		{
			for (int i = 0;i < s;i++)
			{
				cout << "You have sell " << show[i] << endl;
			}
			if (expenses == 0)
			{
				cout << "You sell nothing\n";
			}
			cout << "0. Back\n";
			cin >> a;
				goto b;
		}
		else if (emp == 2)
		{
			cout << "You are logout succeesfully\n";
			break;
		}
		else if (emp == 3)
		{
			cout << "The number of transactions is " << s << endl;
			cout << "The number of students you treat " << c << endl;
			cout << "Account balance is " << expenses << endl;
			cout << "You switch to other Employ\n";
			s = 0; expenses = 0;c = 1;
			system("pause");
			goto d;
		}
		else if (emp == 4)
		{
			goto a;
		}
		break;
	}
	case 1: {
	f:  cout << "Here is the Student " << c << endl;
		pri = 0;q = 0;
		system("pause");
	c:  system("cls");
		cout << "0. Display menu and buy Item\n";
		cout << "1. Show buy Items\n";
		cout << "2. Replace item you buyed\n";
		cout << "3. Your bill\n";
		cout << "4. Next Student/Customer\n";
		cout << "5. Main Menu\n";
		cin >> item;
		system("cls");
		if (item == 0)
		{
			cout << "You can buy only two items\n";
			
			for (int l = q;l < 2;l++)
			{
			e:  cout << "      Here is the menu\n";
				cout << "-----------------------------------\n";
				cout << "ITEM NO.   " << "NAME  " << "        PRICE" << endl;
				cout << "-----------------------------------\n";
				for (int i = 1; i <= 10; i++)
				{
					cout << left << setw(11) << i << setw(15) << food[i] << setw(8) << price[i] << endl;
				}
				cout << "-----------------------------------\n\n";
				do {
					cout << "Enter the item you want to buy\n";
					cin >> students;
				} while (students > 10 || students <= 0);
				pri += students[price];
				expenses += price[students];

				for (int i = s; i <= s; i++)
				{
					show[i] = food[students];
					b[i] = price[students];
				}
				for(int i=q;i<2;i++)
				{
					stu[i]=food[students];
				}
				s++;q++; 
				system("cls");
				cout << "    --->THANK YOU<---\n";
				cout << "      --->(^_^)<---\n\n";
				cout << "Item ordered successfully...\n";
				if (l == 1)
				{
					continue;
				}
				cout << "Want to buy another item\nIf Yes Press y\n";
				cin >> x;
				if (x == 'y' || x == 'Y')
					cout << "OK\n";
				else
					break;
			}
			cout << "0. Back\n";
		    cin >> a;		
			if (a == 0)
				goto c;
		}
		else if (item == 1)
		{
			for (i = 0; i < q; i++)
			{
				if (pri > 0)
					cout << "You have buy " << stu[i] << endl;
			}
			if (pri == 0)
				cout << "You Buy nothing\n";
			cout << "0. Back\n";
			cin >> a;
			if (a == 0)
				goto c;
		}
		else if (item == 2)
		{
			if (pri == 0)
			{
				cout << "You have nothing to replace.\n";
				cout << "First buy something and then came here.\n";
			}
			else {
				for (int i = 0; i < q; i++)
				{
					cout << i << ". You have buyed " << stu[i] << endl;
				}
				cout << "Which Item you want to replace \n";
				do {
					cin >> a;
				} while (a >= s);
				cout << "Enter the item want to buy\n";
				cout << "-----------------------------------\n";
				cout << "ITEM NO.   " << "NAME  " << "        PRICE" << endl;
				cout << "-----------------------------------\n";
				for (int i = 1; i <= 10; i++)
				{
					cout << left << setw(11) << i << setw(15) << food[i] << setw(8) << price[i] << endl;
				}
				cout << "-----------------------------------\n\n";
				cout << "What you want to buy then\n";
				do {
					cout << "Enter the item want to buy\n";
					cin >> students;
				} while (students > 10 || students <= 0);
				for (int i = 0; i < q; i++)
				{
					if (a == i)
					{
						stu[i] = food[students];
						cout << "You replace your recent item with " << stu[i] << endl;
						show[i]=stu[i];
						expenses += price[students] - b[i];
						pri += price[students] - b[i];
					}
				}
			}
			cout << "0. Back\n";
			cin >> a;
			if (a == 0)
				goto c;
		}
		else if (item == 3)
		{
			cout << "Your Bill is " << pri << endl;
			cout << "0. Back\n";
			cin >> a;
			if (a == 0)
				goto c;
		}
		else if (item == 4)
		{
			c++;
			goto f;
		}
		else if (item == 5)
		{
			goto a;
		}
		else
		{
			cout << "Invalid Input\n";
			cout << "0. Go Back\n";
			cin >> a;
			if (a == 0)
				goto c;
		}
		break;
	}
	case 2:
	{
		break;
	}
	default:
	{
		cout << "Invalid Input\n";
		cout << "0. Go back\n";
		cin >> a;
		if (a == 0)
			goto a;
	}
	}
	return 0;
}
