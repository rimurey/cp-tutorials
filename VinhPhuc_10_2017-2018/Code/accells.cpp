#include <bits/stdc++.h>

using namespace std;

#define taskname "accells"

int main() {
    if (fopen (taskname".inp", "r")) {
        freopen (taskname".inp", "r", stdin);
        freopen (taskname".out", "w", stdout);
    }

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    	int n, m;	cin >> n >> m;
    	cout << (n + m) - __gcd(n, m);
    return 0;
}
