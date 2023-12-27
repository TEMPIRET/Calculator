#include <iostream>
#include <sstream>
using namespace std;

int main();

void func( int digit )
{
	digit += (digit-1);
	stringstream ourstream[digit];
	int int_number[digit]; char oper[digit];
	string string_number[digit];
	
	for ( int i=0; i<digit; i++ )
	{
		cin >> string_number[i];
	}
	
	for ( int i=0; i<digit; i++ )
	{
		if ( i%2 == 0 )
		{
			ourstream[i] << string_number[i];
			ourstream[i] >> int_number[i];
		}
		else 
		{
			ourstream[i] << string_number[i];
			ourstream[i] >> oper[i];
		}
	}
	int result = int_number[0];	
	for ( int i=0; i<digit; i++ )
	{
		if ( i%2 != 0 )
		{
			switch ( oper[i] )
			{
			case '+': result += int_number[i+1]; break;
			case '-': result -= int_number[i+1]; break;
			case '*': result *= int_number[i+1]; break;
			default: cout << "\nWrong input, try again"; continue;
			}
		}
	}
	cout << "\nThe result is " << result;
}

int main()
{
	int digits;
	cout << "\nEnter the number of digits u want to operate on: ";
	cin >> digits;
	func(digits);
	return 0;
}