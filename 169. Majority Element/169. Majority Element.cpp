// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int>mpp;
//         for(int i = 0 ; i < nums.size() ; i++)
//             mpp[nums[i]]++;
        
//         int Most = 0 ;
//         int element = 0;
//         for(auto it:mpp)
//         {
//             if( (it.second > (nums.size()/2) ) && (Most < it.second) )
//             {
//                 Most = it.second;
//                 element = it.first;
//             }    

//         }
//         return element;
//     }
// };