#include <iostream>
#include <vector>
using namespace std;

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

    for (int i = 0; i < n; i++) {
        // cout << i << " : ";
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
