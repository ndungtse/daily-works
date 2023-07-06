#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#define INF std::numeric_limits<int>::max()

// Structure to represent a weighted edge
struct Edge {
    int destination;
    int weight;
};

// Function to find the shortest path using Dijkstra's algorithm
void DijkstraAlgorithm(const std::vector<std::vector<Edge>>& graph, int source, std::vector<int>& distance) {
    int numVertices = graph.size();
    
    // Priority queue to store vertices with their distances
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    
    // Initialize distances as infinite
    distance.assign(numVertices, INF);
    
    // Distance of source vertex from itself is 0
    distance[source] = 0;
    
    // Add source vertex to the priority queue
    pq.push(std::make_pair(0, source));
    
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        
        // Traverse all adjacent vertices of u
        for (const Edge& edge : graph[u]) {
            int v = edge.destination;
            int weight = edge.weight;
            
            // If the distance to v through u is shorter, update the distance
            if (distance[u] != INF && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                pq.push(std::make_pair(distance[v], v));
            }
        }
    }
}

int main() {
    int numVertices = 6;
    std::vector<std::vector<Edge>> graph(numVertices);
    
    // Add edges to the graph
    graph[0].push_back({1, 5});
    graph[0].push_back({2, 10});
    graph[1].push_back({3, 1});
    graph[3].push_back({4, 1});
    graph[2].push_back({3, 3});
    graph[3].push_back({4, 5});
    graph[3].push_back({5, 7});
    graph[4].push_back({5, 1});
    
    int source = 0;
    std::vector<int> distance;
    
    DijkstraAlgorithm(graph, source, distance);
    
    // Print the shortest distances from the source vertex
    std::cout << "Shortest distances from vertex " << source << ":\n";
    for (int i = 0; i < numVertices; i++) {
        std::cout << "Vertex " << i << ": " << distance[i] << "\n";
    }
    
    return 0;
}
