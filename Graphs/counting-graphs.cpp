/*
Return the number of undirected graphs that can be formed using 'N' vertices,
allowing for disconnected components within the graph. 
Self-edges and multiple edges are not allowed.

Problem link - https://www.codingninjas.com/studio/problems/counting-graphs_8357237
*/

int countingGraphs(int N) {
    return pow(2,N*(N-1)/2);
}

/*
Appraoch:

N vertices = N(N-1)/2 max edges
Therefore, 2^(max edges) possible graphs
*/