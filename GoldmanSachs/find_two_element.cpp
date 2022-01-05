class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,int> map;
        int maxi = INT_MIN;
        int *output = new int[2];
        for(int i = 0; i < n; i++){
            maxi = max(maxi, arr[i]);
            map[arr[i]]++;
        }
        //for repeating number
        for(int i = 0; i < n; i++){
            if(map[arr[i]] == 2){
                output[0] = arr[i];
                break;
            }
        }
        // for missing number
        for(int i = 1; i <= maxi+1; i++){
            if(map.count(i) == 0){
                output[1] = i;
                break;
            }
        }
        return output;
    }
};
