class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int used = 0;
        int distance = 0;
        while (mainTank > 0){
            distance += 10;
            used += 1;
            mainTank -= 1;
            if (used%5 == 0 && additionalTank > 0){
                mainTank += 1;
                additionalTank -= 1;
            }
        }
        return distance;
    }
};  