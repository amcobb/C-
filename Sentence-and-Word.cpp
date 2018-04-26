#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
	char phrase [50];
	char word [15];
	bool found = false;
	
	cout << "Enter a sentence: \n";
	gets ( phrase );
		
	cout << "Enter a word\n";
	gets ( word );
	

	int w, s;
	int lenPhrase = strlen( phrase );
	int lenWord = strlen( word ); 
	for ( s = 0; s < strlen( phrase ) - lenWord + 1; s++)
	{
		if ( word [0] == phrase [s])
		{
			for ( w = 0; w < lenWord; w++ )
			{
				if ( phrase [w + s] ! = word [w] )
				{
					break;
				}
				if ( w == lenWord - 1 )
				{
					found = true;
				}
			}
		}
	}

	system ("PAUSE");
	return 0;
}