#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Structure for representing a graph
typedef struct Graph {
    int num_vertices;
    int adj_list[MAX_VERTICES][MAX_VERTICES];
    int edge_count[MAX_VERTICES];
} Graph;

// Function to create a graph
Graph* create_graph(int num_vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->num_vertices = num_vertices;
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            graph->adj_list[i][j] = 0;
        }
        graph->edge_count[i] = 0;
    }
    return graph;
}

// Function to add an edge to the graph
void add_edge(Graph* graph, int u, int v) {
    graph->adj_list[u][v] = 1;
    graph->edge_count[u]++;
}

// Function to print Eulerian circuit using Hierholzer's algorithm
void print_circuit(Graph* graph) {
    int stack[MAX_VERTICES], top = -1;
    int circuit[MAX_VERTICES * MAX_VERTICES], circuit_idx = 0;

    if (graph->num_vertices == 0) {
        return; // Empty graph
    }

    stack[++top] = 0; // Start from any vertex
    int curr_v = 0;

    while (top != -1) {
        if (graph->edge_count[curr_v] > 0) {
            stack[++top] = curr_v;
            int next_v = -1;
            for (int i = 0; i < graph->num_vertices; i++) {
                if (graph->adj_list[curr_v][i] == 1) {
                    next_v = i;
                    break;
                }
            }
            graph->adj_list[curr_v][next_v] = 0; // Remove the edge
            graph->edge_count[curr_v]--;
            curr_v = next_v;
        } else {
            circuit[circuit_idx++] = curr_v;
            curr_v = stack[top--];
        }
    }

    // Print the circuit in reverse order
    for (int i = circuit_idx - 1; i >= 0; i--) {
        printf("%d ", circuit[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    // Input Graph 1
    Graph* graph1 = create_graph(3);
    add_edge(graph1, 0, 1);
    add_edge(graph1, 1, 2);
    add_edge(graph1, 2, 0);
    print_circuit(graph1);

    // Input Graph 2
    Graph* graph2 = create_graph(7);
    add_edge(graph2, 0, 1);
    add_edge(graph2, 0, 2);
    add_edge(graph2, 1, 2);
    add_edge(graph2, 1, 3);
    add_edge(graph2, 1, 4);
    add_edge(graph2, 1, 0);
    add_edge(graph2, 2, 0);
    add_edge(graph2, 2, 1);
    add_edge(graph2, 2, 3);
    add_edge(graph2, 2, 5);
    add_edge(graph2, 3, 1);
    add_edge(graph2, 3, 2);
    add_edge(graph2, 3, 4);
    add_edge(graph2, 3, 5);
    add_edge(graph2, 4, 1);
    add_edge(graph2, 4, 3);
    add_edge(graph2, 4, 5);
    add_edge(graph2, 4, 6);
    add_edge(graph2, 5, 3);
    add_edge(graph2, 5, 4);
    add_edge(graph2, 5, 6);
    add_edge(graph2, 6, 4);
    add_edge(graph2, 6, 5);
    print_circuit(graph2);

    return 0;
}