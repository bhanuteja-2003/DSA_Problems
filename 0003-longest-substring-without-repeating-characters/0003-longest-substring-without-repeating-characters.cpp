class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0 ||n==1){
            return n;
        }
        unordered_set<char> st;
        int beg,end;
        beg=0;
        end=0;
        int maxil=0;
        while(end<n){
            if(st.find(s[end]) != st.end()){
                
                while(st.empty()==false && st.find(s[end])!=st.end()){
                    st.erase(s[beg]);
                    beg++;
                }
                st.insert(s[end]);
                end++;

            }
            else{
                st.insert(s[end]);
                end++;
            }
            maxil = max(maxil,end-beg);
        }
        return maxil;
        
    }
};