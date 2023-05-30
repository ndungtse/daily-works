#include <iostream>
#include <vector>
using namespace std;
/**
 * Print DFS of a graph
 * @param v: adjacency matrix
 * @param sv: starting vertex
 * @param visited: vector to keep track of visited vertices
*/
void printDFS(vector<vector<int>> v, int sv, vector<bool> &visited) {
    cout << sv << endl;
    visited[sv] = true;
    for (int i = 0; i < v.size(); i++) {
        if (i == sv) {
            continue;
        }
        if (v[sv][i] == 1) {
            if (visited[i]) {
                continue;
            }
            printDFS(v, i, visited);
        }
    }
}

// without recursion
/**
 * Print DFS of a graph
 * @param v: adjacency matrix
 * @param sv: starting vertex
 * @param visited: vector to keep track of visited vertices
*/
void printDFS2(vector<vector<int>> v, int sv, vector<bool> &visited) {
    vector<int> stack;
    stack.push_back(sv);
    visited[sv] = true;
    while (!stack.empty()) {
        int curr = stack.back();
        stack.pop_back();
        cout << curr << endl;
        for (int i = 0; i < v.size(); i++) {
            if (i == curr) {
                continue;
            }
            if (v[curr][i] == 1) {
                if (visited[i]) {
                    continue;
                }
                stack.push_back(i);
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
    printDFS(matrix, 0, visited);
    return 0;
}