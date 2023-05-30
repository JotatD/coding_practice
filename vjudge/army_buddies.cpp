#include <iostream>
#include <algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int binaryl(vector<pair<int, int>> v, int l, int r, int k){
	int m((l+r)/2);
	if (l >= r) {
		if (v[l].first - 1 == v[l-1].second){
			v[l-1].second = v[l].second;
		}
		else{
			v.insert(v.begin()+r, pair<int, int>(l, r));
		}
		if (v[l].second + 1 == v[l+1].fist){
			v[l].second = v[l+1].second;
			v.erase(v.begin()+r+1);
		}
		return r;
	}
	else if (v[m].first < k) binaryl(v, m+1, r);
	else binaryl(v, l, m-1);
}
1


void merge(vector<pair<int, int>> v, int l){
	if (v[l].first - 1 == v[l-1].second){
		v[l].first = v[l-1].first;
	}
	if (v[l].second + 1 == v[l+1].fist){
		v[l].second = v[l+1].second;
	}
	//remove;
}

int main(){
	int s, b, l, r;
	char ch;
	double result;
	string a;
	
	while (scanf("%d %d", &s, &b) && s + b != 0) {
		vector<pair<int, int>> v(s, 1);
		while(b--){
			scanf("%d %d", &l, &r);
			for(int i = l-1; i < r; i++){
				v[i] = 0;
			}
			int r = binary(v, 0, v.size()-1);
			v.insert(v.begin()+r, pair<int, int>(l, r));
			v[l].first - 1;
			v[l].second + 1;
		}

		printf("-\n");
	}
}





