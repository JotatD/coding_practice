#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//Functions for extremely quick debugging
void checkPoint(string s){
	cout << s << endl;
	cin >> s;
}

void print(vector<char>& instructions){
	int i = 0;
	for (; i < instructions.size()-1; i++){
		printf("%c ", instructions[i]);
	}
	printf("%c\n", instructions[i]);
}


//Checks the first stack available to insert the cargo 
void insert(char toInsert, vector<char>& stacks){
	for (int i = 0; i < 26; i++){
		if (toInsert <= stacks[i]){
			stacks[i] = toInsert;
			return;
		}
	}
}

int count(vector<char>& stacks){
	int i = 0;
	for (; i < 26; i++){
		if (stacks[i] == '}'){
			break;
		}
	}
	return i;
}



int main(){
	int cas = 0;
	string cargo;
	while ((cin >> cargo) && cargo != "end") {
		//in this array of 'stacks' we only need to keep track of the last element inserted,
		//because the rest is 
		vector<char> stacks(26, '}'); 
		for (int i = 0; i < cargo.size(); i++){
			insert(cargo[i], stacks);
		}
		printf("Case %d: %d\n", ++cas, count(stacks));
	}
}