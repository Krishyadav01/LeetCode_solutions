#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() ; i++){
            for(int j = 0; j < i+1; j++){
                if(target == nums[i] + nums[j]){
                    if (j != i){
                        return{i,j};
                    }
                }   

            }
        }return{}; 
    }
};