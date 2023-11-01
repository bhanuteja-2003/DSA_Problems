//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool solve(vector<int> stalls, int min_dist,int cows){
        int prev_ind;
        for(int i=0;i<stalls.size();i++){
            if(i==0){
                cows--;
                prev_ind=0;
            }
            else{
                if(stalls[i]-stalls[prev_ind]>=min_dist){
                    cows--;
                    prev_ind = i;
                }
            }
            if(cows==0){
                return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int size = stalls.size();
        sort(stalls.begin(), stalls.end());
        int l = 1;
        int h = stalls[size-1] -stalls[0];
        int mid = l+(h-l)/2;
        while(l<=h){
            if(solve(stalls, mid, k)){
                l = mid+1;
            }
            else{
                h=mid-1;
            }
            mid = l+(h-l)/2;
        }
        return h;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends