#pragma once
#include <iostream>
#include <stack>;
#include <list>;
#include <string>;
using namespace std;
namespace Atelier
{
	class Palindrome
	{
	private:
		//Attributs
		stack<char> phrase;

		//Methods
	public:
		Palindrome()
		{
			char car;
			string s="";
			bool B = false;
			cout << "donner une phrase : \n";
			while ((car = getchar()) != '\n')
			{
				if (car != ' ')
				{
					s = s + car;
					this->phrase.push(car);
				}
			}
			for (auto i:s)
			{
				if (i == this->phrase.top())
				{
					this->phrase.pop();
					B = true;
				}
				else
				{
					B = false;
					cout << "la phrase n'est pas un palindrome \n";
					exit(-1);
				}
			}
			if (B == true)
			{
				cout << "la phrase est un palindrome \n";
			}
		}
	};
}


