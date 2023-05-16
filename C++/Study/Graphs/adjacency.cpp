#include <iostream>
using namespace std;

class AdjacenyMatrix
{
    int **adjMatrix;
    int numVertices;

public:
    AdjacenyMatrix(int numVertices)
    {
        this->numVertices = numVertices;
        adjMatrix = new int *[numVertices];
        for (int i = 0; i < numVertices; i++)
        {
            adjMatrix[i] = new int[numVertices];
            for (int j = 0; j < numVertices; j++)
                adjMatrix[i][j] = 0;
        }
    }
    void addEdge(int i, int j)
    {
        adjMatrix[i][j] = 1;
        adjMatrix[j][i] = 1;
    }
    void removeEdge(int i, int j)
    {
        adjMatrix[i][j] = 0;
        adjMatrix[j][i] = 0;
    }
    void toString()
    {
        for (int i = 0; i < numVertices; i++)
        {
            cout << i << " : ";
            for (int j = 0; j < numVertices; j++)
                cout << adjMatrix[i][j] << " ";
            cout << "\n";
        }
    }
    ~AdjacenyMatrix()
    {
        for (int i = 0; i < numVertices; i++)
            delete[] adjMatrix[i];
        delete[] adjMatrix;
    }
};

int main()
{
    AdjacenyMatrix am(4);
    am.addEdge(0, 1);
    am.addEdge(1, 2);
    am.addEdge(2, 3);
    am.addEdge(3, 0);
    am.toString();
    return 0;
}