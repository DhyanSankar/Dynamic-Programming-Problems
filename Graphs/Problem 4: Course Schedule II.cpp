class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<int>& visited, vector<int>& recStack, vector<int>& ansSt, int index)
    {         
        visited[index] = 1;
        recStack[index] = 1;
        for(int i=0; i<graph[index].size(); i++)
        {
            if(recStack[graph[index][i]]) return false;
            if(!visited[graph[index][i]] && 
              !dfs(graph, visited, recStack, ansSt, graph[index][i]))
                return false;
        }
       recStack[index] = 0;
       ansSt.emplace_back(index);
       return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size() == 0) {
            vector<int> v;
            for(int i=numCourses-1; i>=0; i--)
            {
                v.emplace_back(i);
            }
            return v;
        }
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses,0);
        vector<int> visited(numCourses,0);
        vector<int> recStack(numCourses,0);
        vector<int> ansSt;
        bool notCircular = false;
        for(int i=0; i<prerequisites.size(); i++)
        {
            graph[prerequisites[i][1]].emplace_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        for(int i=0; i<numCourses; i++)
        {
            if(indegree[i] == 0)
            {
                notCircular = true;
                if(!dfs(graph, visited, recStack, ansSt, i)) return {};
            }
        }
        if(!notCircular) return {};
        for(int i=0; i<visited.size(); i++)
        {
            if(visited[i] == 0) return {};
        }
         reverse(ansSt.begin(),ansSt.end());
        return ansSt;
    }
};