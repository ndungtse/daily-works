#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void printBFS(vector<vector<int>> v, int sv, vector<bool> &visited) {
    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << endl;
        for (int i = 0; i < v.size(); i++) {
            if (i == curr) {
                continue;
            }
            if (v[curr][i] == 1) {
                if (visited[i]) {
                    continue;
                }
                q.push(i);
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

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            printBFS(matrix, i, visited);
        }
    }
    return 0;
}
