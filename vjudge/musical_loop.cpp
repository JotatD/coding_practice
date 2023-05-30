#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> samples;

void checkPoint(string s){
	cout << s << endl;
	cin >> s;
}

void scan(){
	samples.clear();
	int temp;
	for(int i = 0; i < n; i++){
		scanf("%d", &temp);
		samples.push_back(temp);
	}
}

int main(){
	freopen("testdata.txt", "r", stdin);
	while (scanf("%d", &n) != EOF) {
		scan();
		printf("%d\n", result);
	}
}


