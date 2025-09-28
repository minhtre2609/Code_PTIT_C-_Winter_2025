#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string line;
        getline(cin, line); 

        stringstream ss(line);
        vector<string> words;
        string w;
        while (ss >> w) 
		{
            words.push_back(w);
        }

        reverse(words.begin(), words.end());

        for (int i = 0; i < (int)words.size(); i++) 
		{
            if (i > 0) cout << " ";
            cout << words[i];
        }
        cout << endl;
    }
}

