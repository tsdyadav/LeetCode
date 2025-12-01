class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int count = 0;

        for (int j = 0; j < n; j++) {
            int leftLess = 0, leftGreater = 0;
            int rightLess = 0, rightGreater = 0;

            // Count elements on the left side of j
            for (int i = 0; i < j; i++) {
                if (rating[i] < rating[j]) leftLess++;
                else if (rating[i] > rating[j]) leftGreater++;
            }

            // Count elements on the right side of j
            for (int k = j + 1; k < n; k++) {
                if (rating[k] < rating[j]) rightLess++;
                else if (rating[k] > rating[j]) rightGreater++;
            }

            // Increasing + decreasing teams
            count += leftLess * rightGreater;   // rating[i] < rating[j] < rating[k]
            count += leftGreater * rightLess;   // rating[i] > rating[j] > rating[k]
        }

        return count;
    }
};
