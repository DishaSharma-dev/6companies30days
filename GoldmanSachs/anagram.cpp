class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> output;
        map<string, vector<string>> map;
        for(int i = 0; i < string_list.size(); i++){
            string s = string_list[i];
            sort(s.begin(), s.end());
            map[s].push_back(string_list[i]);
        }
        for(auto x : map){
            output.push_back(x.second);
        }
        return output;
    }
};