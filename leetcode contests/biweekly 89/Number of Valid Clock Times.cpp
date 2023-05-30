class Solution {
public:
    int countTime(string time) {
        int a, b, c, d;
        int counter = 0;
        int divfact = 1;
        for (char a: time){
            if (a != '?' && a != ':') divfact *= 10;
        }
        
        for (int i = 0; i <= 9; i++){
            if (time[0] == '?'){
                a = 10*i;
            }
            else{
                a = 10*(time[0]-'0');
            }
            
            for (int j = 0; j <= 9; j++){
                if (time[1] == '?'){
                    b = j;
                    }
                else{
                    b = time[1]-'0';
                }
                for (int k = 0; k <= 9; k++){
                    if (time[3] == '?'){
                        c = 10*k;
                    }
                    else{
                        c = 10*(time[3]-'0');

                    }
                    for (int l = 0; l <= 9; l++){
                        if (time[4] == '?'){
                            d = l;
                        }
                        else{
                            d = time[4]-'0';
                        }
                        if (a+b <= 23 && c+d <= 59){
                            //cout << a + b << ' ' << c+ d << endl;
                            counter++;
                        }
                    }
                }
            }
        }
        return counter/divfact;
        
    }
};