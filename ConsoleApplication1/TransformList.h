#pragma once
#include <iostream>
#include <list>;
#include <queue>;
#include <string>;
#include <algorithm>;
using namespace std;
namespace Atelier
{
	class TransformList
	{
	private:
		list<string> lst;

	public:
		TransformList()
		{
			this->lst.push_back("ouma");
			this->lst.push_back("fati");
			this->lst.push_back("bilal");
			this->lst.push_back("souad");
			this->lst.push_back("hamid");
		}
		void tranform_1()
		{
			transform(lst.begin(), lst.end(), lst.begin(), [](string s) {for (unsigned int i = 0; i < s.size(); i++) { if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'y')s[i] = '*'; }return s; });
			this->print();
		}
		void tranform_2()
		{
			transform(lst.begin(), lst.end(), lst.begin(), [](string s) {transform(s.begin(), s.end(), s.begin(), toupper); return s; });
			this->print();
		}
		void print()
		{
			cout << "\nLa Liste  :\n";
			for (auto i : lst)
			{
				cout << i << "\t";
			}
		}
	};
}
