#include <stdio.h>
#include<stdlib.h>
# define MAX_ROW 5
#define MAX_COL 5

typedef struct graph {
	int num_vertix;
	int adj_matrix[MAX_ROW][MAX_COL];
}graph;

void init(graph* g, int num) {
	g->num_vertix = num;

	for (int i = 0; i < MAX_ROW; i++) {  //0으로 초기화
		for (int j = 0; j < MAX_COL; j++)
			g->adj_matrix[i][j] = 0;
	}
}

int adjacent(graph* g, int v, int u) {
	return g->adj_matrix[v][u];
}

void insert_edge(graph* g, int v, int u) {
		g->adj_matrix[v][u] = 1;
}

void delete_edge(graph* g, int v, int u) {
		g->adj_matrix[v][u] = 0;
}

int main() {
	graph g1;
	init(&g1, 5);
	insert_edge(&g1, 0, 1);
	insert_edge(&g1, 0, 3);
	insert_edge(&g1, 1, 2);
	insert_edge(&g1, 3, 4);
	printf("0 1 adjacent? %d\n", adjacent(&g1, 0, 1));
	
	for (int i = 0; i < MAX_ROW; i++) { 
		for (int j = 0; j < MAX_COL; j++) {
			printf("%d ", g1.adj_matrix[i][j]);
		}
		printf("\n");
	}
	delete_edge(& g1, 0, 3);

	printf("\n\n");
	for (int i = 0; i < MAX_ROW; i++) {
		for (int j = 0; j < MAX_COL; j++) {
			printf("%d ", g1.adj_matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}