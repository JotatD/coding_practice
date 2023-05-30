int cyclical_increase(int n, int& cursor){
    cursor++;
    if (cursor > n) cursor = 1;
    return cursor;
}

void print(vector<int>& v){
    for (int a:v){
        cout << a << ' ';
    }
    cout << endl;
}

long long getMax(vector<long long>& v){
    long long maxi = -1;
    for (long long a:v){
        maxi = max(maxi, a);
    }
    return maxi;
}