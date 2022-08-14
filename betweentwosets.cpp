//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n, m;
//int a[100];
//int b[100];
//int maxA;
//int minB;
//int bcnnA;
//void input() {
//    cin >> n >> m;
//    maxA = 1;
//    minB = INT_MAX;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//        maxA = max(a[i], maxA);
//    }
//    bcnnA = maxA;
//    for (int l = maxA; l <= 100; l += maxA) {
//        bool isOk = true;
//        for (int k = 0; k < n; ++k) {
//            if (l % a[k] != 0) {
//                isOk = false;
//                break;
//            }
//        }
//        if (isOk) {
//            bcnnA = l;
//            break;
//        }
//    }
//    for (int j = 0; j < m; ++j) {
//        cin >> b[j];
//        minB = min(b[j], minB);
//    }
//}
//
//int solve() {
//    int count = 0;
//    int tmp = bcnnA;
//    int d = 1;
//    while (tmp <= minB) {
//        bool isOk = true;
//        for (int j = 0; j < m; ++j) {
//            if (b[j] % tmp != 0) {
//                isOk = false;
//                break;
//            }
//        }
//        if (isOk) ++count;
//        ++d;
//        tmp = d * bcnnA;
//    }
//    return count;
//}
//
//int main() {
//    input();
//    cout << solve() << endl;
//    return 0;
//}