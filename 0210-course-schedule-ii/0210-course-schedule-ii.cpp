class Solution {
public:


    bool dfs(int src, vector<vector<int>>& graph,vector<int>& state, stack<int>& s) {

       
        state[src] = 1;

        for (int i = 0; i < graph[src].size(); i++) {

            int v = graph[src][i];

            if (state[v] == 1) {
                return true;
            }

            if (state[v] == 0) {
                if (dfs(v, graph, state, s)) {
                    return true;
                }
            }
        }

        state[src] = 2;

        s.push(src);

        return false;
    }

    vector<int> findOrder(int numCourses,vector<vector<int>>& prerequisites) {

        vector<vector<int>> graph(numCourses);

        for (int i = 0; i < prerequisites.size(); i++) {

            int course = prerequisites[i][0];
            int prerequisite = prerequisites[i][1];

            graph[prerequisite].push_back(course);
        }

        vector<int> state(numCourses, 0);
        stack<int> s;

        for (int i = 0; i < numCourses; i++) {

            if (state[i] == 0) {

                if (dfs(i, graph, state, s)) {
                    return {};
                }
            }
        }

        
        vector<int> ans;

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};
    // bool isCycleDFS(int src, vector<bool>& vis,vector<bool>& recPath, vector<vector<int>>& edges) {

    //     vis[src] = true;
    //     recPath[src] = true;

    //     for (int i = 0; i < edges.size(); i++) {

    //         int v = edges[i][0];
    //         int u = edges[i][1];

    //         if (src == u) {

    //             if (!vis[v]) {
    //                 if (isCycleDFS(v, vis, recPath, edges))
    //                     return true;
    //             }

    //             else if (recPath[v]) {
    //                 return true;
    //             }
    //         }
    //     }

    //     recPath[src] = false;

    //     return false;
    // }

    // void toporder(int src, vector<bool>& vis, stack<int>& s, vector<vector<int>>& edges) {

    //     vis[src] = true;

    //     for (int i = 0; i < edges.size(); i++) {

    //         int v = edges[i][0];
    //         int u = edges[i][1];

    //         if (src == u && !vis[v]) {
    //             toporder(v, vis, s, edges);
    //         }
    //     }

        
    //     s.push(src);
    // }

    // vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

    //     vector<bool> vis(numCourses, false);
    //     vector<bool> recPath(numCourses, false);

    
    //     for (int i = 0; i < numCourses; i++) {

    //         if (!vis[i]) {

    //             if (isCycleDFS(i, vis, recPath, prerequisites)) {
    //                 return {};
    //             }
    //         }
    //     }

    //     vector<bool> vis2(numCourses, false);
    //     stack<int> s;

    //     for (int i = 0; i < numCourses; i++) {

    //         if (!vis2[i]) {
    //             toporder(i, vis2, s, prerequisites);
    //         }
    //     }

    //     vector<int> ans;

    //     while (!s.empty()) {
    //         ans.push_back(s.top());
    //         s.pop();
    //     }

    //     return ans;
//     }
// };