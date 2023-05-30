class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> matches;
        for (string q:queries){
            int counter = 0;
            for (string d: dictionary){
                counter = 0;
                for (int i =0; i < d.size(); i++){
                    if (q[i] != d[i]) counter++;
                }
                if (counter <= 2){
                    matches.push_back(q);
                    break;
                }
            }
        }
        return matches;
    }
};