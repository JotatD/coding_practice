#include <iostream>
#include <algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

void print(vector<int>& dam){
	printf("\n\n vector: ");
	for (int  i = 0; i < dam.size(); i++){
		printf(" %d", dam[i]);
	}
	printf("\n");
}

int main(){
	int M, N, K, W, s, help;
	char op;
	scanf("%d", &M);
	while (M--) {
		scanf("%d %d", &N, &K);
		vector<int> coins(N+1, 1);
		coins[0] = 0;
		int counter = 0;

		while(K--){
			vector<int> l, r;
			scanf("%d", &s);
			for (int i = 0; i < s; i++){
				scanf("%d", &help);
				l.push_back(help);
			}
			for (int i = 0; i < s; i++){
				scanf("%d", &help);
				r.push_back(help);
			}
			scanf(" %c", &op);

			if (op == '='){
				for (int i = 0; i < s; i++){
					coins[l[i]] = 0;
					coins[r[i]] = 0;
				}
			}
			else if (op == '>'){
				for (int i = 1; i < s; i++){
					coins[r[i]] = 0;
				}
				counter += 1;
			}
			else if (op == '<'){
				for (int i = 0; i < s; i++){
					//cout << l[i];
					coins[l[i]] = 0;
				}
				counter += 1000;
			}
			//print(coins);
			if (counter == 1){
				int w = 0;
				for (int i = 1; i < N+1; i++){
					if (w < s && i == l[w]){
						w++;
						continue;
					}
					coins[i] = 0;
				}
				counter +=10000;
				//print(coins);
			}
			else if (counter == 1000){
				int w = 0;
				for (int i = 1; i < N+1; i++){
					if (w < s && i == r[w]){
						w++;
						continue;
					}
					coins[i] = 0;
				}
				counter +=10000;
				//print(coins);
			}
		}
		int result = 0;
		//printf("last");
		//print(coins);
		for (int i = 1; i < N+1; i++){
				if (coins[i] == 1 && result == 0) result = i;
				else if (coins[i] && result != 0){
					result = 0;
					break;
				}
		}
		printf("\nindeed %d\n", result);
	}
}

int main(void) {
    int cases, N, K, P, coin;

    cin >> cases;

    while (cases--) {
        cin >> N >> K;

        vector<weigh_in> weigh_ins;
        set<int> coins_used;

        while (K--) {
            cin >> P;
            
            weigh_in tmp;

            rep (i, P) {
                cin >> coin;
                coins_used.insert(coin);
                tmp.left.insert(coin);
            }

            rep (i, P) {
                cin >> coin;
                coins_used.insert(coin);
                tmp.right.insert(coin);
            }

            cin >> tmp.result;

            weigh_ins.push_back(tmp);
        }

        vector<int> suspects;
        REPI (i, 1, N) {
            if (can_be_false_coin(i, weigh_ins))
                suspects.push_back(i);
        }

        if (suspects.empty()) {
            REPI (i, 1, N) {
                if (coins_used.find(i) == coins_used.end())
                    suspects.push_back(i);
            }
        }

        if (suspects.size() == 1) cout << suspects[0] << endl;
        else cout << 0 << endl;

        if (cases) cout << endl;
    }

    return 0;
}
