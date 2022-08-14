//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n;
//int k;
//int arr[101];
//int cnt = 0;
//void input() {
//	cin >> n;
//	cin >> k;
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//	}
//}
//void solve() {
//	for (int i = 0; i < n; ++i) {
//		for (int j = i+1; j < n; ++j) {
//			if ((arr[i] + arr[j]) % k == 0) {
//				++cnt;
//			}
//		}
//	}
//	cout << cnt << endl;
//}
//
//int main() {
//	input();
//	solve();
//	return 0;
//}