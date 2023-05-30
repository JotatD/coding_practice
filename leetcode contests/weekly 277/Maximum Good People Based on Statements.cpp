class Solution {
public:
    int maxi;
    int maximumGood(vector<vector<int>>& statements) {
        vector<int> people(statements.size(), 2);
        maxi = 0;
        recur(0, people, statements);
        return maxi;
    }
    
    void recur(int pers, vector<int> people, vector<vector<int>>& statements){
        
        if (pers >= people.size()){
            
            int count = 0;
            for (int i :people){
                cout << i;
                if (i == 1) count ++;
            }
            maxi = max(maxi, count);
            return;
        }
        
        if (people[pers] != 2){
            if (people[pers] == 1){
                for (int i = 0; i < people.size(); i++){
                    if (statements[pers][i] == 1){
                        if (people[i] == 0) return; 
                        people[i] = 1;
                    }
                
                    else if (statements[pers][i] == 0){
                        if (people[i] == 1) return;
                        people[i] = 0;
                    }
                }
            }
            recur(pers+1, people, statements);
            return;
        }
        
        people[pers] = 0;
        recur(pers+1, people, statements);
        
        for (int i = 0; i < people.size(); i++){
            if (statements[pers][i] == 1){
                if (people[i] == 0) return; 
                people[i] = 1;
            }
            
            else if (statements[pers][i] == 0){
                if (people[i] == 1) return;
                people[i] = 0;
            }
            
            
        }
        people[pers] = 1;
        recur(pers+1, people, statements);

    }
    
    
};