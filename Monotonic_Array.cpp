class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int increase = 0, decrease = 0;
        int n = A.size();

        for (int i = 0; i < n - 1; i++) {

            if (A[i] <= A[i + 1])
                increase++;

            if (A[i] >= A[i + 1])
                decrease++;
        }
        return ((increase == n - 1 || decrease == n - 1) ? true : false);
    }
};