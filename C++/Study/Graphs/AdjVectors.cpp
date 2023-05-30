#include <iostream>
#include <vector>
using namespace std;

class AdjMatVectors {
private:
    vector<vector<int>> adjMat;
    int numVertices;
public:
    AdjMatVectors(int numVertices) {
        this->numVertices = numVertices;
        adjMat.resize(numVertices);
        for (int i = 0; i < numVertices; i++) {
            adjMat[i].resize(numVertices);
        }
    }

    void addEdge(int i, int j, int weight) {
        adjMat[i][j] = weight;
        adjMat[j][i] = weight;
    }

    void removeEdge(int i, int j) {
        adjMat[i][j] = 0;
        adjMat[j][i] = 0;
    }

    bool isEdge(int i, int j) {
        return adjMat[i][j] != 0;
    }

    void print() {
        for (int i = 0; i < numVertices; i++) {
            cout << i << " : ";
            for (int j = 0; j < numVertices; j++) {
                cout << adjMat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    AdjMatVectors g(4);
    g.print();
    g.addEdge(0, 1, 1);
    g.addEdge(0, 2, 1);
    g.addEdge(2, 3, 1);
    g.print();
    return 0;
}