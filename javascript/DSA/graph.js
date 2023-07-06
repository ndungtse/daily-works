/**
 * @fileoverview Graph data structure implementation.
 * @description A graph is a collection of nodes (vertices) along with
 */
export default class Graph {
  constructor(isDirected = false) {
    this.isDirected = isDirected;
    this.vertices = [];
    this.adjList = new Array();
  }

  /**
   * @description Add a new vertex to the graph.
   * @param {any} v The vertex to add.
   * @returns {void}
   * @memberof Graph
   * @time complexity: O(1)
   * @space complexity: O(1)
   */
  addVertex(v) {
    if (!this.vertices.includes(v)) {
      this.vertices.push(v);
      this.adjList[v] = [];
    }
  }

  /**
   * @description Add a new edge to the graph.
   * @param {any} v The first vertex of the edge.
   * @param {any} w The second vertex of the edge.
   * @returns {void}
   * @memberof Graph
   * @time complexity: O(1)
   * @space complexity: O(1)
   * */
  addEdge(v, w) {
    if (!this.adjList[v]) {
      this.addVertex(v);
    }
    if (!this.adjList[w]) {
      this.addVertex(w);
    }
    this.adjList[v].push(w);
    if (!this.isDirected) {
      this.adjList[w].push(v);
    }
  }

  /**
   * @description Get the string representation of the graph.
   * @returns {string} The string representation of the graph.
   * @memberof Graph
   * @time complexity: O(V + E)
   * @space complexity: O(V + E)
   * */
  toString() {
    let s = "";
    for (let i = 0; i < this.vertices.length; i++) {
      s += `${this.vertices[i]} -> `;
      const neighbors = this.adjList[this.vertices[i]];
      for (let j = 0; j < neighbors.length; j++) {
        s += `${neighbors[j]} `;
      }
      s += "\n";
    }
    return s;
  }

  /**
   * @description Initialize the color of all vertices to white.
   * @returns {object} The color map.
   * @memberof Graph
   * @time complexity: O(V)
   * @space complexity: O(V)
   * */
  initializeColor() {
    const color = {};
    for (let i = 0; i < this.vertices.length; i++) {
      color[this.vertices[i]] = "white";
    }
    return color;
  }

  /**
   * @description Breadth-first search (BFS) algorithm.
   * @param {any} v The starting vertex.
   * @param {function} callback The callback function.
   * @returns {void}
   * @memberof Graph
   * @time complexity: O(V + E)
   * @space complexity: O(V)
   * */
  bfs(v, callback) {
    const color = this.initializeColor();
    const queue = [];
    queue.push(v);
    while (queue.length) {
      const u = queue.shift();
      const neighbors = this.adjList[u];
      color[u] = "grey";
      for (let i = 0; i < neighbors.length; i++) {
        const w = neighbors[i];
        if (color[w] === "white") {
          color[w] = "grey";
          queue.push(w);
        }
      }
      color[u] = "black";
      if (callback) {
        callback(u);
      }
    }
  }

  /**
   * @description Depth-first search (DFS) algorithm.
   * @param {function} callback The callback function.
   * @returns {void}
   * @memberof Graph
   * @time complexity: O(V + E)
   * @space complexity: O(V)
   * */
  dfs(callback) {
    const color = this.initializeColor();
    for (let i = 0; i < this.vertices.length; i++) {
      if (color[this.vertices[i]] === "white") {
        this.dfsVisit(this.vertices[i], color, callback);
      }
    }
  }

  /**
   * @description DFS visit.
   * @param {any} u The vertex to visit.
   * @param {object} color The color map.
   * @param {function} callback The callback function.
   * @returns {void}
   * @memberof Graph
   * @time complexity: O(V + E)
   * @space complexity: O(V)
   * */
  dfsVisit(u, color, callback) {
    color[u] = "grey";
    if (callback) {
      callback(u);
    }
    const neighbors = this.adjList[u];
    for (let i = 0; i < neighbors.length; i++) {
      const w = neighbors[i];
      if (color[w] === "white") {
        this.dfsVisit(w, color, callback);
      }
    }
    color[u] = "black";
  }

  /**
   * @description Return the shortest path from v to w.
   * @param {any} v The starting vertex.
   * @returns {object} The shortest path.
   * @memberof Graph
   * @time complexity: O(V + E)
   * @space complexity: O(V)
   * */
  BFS(v) {
    const color = this.initializeColor();
    const queue = [];
    const d = {};
    const pred = {};
    queue.push(v);
    for (let i = 0; i < this.vertices.length; i++) {
      d[this.vertices[i]] = 0;
      pred[this.vertices[i]] = null;
    }
    while (queue.length) {
      const u = queue.shift();
      const neighbors = this.adjList[u];
      color[u] = "grey";
      for (let i = 0; i < neighbors.length; i++) {
        const w = neighbors[i];
        if (color[w] === "white") {
          color[w] = "grey";
          d[w] = d[u] + 1;
          pred[w] = u;
          queue.push(w);
        }
      }
      color[u] = "black";
    }
    return {
      distances: d,
      predecessors: pred,
    };
  }

  /**
   * @description Return the shortest path from v to w.
   * @param {any} v The starting vertex.
   * @returns {object} The shortest path.
   * @memberof Graph
   * @time complexity: O(V + E)
   * @space complexity: O(V)
   * */
  BFS2(v) {
    const color = this.initializeColor();
    const queue = [];
    const d = {};
    const pred = {};
    queue.push(v);
    for (let i = 0; i < this.vertices.length; i++) {
      d[this.vertices[i]] = 0;
      pred[this.vertices[i]] = null;
    }
    while (queue.length) {
      const u = queue.shift();
      const neighbors = this.adjList[u];
      color[u] = "grey";
      for (let i = 0; i < neighbors.length; i++) {
        const w = neighbors[i];
        if (color[w] === "white") {
          color[w] = "grey";
          d[w] = d[u] + 1;
          pred[w] = u;
          queue.push(w);
        }
      }
      color[u] = "black";
    }
    return {
      distances: d,
      predecessors: pred,
    };
  }
}
