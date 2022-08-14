//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//	int n;
//	cin >> n;
//	int v[100001];
//	map<int, int> tmpV;
//	for (int i = 1; i <= n; ++i) {
//		cin >> v[i];
//		if (v[i] != i) {
//			//dua vi tri bi thay doi vao trong 1 map voi key la gia tri bi thay doi va value la index
//			tmpV[v[i]] = i;
//		}
//	}
//	int cnt = 0;
//	for (int i = 1; i <= n; ++i) {
//		int j = i + 1;
//		if (v[i] != i) {
//			//cout << v[tmpV[i]] << " " << tmpV[i] << endl;
//			tmpV[v[i]] = tmpV[i];
//			swap(v[i], v[tmpV[i]]);
//			++cnt;
//		}
//	}
//	//for (int i = 1; i <= n; ++i) {
//	//	cout << v[i] << " ";
//	//}
//	cout << cnt << endl;
//}
//
//int main() {
//	solve();
//	return 0;
//}