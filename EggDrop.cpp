#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--) {
	    int n, k;
	cin >> k >> n;
	
	vector<int> temp(k+1, 0);
	vector<vector<int>> ed(n+1, temp);
	
	for(int i=1;i<=k;i++) {
	    ed[1][i] = 1;
	}
	
	for(int i=1;i<=n;i++) {
	    ed[i][1] = i;
	}
	
	// rows are floors
	// cols are eggs
	
	for(int i=2;i<=n;i++) {
	    for(int j=2;j<=k;j++) {
	        //solving for i floors and j eggs
	        // now we consider j eggs and try to throw them from each floor
	        int res = INT_MAX;
	        for(int k=1;k<=i;k++) {
	            // now we have j eggs and trying to throw it from kth floor
	            res = min(res, 1 + max(ed[k-1][j-1], ed[i-k][j]));
	        }
	        ed[i][j] = res;
	    }
	}
	
	cout << ed[n][k] << endl;
	
	}
	
	return 0;
}
