//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> BFS;
        vector<int> visit(V, 0);
        queue<int> q;
        q.push(0);
        visit[0]=1;
        while(!q.empty()){
            int curr_ele = q.front();
            q.pop();
            BFS.push_back(curr_ele);
            for(auto it : adj[curr_ele]){
                if(visit[it]==0){
                    q.push(it);
                    visit[it]=1;
                }
            }
            // for(int i=0;i<adj[curr_ele].size();i++){
            //     int it = adj[curr_ele][i];
            //     if(visit[it]==0){
            //         q.push(it);
            //         visit[it]=1;
            //     }
                
            // }
            
        }
        return BFS;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends