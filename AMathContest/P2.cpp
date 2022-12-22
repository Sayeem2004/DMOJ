#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000007;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n; cin >> n;
    long long mult = 1;
    for (int i = 0; i < n-1; i++) {
        mult *= 2; mult %= MOD;
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long a; cin >> a;
        ans += (a * mult) % MOD; ans %= MOD;
    }
    cout << ans << "\n";
}
