//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n;
//int arr[101];
//int d;
//int m;
//int cnt = 0;
//int sum = 0;
//void input() {
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		cin >> arr[i];
//	}
//	cin >> d >> m;
//}
//void solve() {
//	for (int i = 1; i <= n; ++i) {
//		sum += arr[i];
//		if (i > m) {
//			sum = sum - arr[i - m];
//		}
//		if (sum == d && i >= m) {
//			++cnt;
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