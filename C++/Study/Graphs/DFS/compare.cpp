#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void printDFSRec(vector<vector<int>> v, int sv, vector<bool> &visited)
{
    cout << sv << endl;
    visited[sv] = true;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[sv][i] == 1 && !visited[i])
        {
            printDFS(v, i, visited);
        }
    }
}
void printDFStack(vector<vector<int>> v, int sv, vector<bool> &visited)
{
    stack<int> s;
    s.push(sv);
    visited[sv] = true;
    while (!s.empty())
    {
        int curr = s.top();
        s.pop();
        cout << curr << endl;
        int n = v.size();
        for (int i = 0; i < n; i++)
        {
            if (v[curr][i] == 1 && !visited[i])
            {
                s.push(i);
                visited[i] = true;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, e;

    cin >> n >> e;
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            printDFSRec(matrix, i, visited);
        }
    }
    return 0;
}
