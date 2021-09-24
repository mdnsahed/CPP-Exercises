#include <iostream>
#include <string>

using namespace std;

string ceaserCipher(string s, int k);


int main()
{

	cout << ceaserCipher("Hello!", 3) << endl;
	cout << ceaserCipher(ceaserCipher("Test", 3), -3) << endl;

	return 0;
}

string ceaserCipher(string s, int k)
{
	
	if (k < 0)
	{
		k = 26 + (k % 26);
	}
	
	for (int count = 0; count < s.length(); count++)
	{
		if (isalpha(s[count]))
		{
			for (int i = 0; i < k; i++)
			{
				if (s[count] == 'z'	)							
				{
					s[count] = 'a';
				}
				else if (s[count] == 'Z')
				{
					s[count] = 'A';
				}
				else
				{
					s[count]++;
				}
			}
		}	
	}
	
	return s;
}
