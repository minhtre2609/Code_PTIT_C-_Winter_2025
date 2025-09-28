#include <bits/stdc++.h>

using namespace std;

string reversee (string s)
{
    string res = "";
    for(long long i = s.size()-1;i>=0;i--)
    {
        res.push_back(s[i]);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,s;
    cin >> n >> s;
    if(s == 0 && n > 1) cout << "-1 -1";
    else if(s > 9*n) cout << "-1 -1";
    else if(s == 0 && n == 1) cout << "0 0";
    else
    {
        string lonnhat = "";
        string benhat = "";
        long long t1 = s;
        long long tt = 9;
        while(lonnhat.size() < n)
        {
            long long k = min(t1,tt);
            lonnhat.append(to_string(k));
            t1 -= k;
        }
        t1 = s;
        long long dedanh = 1;
        t1 -= dedanh;
        while(benhat.size() < n-1)
        {
            
            long long k = min(t1,tt);
            benhat.append(to_string(k));
            t1 = t1 - min(t1,tt);
        }
        t1 += dedanh;
        benhat = reversee(benhat);
        benhat.insert(0,to_string(t1));
        cout << benhat << " " << lonnhat;
    }
    return 0;
}
