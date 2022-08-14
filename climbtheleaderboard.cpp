#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> scoreList;
	while (n--) {
		int tmp;
		cin >> tmp;
		if (scoreList.empty()) {
			scoreList.push_back(tmp);
		}
		else {
			if (scoreList[scoreList.size() - 1] != tmp) {
				scoreList.push_back(tmp);
			}
		}
	}
	//for (auto& it : scoreList) {
	//	cout << it << " ";
	//}
	//cout << endl;
	int m;
	cin >> m;
	int pos = scoreList.size();
	int lastScore = -1;
	int resultPos = 1;
	while (m--) {
		int tmp;
		cin >> tmp;
		// check last score
		if (tmp == lastScore) {
			cout << resultPos << endl;
			lastScore = tmp;
			continue;
		}
		// check dau bang
		if (tmp >= scoreList[0]) {
			cout << 1 << endl;
			resultPos = 1;
			//set pos at first
			pos = 0;
			lastScore = tmp;
			continue;
		}
		// check cuoi bang
		if (tmp < scoreList[scoreList.size() - 1]) {
			resultPos = scoreList.size() + 1;
			cout << resultPos << endl;
			lastScore = tmp;
			//set pos at last
			pos = scoreList.size();
			continue;
		}
		while (pos--) {
			//cout <<"pos: " << pos << endl;
			if (scoreList[pos] > tmp) {
				cout << pos + 2 << endl;
				resultPos = pos + 2;
				//reset pos
				++pos;
				break;
			}
			else if (scoreList[pos] == tmp) {
				cout << pos + 1 << endl;
				resultPos = pos + 1;
				//reset pos
				++pos;
				break;
			}
		}
		lastScore = tmp;
	}
}

int main() {
	solve();
	return 0;
}