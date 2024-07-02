//M1

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> vis(m), res;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i] == nums2[j] and vis[j] == 0){
                    res.push_back(nums1[i]);
                    vis[j] = 1;
                    break;
                }
            }
        }
        return res;
    }
};


//M2

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();


        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i =0,j=0;

        vector<int> res;

        while(i < n and j < m){
            if(nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j]) j++;
            else i++;
        }
        return res;
    }
};


//M3

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int>res;
        for(auto &x: nums1){
            mp[x]++;
        }
        for(auto &x: nums2){
            if(mp.find(x) != mp.end()){
                res.push_back(x);
                mp[x]--;
                if(mp[x] == 0){
                    mp.erase(x);
                }
            }
        }
        return res;
    }
};