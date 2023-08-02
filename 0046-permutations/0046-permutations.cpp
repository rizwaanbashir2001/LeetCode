class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> temp;
        sort(begin(nums), end(nums));
        do {
            temp.push_back(nums);
        }while (next_permutation(begin(nums), end(nums)));

        return temp;
    }
};