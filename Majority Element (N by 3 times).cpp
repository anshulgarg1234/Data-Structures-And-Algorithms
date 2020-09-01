//method 1 is brute force approach check for every element for majority element.
// method 2 is using hashmap and store occurence as value and then check if its majority.
// method 3 is below.
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++){
            if(num1 == nums[i]){
                count1++;
            }
            else if(num2 == nums[i]){
                count2++;
            }
            else if(count1 == 0){
                num1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                num2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == num1){
                count1++;
            }else if(nums[i] == num2){
                count2++;
            }
        }
        vector<int> ans;
        if(count1 > n/3){
            ans.push_back(num1);
        }
        if(count2 > n/3){
            ans.push_back(num2);
        }
        return ans;
    }
};
