#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void dfs(vector<vector<int>> v, int sv)
{
    int n = v.size();
    vector<bool> visited(n, false);
    stack<int> ns;
    ns.push(sv);
    while (!ns.empty())
    {
        int current = ns.top();
        ns.pop();
        if (visited[current] == false)
        {
            cout << current << " ";
            visited[current] = true;
            for (int node : v[current])
                if (!visited[node])
                {
                    ns.push(node);
                }
        }
    }
}

int main()
{
    int numNodes = 7;
    vector<vector<int>> graph(numNodes);
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(4);
    graph[2].push_back(5);
    graph[2].push_back(6);
    int startNode = 0;
    cout << "DFS starting( " << startNode << "): ";
    dfs(graph, startNode);
    cout << endl;
    cout << endl;

    cout << "DFS starting( " << startNode << "): ";
    vector<vector<int>> gp(5);
    gp[0].push_back(3);
    gp[0].push_back(2);
    gp[0].push_back(1);
    gp[1].push_back(2);
    gp[2].push_back(4);
    dfs(gp, startNode);
    return 0;
}