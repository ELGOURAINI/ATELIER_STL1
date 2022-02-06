#pragma once
#include <iostream>
#include <deque>;
#include <list>;
#include <string>;
using namespace std;
namespace Atelier
{
	class Deque_To_List
	{
		//attributs
	private:
		deque<string> D;
	    list<string> L;
		//les methodes
	public :
		Deque_To_List()
		{
			string val;
			cout << "donner des valeurs arbitraires\n";
			for (int i = 0; i < 5; i++)
			{
				cout <<"donner une valeur \n";
				cin >> val;
				this->D.push_back(val);
			}
			for (auto j : this->D)
			{
				this->L.push_back(j);
			}
		}
		void print()
		{
			cout << "\Nle deque :\n ";
			for (int i = 0; i < 5; i++)
			{
				cout << this->D[i] << "\t";
			}

			cout << "\nla liste avant tri\n ";
			for (auto j : this->L)
			{
				cout <<j <<"\t";
			}
			this->L.sort();
			cout << "\nla liste apres tri\n ";
			for (auto j : this->L)
			{
				cout << j << "\t";
			}
		}

	};
}


