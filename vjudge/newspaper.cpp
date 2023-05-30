#include <iostream>
#include <algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
	int N, k, val, lin;
	char ch;
	double result;
	string a;
	scanf("%d", &N);
	while (N--) {
		vector<int> values(2048, 0);
		result = 0;
		scanf("%d", &k);
		while(k--){
			//cout << "scanning values" << endl;
			scanf(" %c %d", &ch, &val);
			values[ch] = val;
		}
		//cout << "scanning line number" << endl;
		
		scanf("%d", &lin);
		cin.ignore();
		while(lin--){
			getline(cin, a, '\n');
			for (char c: a){
				result += values[c];
			}
		}
		printf("%.2f$\n", result/100);
	}
}









vector<int> hi(26, 0); //1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
vector<int> sw(26, 0); //1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 


unorderd_map<char, int> hm; //maximum size is still 26
unorderd_map<char, int> sm;

for (auto instance:hm){ //conceptually harder
	if (sm[instance.first] != instance.second){
		return 0;
	}
}
return 1;


























