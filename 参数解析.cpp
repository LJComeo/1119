#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main1()
{
	int count = 0;
	string s;
	string p;
	vector<string> vs;
	getline(cin, s);
	int n = s.size();
	s += " ";
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '"')
		{
			int j;
			for (j = i + 1; s[j] != '"'; j++)
			{
				p.push_back(s[j]);
			}
			i = j;
			vs.push_back(p);
			p.clear();
			count++;
			
		}
		else if (s[i] == ' ')
		{
			int j;
			for (j = i + 1; s[j] != ' '; j++)
			{
				p.push_back(s[j]);
			}
			i = j;
			vs.push_back(p);
			p.clear();
			count++;
		}
		else
		{
			int j;
			for (j = i; s[j] != ' '; j++)
			{
				p.push_back(s[j]);
			}
			i = j;
			vs.push_back(p);
			p.clear();
			count++;
		}
	}
	cout << count << endl;
	for (int i = 0; i < count; i++)
	{
		cout << vs[i] << endl;
	}
	return 0;
}