//#include <bits/stdc++.h>
//
//using namespace std;
//
//int number;
//bool isVisited[100000];
//long dfs(int v, bool isVisited[], map<long, vector<int>> arr) {
//    stack<int> s;
//    s.push(v);
//    isVisited[v] = true;
//    int result = 0;
//    while (!s.empty()) {
//        int tmp = s.top();
//        ++result;
//        s.pop();
//        for (int i = arr[tmp].size() - 1; i >= 0; --i) {
//            if (!isVisited[arr[tmp][i]]) {
//                isVisited[arr[tmp][i]] = true;
//                s.push(arr[tmp][i]);
//            }
//        }
//    }
//    return result;
//}
//
//void rolve() {
//	cin >> number;
//	while (number--) {
//		int n, m, clib, croad;
//		cin >> n >> m >> clib >> croad;
//		if (clib < croad) {
//			cout << (long)clib * n << endl;
//		}
//		else {
//			long result = 0;
//			map<long, vector<int>> arr;
//			memset(isVisited, false, sizeof(isVisited));
//			for (int i = 0; i < m; ++i) {
//				int tmp1, tmp2;
//				cin >> tmp1 >> tmp2;
//				arr[tmp1].push_back(tmp2);
//				arr[tmp2].push_back(tmp1);
//			}
//			for (int i = 1; i <= n; ++i) {
//				if (!isVisited[i]) {
//					long nroad = dfs(i, isVisited, arr) - 1;
//					result += (nroad * croad) + clib;
//				}
//			}
//			cout << result << endl;
//		}
//	}
//}
//
//
//int main() {
//    rolve();
//    return 0;
//}
