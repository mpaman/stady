#include <stdio.h>
#include <limits.h>

#define V 7

int minKey(int key[], int mstSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        if (mstSet[v] == 0 && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}

void printMST(int parent[], int graph[V][V]) {
    printf("Edge-Edge \tWeight\n");
    for (int i = 1; i < V; i++) {
        char a;
        switch (parent[i]) {
            case 1:
                a = 'B';
                break;
            case 2:
                a = 'C';
                break;
            case 3:
                a = 'D';
                break;
            case 4:
                a = 'E';
                break;
            case 5:
                a = 'F';
                break;
            case 6:
                a = 'G';
                break;
            case 0:
                a = 'A';
                break;
            default:
                break;
        }
        printf("%c - %c\t\t%d \n", a, 'A' + i, graph[i][parent[i]]);
    }
}

void primMST(int graph[V][V]) {
    int parent[V];
    int key[V];
    int mstSet[V];
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = 1;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printMST(parent, graph);
}
int main() {
    int graph[V][V] = {
        {0, 3, 0, 0, 0, 0, 2},//A
        {3, 0, 6, 0, 0, 0, 1},//B
        {0, 6, 0, 2, 9, 4, 8},//C
        {0, 0, 2, 0, 7, 0, 0},//D
        {0, 0, 9, 7, 0, 8, 0},//E
        {0, 0, 4, 0, 8, 0, 5},//F
        {2, 1, 0, 0, 0, 5, 0}//G
    };

    primMST(graph);

    return 0;
}
