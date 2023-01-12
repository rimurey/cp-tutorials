#include <bits/stdc++.h>

using namespace std;

#define taskname "carshow"

int main() {
    if (fopen (taskname".inp", "r")) {
        freopen (taskname".inp", "r", stdin);
        freopen (taskname".out", "w", stdout);
    }

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    	int n;	cin >> n;
    	vector<pair<int, int> > f;
    	
    	for (int i = 0; i < n; ++i) {
    		int x, v;	cin >> x >> v;
    		f.push_back(make_pair(x, v));
    	}
    	sort(f.begin(), f.end());
    	
    	int d = 0;
    	int t[n+5];
    	t[n] = INT_MAX;
    	for (int i = (n-1); i >= 0; --i) {
    		d += f[i].second <= t[i+1];
    		t[i] = min(f[i].second, t[i+1]);
    	}
    	cout << d;
    return 0;
}
