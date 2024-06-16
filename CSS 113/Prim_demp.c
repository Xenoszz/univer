#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void primMST(int V, int graph[V][V]);
int minKey(int key[], int mstSet[], int V);
void printMST(int V, int parent[], int graph[V][V]);

// Driver program to test above function
int main() {
    int V,i,j;
    
    printf("input Number of vertices in the graph: ");
    scanf("%d", &V);

    char char_ans[10] = {'a','b','c','d','e','f'};
    int graph[V][V];

    printf("Enter the adjacency matrix:\n");

    for (i = 0; i < V; i++){
        for (j = 0; j < V; j++){
            printf("%c => %c : ",char_ans[i],char_ans[j]);
            scanf("%d", &graph[i][j]);
        }
    }
    // Print the solution
    primMST(V, graph);

    return 0;
}

// Function to construct and print MST for a graph represented using adjacency matrix representation
void primMST(int V, int graph[V][V]) {
    int parent[V]; // เส้นทางที่เชื่อมกัน
    int key[V];    // น้ำหนักรวมของเส้นทางที่สั้นที่สุดจากจุด v ไปยังต้นไม้สแปนนิง (MST)
    int mstSet[V]; // เก็บค่าจุดยอดที่ผ่านผ่านไปแล้ว

    // เซทค่าทุกค่่าใน key ให้เป็น inf และ mstset ให้เป็น 0
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    // จุดเริ่มต้นของ MST
    key[0] = 0;
    parent[0] = -1; // First node is always root of MST

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++) {
        // เลือกจุดที่มีค่า key น้อยที่สุดจากเซตของจุดที่ยังไม่ได้รวมเข้าสู่ MST
        int u = minKey(key, mstSet, V);

        // จุดที่ถูกเลือกนี้ได้เข้าร่วม MST และจะไม่ถูกพิจารณาเพิ่มเติมในการเลือกจุดในรอบถัดไป.
        mstSet[u] = 1;


        for (int v = 0; v < V; v++)
        //เช็คเงื่อนไขเพื่อตรวจสอบว่าจุด v เป็นจุดที่ติดต่อกับจุดที่ถูกเลือก (u) และมีเส้นทางที่เชื่อมระหว่างนั้น (ไม่ใช่ 0) และยังไม่ได้รวมเข้า MST (mstSet[v] == 0) และน้ำหนักของเส้นทางนี้น้อยกว่าค่า key ปัจจุบันของจุด v.
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
                //กำหนด u เป็น parent ของ v ใน MST.
                parent[v] = u;
                //อัปเดตค่า key ของจุด v เป็นน้ำหนักของเส้นทางที่เชื่อม u และ v.
                key[v] = graph[u][v];
            }
    }

    // Print the constructed MST
    printMST(V, parent, graph);
}


// Function to find the vertex with minimum key value
int minKey(int key[], int mstSet[],int V) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {

        //ตรวจสอบว่าจุด v ยังไม่ได้รวมเข้า MST (mstSet[v] == 0) และค่า key ของจุด v น้อยกว่าค่า min.
        if (mstSet[v] == 0 && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }
    //ส่งค่า min_index ออกจากฟังก์ชัน เป็นการบอกว่าจุดที่มีค่า key น้อยที่สุดอยู่ที่ดัชนีไหนในอาร์เรย์ key
    return min_index;
}

// Function to print the constructed MST
void printMST(int V, int parent[], int graph[V][V]) {
    int sum = 0;
    char char_ans[10] = {'a','b','c','d','e','f','g','h'};
    printf("Edge   Weight\n");
    for (int i = 1; i < V; i++){
        sum += graph[i][parent[i]];
        printf("%c => %c    %d \n", char_ans[parent[i]], char_ans[i], graph[i][parent[i]]);
    }
    printf("weight = %d",sum);

}


