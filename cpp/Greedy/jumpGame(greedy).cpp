#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool greedy(vector<int> &nums){
        int goal = nums.size()-1;

        for(int i=nums.size()-1;i>=0;i--){
            if(i+nums[i]>=goal)
                goal=i;
        }
        return goal==0;
    }
}
int main()
{

    return 0;
}