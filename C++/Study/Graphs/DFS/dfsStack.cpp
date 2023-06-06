#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void printDFS(vector<vector<int>> v, int sv, vector<bool> &visited)
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