#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<char> ans101 = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    vector<char> ans102 = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

    int t;
    cin >> t;
    while (t--) {
        int code;
        cin >> code;
        vector<char> stu(15);
        for (int i = 0; i < 15; i++) 
		{
            cin >> stu[i];
        }

        int correct = 0;
        if (code == 101) 
		{
            for (int i = 0; i < 15; i++) 
			{
                if (stu[i] == ans101[i]) 
                {
                	correct++;
				}
            }
        } 
		else if (code == 102) 
		{
            for (int i = 0; i < 15; i++) 
			{
                if (stu[i] == ans102[i]) 
                {
                	correct++;
				}
            }
        }

        double score = correct * 10.0 / 15;
        cout << fixed << setprecision(2) << score << "\n";
    }

    return 0;
}

