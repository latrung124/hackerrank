//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//	int n, m;
//	cin >> n >> m;
//	vector<long> arr(n + 1, 0);
//	long mV = 0;
//	for (int i = 1; i <= m; ++i) {
//		int a, b, k;
//		cin >> a >> b >> k;
//		for (a; a <= b; ++a) {
//			arr[a] += k;
//			mV = max(arr[a], mV);
//		}
//	}
//	cout << mV << endl;
//}
//
//int main() {
//	solve();
//	return 0;
//}