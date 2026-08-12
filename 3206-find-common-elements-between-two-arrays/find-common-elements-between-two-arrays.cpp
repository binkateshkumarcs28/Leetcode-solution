class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(2, 0);

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    ans[0]++;
                    break;
                }
            }
        }

        for(int i = 0; i < nums2.size(); i++) {
            for(int j = 0; j < nums1.size(); j++) {
                if(nums2[i] == nums1[j]) {
                    ans[1]++;
                    break;
                }
            }
        }

        return ans;
    }
};



//map

class solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp1, mp2;
        vector<int> ans(2, 0);

        for(int x : nums1)
            mp1[x]++;

        for(int x : nums2)
            mp2[x]++;

        for(int x : nums1) {
            if(mp2[x] > 0)
                ans[0]++;
        }

        for(int x : nums2) {
            if(mp1[x] > 0)
                ans[1]++;
        }

        return ans;
    }
};