#pragma once
#include <iostream>
#include <stack>;
#include <queue>;
#include <string>;
using namespace std;
namespace Atelier
{
	class sort_words_pri_queue
	{
	private :
		priority_queue<string> P;
	public :
		sort_words_pri_queue()
		{
			string val;
			cout << "donner des mots arbitraires\n";
			for (int i = 0; i < 5; i++)
			{
				cout << "donner un mot \n";
				cin >> val;
				this->P.push(val);
			}
		}
		void print()
		{
			cout << "\n THE QUEUE :\n ";
			while (!this->P.empty())
			{
				cout << this->P.top() <<"\t";
				this->P.pop();
			}
		}
	};

}