class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        int n =nums.size();
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> v(mp.begin(),mp.end());
        n=v.size();
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>  > pq;
        for(int i=0;i<k;i++){
            pq.push({v[i].second , v[i].first});
        }

        for(int i=k;i<n;i++){
            if(v[i].second > pq.top().first){
                pq.pop();
                pq.push({v[i].second , v[i].first});
            }
        }
        vector<int> res;
        for(int i=0;i<k;i++){
            cout << pq.top().second << " ";
            res.push_back(pq.top().second);
            pq.pop();

        }


        return res;
        
    }
};