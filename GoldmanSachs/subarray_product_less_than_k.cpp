class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int s,e;
        int length;
        int res;
        s = 0;
        long long int p = 1;
        for(e = 0; e < n; e++){
            p*=a[e];
            while(s < e && p >= k){
                p/=a[s];
                s+=1;
            }
            if(p < k){
                length = e-s+1;
                res += length;
            }
        }
        return res;
    }
};
