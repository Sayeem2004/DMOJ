#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<int> V(n);
    for (int &x : V) cin >> x;
    int gcd = abs(V[0]);
    for (int i = 1; i < n; i++)
        gcd = __gcd(gcd, abs(V[i]));
    cout << gcd << "\n";
}
