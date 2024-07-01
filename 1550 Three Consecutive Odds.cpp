//solution 1


class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();

        for(int i=0;i<n;i++){
            if(i+1 < n and i+2 < n and arr[i]%2 == 1 and arr[i+1]%2 == 1 and arr[i+2] %2 == 1)
                return true;
        }
        return false;
    }
};


//solution 2

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0, k = 3;

        for(int i=0;i<n;i++){
            if(arr[i]%2 == 1) cnt++;
            else cnt = 0;

            if(cnt == k) return true;
        }
        return false;
    }
};