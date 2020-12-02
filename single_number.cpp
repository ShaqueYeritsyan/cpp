/* https://leetcode.com/problems/single-number/

Given a non-empty array of integers nums,
every element appears twice except for one.
Find that single one.

Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

*/

#include <iostream>
#include <vector>
  
int singleNumber(const std::vector<int>& nums) { 
        int result = nums[0]; 
        for (auto it = nums.begin()+1; it != nums.end(); ++it) { 
            result = result ^ *it; 
        }
        return result;
    } 
  
int main() 
    { 
        std::vector<int> arr = {1,1,2,2,3,4,4};
        std::cout<<"Single element is: " << singleNumber(arr) << '\n';
        return 0; 
    } 
