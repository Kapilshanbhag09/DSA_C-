# GRAPH
* Graph is a data structure which is represented as a finite set of nodes and edges. 
* These nodes are called vertices and edges are used to connect two vertices.
## Introduction
### Some Terminologies
* Adjecent Vertices: Vertices which are directly connected
* Degree: Numbeer of edges connected to a vertices
* Path: Set of edges from source node to destination node
* Connected Graph: A graph in which all nodes can be reaced from node
* Subgraph: Sub graph is a part of graph
* Tree: Output of graph traversal
* Forest: Collection of trees
* Minimum Spanning Tree: Graph in which all nodes are traversed with minimum weight
### Types of egdes-Unweighted Graphs
* 1)Directed Edges
* 2)Undirected graph
### Types of edges- Weighted Graphs
* 1)Unidirected Weighted Edges
* 2)Directed Weighted Edges
* 3)Bidirectional Weighted Edges
## --------------------------------------
## Implementing Graphs
* Edge LIst
* Adjancency Matrix
* Adjancency List
### Edge List
* V={a,b,c,d,e}
* E={(a,b),(a,c),(a,d),(b,e),(c,d),(c,e),(d,e)}
### Adjacency Matrix
* Stored as VxV where V:no of vertices
* Not memory efficient.
### Adjacency List
* Mostly and widely used
* Memory Efficient
* 0->1,4; 1->2,3,4,0; 2->1,3; 3->2,1,4; 4->0,1,3
## --------------------------------------
## Graph Traversal
### Breadth First Search
* STart from souce node, then direct neightbouring nodes of source and then next layer and so on
* Iterative Approch
* Uses Queue to maintain FIFO ordering
* Time complexity:O(V+E)(using adjecency list)
* Space complexity: O(V)
### Depth First Search
### To Learn Graph Algorithms
* Dijkstras Algorithm
* Floyd Warshall Algorithm
* Prims Algorithms
* Kruskal Algorithms
* Breadth First Search
* Depth First Search
* Kosaraju's Algorithm
* Bellman Ford Algorithm
* Topological Sort
* Johnson's Algorithm