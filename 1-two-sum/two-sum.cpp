class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>hmap;
      for(int i=0;i<nums.size();i++){
        int comp=target - nums[i];
        if(hmap.find(comp)!=hmap.end()){
            return {hmap[comp],i};
        }
        hmap[nums[i]]=i;
      }
      return {};
      }
};

















// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>ans(2,0);
//             for(int i=0;i<nums.size();i++){
//                 for(int j=i+1;j<nums.size();j++)
//                 {
//                     if(nums[i]+nums[j]==target){
//                         ans[0]=i;
//                         ans[1]=j;
//                     }
//                 }
//             }

//             return ans;
//     }
// };