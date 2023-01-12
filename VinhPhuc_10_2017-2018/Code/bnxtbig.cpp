#include <bits/stdc++.h>

using namespace std;

#define taskname "bnxtbig"

int main() {
    if (fopen (taskname".inp", "r")) {
        freopen (taskname".inp", "r", stdin);
        freopen (taskname".out", "w", stdout);
    }

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    	int n;	cin >> n;
    	int a[n+5];
    	for (int i = 1; i <= n; ++i) cin >> a[i];
    	
    	stack<int> st;
    	vector<int> res;
    	for (int i = n; i >= 1; --i) {
    		while (!st.empty() && a[st.top()] <= a[i]) st.pop();
    		
    		int ans = 0;
    		if (!st.empty()) ans = st.top();
    		res.push_back(ans);
    		st.push(i);
    	}
    	
    	int l = res.size();
    	for (int i = 0; i < l; ++i) {
    		cout << res[l - i - 1] << " ";
    	}
    return 0;
}
