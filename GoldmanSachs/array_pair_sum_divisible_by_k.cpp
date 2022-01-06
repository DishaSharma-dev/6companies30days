class Solution{
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]%k]++;
        }
        for(int i = 0; i < nums.size(); i++){
            int rem1 = nums[i] % k;
            if(rem1 == 0){
                if(map[rem1] % 2 != 0){
                    return false;
                }
            }
            else{
                int rem2 = k - rem1;
                if(rem1 == rem2 && map[rem1] % 2 != 0){
                    return false;
                }
                if(map.find(rem2) == map.end()){
                    return false;
                }
                if(map[rem1] != map[rem2]){
                    return false;
                }
            }
        }
        return true;
    }
};
