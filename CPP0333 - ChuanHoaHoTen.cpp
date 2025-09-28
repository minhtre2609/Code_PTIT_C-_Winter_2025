#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<string> w;
    string x;
    while (ss >> x) w.push_back(x);

    string name = w.back();
    w.pop_back();

    for (int i = 0; i < (int)w.size(); i++) 
	{
        transform(w[i].begin(), w[i].end(), w[i].begin(), ::tolower);
        w[i][0] = toupper(w[i][0]);
    }

    for (int i = 0; i < (int)w.size(); i++) 
	{
        if (i) cout << " ";
        cout << w[i];
    }

    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << ", " << name;
}
