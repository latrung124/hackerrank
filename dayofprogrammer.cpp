//#include <bits/stdc++.h>
//
//using namespace std;
//
//int y;
//bool checkyear(int _y) {
//	if (_y <= 1917) {
//		return !(bool)(_y % 4);
//	}
//	if (_y % 400 == 0) return true;
//	if (_y % 4 == 0 && _y % 100 != 0) {
//		return true;
//	}
//	return false;
//}
//
//void solve() {
//	cin >> y;
//	string s1 = "13.09.";
//	string s2 = "12.09.";
//	string s3 = to_string(y);
//	if (y == 1918) {
//		cout << "26.09.1918" << endl;
//		return;
//	}
//	if (checkyear(y)) {
//		cout << s2 + s3 << endl;
//	}
//	else {
//		cout << s1 + s3 << endl;
//	}
//}
//
//int main() {
//	solve();
//	return 0;
//}