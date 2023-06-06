#include <iostream>
#include <vector>
using namespace std;

void printDFS(vector<vector<int>> v, int sv, vector<bool> &visited)
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
            printDFS(matrix, i, visited);
        }
    }
    return 0;
}