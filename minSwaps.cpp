#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int k = count(nums.begin(), nums.end(), 1);
        if(k == 0) {
            return 0;
        }
        vector<int> extendedNums(nums.begin(), nums.end());
        extendedNums.insert(extendedNums.end(), nums.begin(), nums.end());
        int minZeros = INT_MAX;
        int currentZeroes = 0;
        for(int i=0; i<k; i++) {
            if(extendedNums[i] == 0) {
                currentZeroes++;
            }
        }
        minZeros = min(minZeros, currentZeroes);
        for(int i=1; i<n; i++) {
            if(extendedNums[i-1] == 0) {
                currentZeroes--;
            }
            if(extendedNums[i+k-1] == 0) {
                currentZeroes++;
            }
            minZeros = min(minZeros, currentZeroes);
        }
        return minZeros;

    }
};


int main(){
       
    return 0;
}