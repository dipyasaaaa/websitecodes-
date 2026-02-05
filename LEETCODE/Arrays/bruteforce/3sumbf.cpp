// 15. 3Sum
// Attempted
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.
 

// Constraints:

// 3 <= nums.length <= 3000
// -105 <= nums[i] <= 105

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                    if(i!=j && j!=k && k!=i){
                        if(nums[i]+nums[k]+nums[j]==0){
                            vector<int> temp={nums[i],nums[j],nums[k]};
                            sort(temp.begin(),temp.end());
                            int flag=0;
                            for(auto row: ans){
                                if(row==temp){
                                    flag++;
                                }
                                }
                            if (flag==0){
                                ans.push_back(temp);
                            }
                            }

                        }
                    }
            }

                
            }
            return ans;
        }

    };

int main(){
    Solution sol;
    int size;
    cout<<"Enter numer of elements in array: ";
    cin>>size;
    cout<<"Enter elements of array: ";
    vector<int> n(size);
    for (int i = 0; i < size; i++) {
        cin >> n[i];
    }
    vector<vector<int>> result = sol.threeSum(n);
    for(auto row: result){
        for(auto ele: row){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}