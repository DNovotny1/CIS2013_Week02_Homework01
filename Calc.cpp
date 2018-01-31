#include<iostream>
using namespace std;
//simple calculator for c++

int main()
{
	//if true program will continue 
	bool contin = true;
	// holds operator and tag for continue
	char sign, quit = 'y';
	//holds numbers for calculation
	int num1, num2;
	while (contin)
	{
		//takes and stores input
		cout << "Please enter your first number. ";
		cin >> num1;
		cout << "Please enter your operator. ";
		cin >> sign;
		cout << "Please enter your second number. ";
		cin >> num2;
		
		//uses sign to select and process output
		if(sign == '+')
		{
			cout << num1 + num2 << "\n";
		}
		if (sign == '-')
		{
			cout << num1 - num2 << "\n";
		}
		if (sign == '*')
		{
			cout << num1 * num2 << "\n";
		}
		if (sign == '/')
		{
			if(num2 == 0)
			{
				cout << "No dividing by 0 \n";
			}
			else
			{
			cout << num1 / num2 << "." << num1 % num2 << "\n";
			}
		}
		else
		{
			//cout << "Use operators + - * or / ";
		}
		
		cout << " Please type 'y' to restart. ";
		
		//gets input to restart or not
		cin >> quit;
		if((quit == 'y') || (quit == 'Y')) 
		{
			contin = true;
		}
		else
		{
			contin = false;
		}
	}
	
	
	
	return 0;
}