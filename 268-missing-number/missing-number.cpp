// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int len=nums.size();
//         for(int i=0;i<nums.size();i++){
//             len =len+ (i-nums[i]);
//         }
//         return len;
//     }
// };
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()+1;
        int total_sum=n*(n-1)/2;
        int arr_sum=std::accumulate(nums.begin(),nums.end(),0);
        return total_sum  - arr_sum;
    }
};