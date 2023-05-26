#include <iostream>
using namespace std;

class AdjacencyMatrix
{
private:
    int vertices;
    int** adjMatrix;
public:
    AdjacencyMatrix(int c)
    {   
        adjMatrix = new int*[c];
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < c; j++)
            {
                adjMatrix[i][j] = 0;
            }
        }
    };
    ~AdjacencyMatrix();
};