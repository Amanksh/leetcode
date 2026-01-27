1class Solution {
2public:
3    typedef pair<int,int> P;
4    int minCost(int n, vector<vector<int>>& edges) {
5        unordered_map<int, vector<P>> adj;
6        for(auto it : edges){
7            int u = it[0];
8            int v = it[1];
9            int wt = it[2];
10            adj[u].push_back({v , wt});
11            adj[v].push_back({u , 2*wt});
12        }
13
14        priority_queue<P,vector<P> ,greater<P>> pq;
15        vector<int> result(n ,INT_MAX);
16        result[0] = 0;
17        pq.push({0 , 0});
18        while(!pq.empty()){
19            int node = pq.top().second;
20            int dist = pq.top().first;
21            if(node == n-1){
22                return result[n-1];
23            }
24            pq.pop();
25            for(auto it : adj[node]){
26                int v = it.first;
27                int wt = it.second;
28                if(wt + dist < result[v]){
29                    result[v] = wt + dist;
30                    pq.push({wt+dist , v});
31                }
32            }
33        }
34        return -1;
35    }
36};