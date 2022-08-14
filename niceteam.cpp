//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<int> skillLevel;
//int minDiff;
//
//int binarySerach(int f, vector<int> s, int start) {
//	int r = start;
//	int l = s.size() - 1;
//	int m = (r + l) / 2;
//
//	while (r != l) {
//		cout << l << " " << r << " " << s[m] << endl;
//		if (f < s[m]) {
//			l = m - 1;
//			m = (r + l) / 2;
//		}
//		else if (f > s[m]) {
//			r = m + 1;
//			m = (r + l) / 2;
//		}
//		else {
//			if (m > 0 && s[m - 1] == f) {
//				r = m - 1;
//				l = m;
//				m = (r + l) / 2;
//				continue;
//			}
//			return m;
//		}
//	}
//	return -1;
//}
//
//int maxPairs(vector<int> skillLevel, int minDiff) {
//	int result = 0;
//	sort(skillLevel.begin(), skillLevel.end());
//	vector<bool> isVisitedV;
//	for (int i = 0; i < skillLevel.size(); ++i) {
//		isVisitedV.push_back(false);
//	}
//	for (int i = 0; i < skillLevel.size(); ++i) {
//		if (!isVisitedV[i]) {
//			int tmp = skillLevel[i] + minDiff;
//			cout << tmp << endl;
//			if (tmp <= skillLevel[skillLevel.size() - 1]) {
//				int b = binarySerach(tmp, skillLevel, ++i);
//				cout << b << endl;
//				if (b != -1) {
//					++result;
//					isVisitedV[b] = true;
//					isVisitedV[i] = true;
//				}
//			}
//			else {
//				return result;
//			}
//			//else {
//			//	int j = ++i;
//			//	for (j; j < skillLevel.size(); ++j) {
//			//		if (!isVisitedV[j]) {
//			//			++result;
//			//			isVisitedV[j] = true;
//			//			isVisitedV[i] = true;
//			//		}
//			//	}
//			//}
//		}
//	}
//	return result;
//}
//
//int main() {
//	skillLevel = {1, 1, 2,2,3, 4,4,4,5, 5,5,5,6,7 };
//	minDiff = 5;
//	cout << binarySerach(minDiff, skillLevel, 0) << endl;
//	//cout << maxPairs(skillLevel, minDiff) << endl;
//	return 0;
//}