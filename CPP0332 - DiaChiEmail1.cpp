#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    getline(cin, s);
    for (char &c : s)
    {
    	c = tolower(c);
	}
	
	stringstream ss(s);
	vector<string> words;
	string w;
	while (ss >> w)
	{
		words.push_back(w);
	}
	string email = words.back();
	for (int i = 0; i < (int)words.size() - 1; i++)
	{
		email += words[i][0];
	}
	email += "@ptit.edu.vn";
	cout << email;
	return 0;
}
