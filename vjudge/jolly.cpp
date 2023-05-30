#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
	int k, prev, cur;
	bool jolly;
	while (scanf("%d", &k) != 0) {
		vector<bool> v(k-1, 0);
		jolly = 1;
		scanf("%d", &prev);
		int l = k-1;
		while (l--) { 
			scanf("%d", &cur);
			if (abs(cur - prev) < 1 || abs(cur - prev) > k-1) continue; 
			v[abs(cur - prev) - 1] = 1;
			prev = cur;
		}

		if (find(v.begin(), v.end(), 0) != v.end()) printf("Not jolly\n");
		else printf("Jolly\n");
	}
}



