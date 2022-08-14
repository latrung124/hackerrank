//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//	int n;
//	cin >> n;
//	long result = 0;
//	vector<int> arr;
//	vector<int> scoreArr;
//	for (int i = 0; i < n; ++i) {
//		int tmp;
//		cin >> tmp;
//		arr.push_back(tmp);
//		scoreArr.push_back(1);
//	}
//	for (int i = 1; i < n; ++i) {
//		if (arr[i] > arr[i - 1] && scoreArr[i] <= scoreArr[i - 1]) {
//			scoreArr[i] = scoreArr[i - 1] + 1;
//		}
//	}
//	for (int i = n - 2; i >= 0; --i) {
//		if (arr[i] > arr[i + 1] && scoreArr[i] <= scoreArr[i + 1]) {
//			scoreArr[i] = scoreArr[i + 1] + 1;
//		}
//	}
//	//for (auto& i : scoreArr) {
//	//	cout << i << " ";
//	//	result += i;
//	//}
//	//cout << endl;
//	cout << result << endl;
//}
//
//int main() {
//	solve();
//	return 0;
//}