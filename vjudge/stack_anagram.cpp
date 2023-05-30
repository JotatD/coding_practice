#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

string word;
string target;

//Functions for extrwmwly quick debugging
void checkPoint(string s){
	cout << s << endl;
	cin >> s;
	cout << endl;
}

void print(vector<char> instructions){
	int i = 0;
	for (; i < instructions.size()-1; i++){
		printf("%c ", instructions[i]);
	}
	printf("%c\n", instructions[i]);
}




void solution(stack<int> stack, vector<char> instructions, int cursorW,  int cursorT){
	if (cursorT >= target.length()){
		print(instructions);
		return;
	} 
	if (cursorW < word.length()){
		instructions.push_back('i');
		stack.push(word[cursorW]);

		solution(stack, instructions, cursorW+1, cursorT);

		instructions.pop_back();
		stack.pop();
	}

	if (!stack.empty()){
		if (stack.top() == target[cursorT]){
			instructions.push_back('o');
			stack.pop();
			solution(stack, instructions, cursorW, cursorT+1);
		}
	}


}

int main(){
	while ((cin >> word)) {
		cin >> target;
		stack<int> stack;
		vector<char> instructions;

		printf("%c\n", '[');
		if (word.length() == target.length()) solution(stack, instructions, 0, 0);
		printf("%c\n", ']');

	}
}