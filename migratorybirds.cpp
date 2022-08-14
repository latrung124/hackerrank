//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n;
//int arr[10001];
//map<int, int> m;
//int maxV = INT_MIN;
//int result;
//void solve() {
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//		int tmp;
//		cin >> tmp;
//		m[tmp]++;
//	}
//	for (auto& i : m) {
//		if (i.second > maxV) {
//			maxV = i.second;
//			result = i.first;
//		}
//	}
//	cout << result;
//}
//
//int main() {
//	solve();
//	return 0;
//}