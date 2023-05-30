class LUPrefix {
public:
    int large = 0;
    vector<int> set;
    
    LUPrefix(int n) {
        vector<int> temp (n+2, 0);
        set = temp;
    }
    
    void upload(int video) {
        int left = video - set[video-1];
        int right = video + set[video+1];
        set[left] = set[right] = right - left + 1;
    }
    
    int longest() {
        return set[1];
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */