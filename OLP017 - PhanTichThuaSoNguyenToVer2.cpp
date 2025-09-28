#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mulmod(ll a, ll b, ll mod) {
    ll res = 0;
    a %= mod;
    while (b) {
        if (b & 1) res = (res + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return res;
}

ll powmod(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = mulmod(res, a, mod);
        a = mulmod(a, a, mod);
        b >>= 1;
    }
    return res;
}

bool isPrime(ll n) {
    if (n < 2) return false;
    ll d = n - 1;
    int s = 0;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }
    ll bases[] = {2,3,5,7,11,13,17,19,23,29,31,37};
    for (ll a : bases) {
        if (a >= n) break;
        ll x = powmod(a, d, n);
        if (x == 1 || x == n-1) continue;
        bool ok = false;
        for (int r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n-1) {
                ok = true;
                break;
            }
        }
        if (!ok) return false;
    }
    return true;
}

ll pollard_rho(ll n) {
    if (n % 2 == 0) return 2;
    ll x = rand() % (n-2) + 2;
    ll y = x;
    ll c = rand() % (n-1) + 1;
    ll d = 1;
    while (d == 1) {
        x = (mulmod(x,x,n)+c)%n;
        y = (mulmod(y,y,n)+c)%n;
        y = (mulmod(y,y,n)+c)%n;
        d = __gcd(abs(x-y), n);
        if (d == n) return pollard_rho(n);
    }
    return d;
}

void factor(ll n, vector<ll> &v) {
    if (n == 1) return;
    if (isPrime(n)) {
        v.push_back(n);
        return;
    }
    ll d = pollard_rho(n);
    factor(d, v);
    factor(n/d, v);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    srand(time(0));

    int T;
    cin >> T;
    while (T--) {
        ll N;
        cin >> N;
        vector<ll> v;
        for (ll i = 2; i*i <= 1e6 && i*i <= N; i++) {
            while (N % i == 0) {
                v.push_back(i);
                N /= i;
            }
        }
        if (N > 1) factor(N, v);
        sort(v.begin(), v.end());
        for (size_t i = 0; i < v.size();) {
            ll p = v[i];
            int cnt = 0;
            while (i < v.size() && v[i] == p) {
                cnt++;
                i++;
            }
            cout << p << " " << cnt << "\n";
        }
        cout << "\n";
    }
}

