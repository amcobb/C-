#include <iostream>
using namespace std;

char name [30];
int count = 0;
int i;
int j;
char temp;
char c;

int main ()
{
	cout << "Enter your name, one character at a time, ends by @ \n" ;
	for ( i = 0; i < 30; i++ )
	{
		cin >> name [i]; 
		if ( name [i] == '@' )
		{
			break;
		}
		count++ ;
	}
	cout << "Hello "; 
	for ( i = 0; i < count ; i++ )
	{
		for ( j = count - 1; j > 0; j-- )
		{
			if ( name [j] > name [j - 1] )
			{
				temp = name [j - 1];
				name [j - 1] = name [j];
				name [j] = temp;
			}
		}
		cout << name [i];
	}
	cout << "\n";
	for ( i = 0; i < count ; i++ )
	{
		cout << "*" ;
			if ( name [i] != name [i+1] )
			{
				cout << "\t" << name [i] << "\n";
			}
	}
	name [count] = '\0';
	cout << name << "\n";
	cout << "Give me a letter \n";
		cin >> c;
	for ( i = 0; i < count ; i++ )
	{
		if ( name [i] == c )
		{
			cout << c << " is in name\n";
			break;
		}
	}
	if ( i == count )
	{
		cout << c << " is not in the name\n";
	}
	return 0;
}