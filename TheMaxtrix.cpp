//#include <bits/stdc++.h>
//#include <unordered_set>
//using namespace std;
//
//int n, k;
//vector<vector<int>> roads;
//vector<int> machines;
//void input() {
//    cin >> n >> k;
//    for (int i = 0; i < n - 1; ++i) {
//        vector<int> tmp(3, 0);
//        for (int j = 0; j < 3; ++j) {           
//            cin >> tmp[j];
//        }
//        roads.push_back(tmp);
//    }
//    for (int j = 0; j < k; ++j) {
//        int tmp;
//        cin >> tmp;
//        machines.push_back(tmp);
//    }
//}
//
//int minTime(vector<vector<int>> roads, vector<int> machines) {
//    int time = 0;
//    size_t n = roads.size();
//    vector<bool> base(n + 1);
//    vector<int> nodes(n + 1);
//    map<int, vector<pair<int, int>>> m;
//    vector<unordered_set<int>> sets(n + 1);
//
//    // Put each city in its own group.
//    for (int i = 0; i <= n; i++) {
//        nodes[i] = i;
//        sets[i].insert(i);
//    }
//
//    // Mark each group with a machine.
//    for (int m : machines) {
//        base[m] = true;
//    }
//
//    // Build map indexed by road value.
//    for (auto r : roads) {
//        m[r[2]].push_back({ r[0], r[1] });
//    }
//
//    // Add roads starting with largest time value.
//    for (auto rs = m.rbegin(); rs != m.rend(); rs++) {
//        for (auto r : rs->second) {
//            int b1 = nodes[r.first];
//            int b2 = nodes[r.second];
//
//            // If both groups already have a machine delete this road.
//            if (base[b1] && base[b2]) {
//                time += rs->first;
//                // Merge the groups.
//            }
//            else {
//                base[b1] = base[b1] || base[b2];
//                cout << b1 << " " << base[b1] << endl;
//                for (auto n : sets[b2]) {
//                    sets[b1].insert(n);
//                    nodes[n] = b1;
//                }
//            }
//        }
//    }
//    return time;
//}
//
//int main() {
//	input();
//    int a = minTime(roads, machines);
//	return 0;
//}