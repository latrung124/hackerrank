//#include <bits/stdc++.h>
//
//using namespace std;

//int n;
//int maxSum;
//int k;
//int maxV = INT_MIN;

//int maxElement(int n, int maxSum, int k) {
//	vector<int> arr(n, 0);
//	int sum = 0;
//	int i = 0;
//	int d = maxSum;
//	while (d--) {
//		if (i == n) i = 0;
//		++arr[i];
//		maxV = max(arr[i], maxV);
//		++i;
//	}
//	//for (int j = 0; j <= n; ++j) {
//	//	cout << arr[j] << " ";
//	//}
//	//cout << endl;
//	return maxV;
//}

//int maxElement(int n, int maxSum, int k) {
//	int g = maxSum / n;
//	int t = maxSum % n;
//	if (t > 1) return g + 1;
//	return t + g;
//}
//
//
//
//int main() {
//	cin >> n >> maxSum >> k;
//	cout << maxElement(n, maxSum, k) << endl;
//}