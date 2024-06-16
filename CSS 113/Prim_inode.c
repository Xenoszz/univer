#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void primMST(int V, int graph[V][V]);
int minKey(int key[], int mstSet[], int V);
void printMST(int V, int parent[], int graph[V][V]);

int main() {
    int V, m; // V = node m = line
    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &V, &m);
    int graph[V][V];

    printf("Enter the edges and weights (separated by spaces):\n");
    for (int i = 0; i < m; i++) {
        int u, v, w; // u = start v = end w = weight line
        scanf("%d %d %d", &u, &v, &w);
        u--; v--;   // input node n store in array n-1

        graph[u][v] = w;
        graph[v][u] = w;
    }

    // Print the solution
    primMST(V, graph);

    return 0;
}

void primMST(int V, int graph[V][V]) {
    int parent[V]; // เส้นทางที่เชื่อมกัน
    int key[V];    // เก็บค่าน้ำหนักของเส้นทางที่สั้นที่สุดจากจุดเริ่มต้นไปยังแต่ละจุดในกราฟ
    int mstSet[V]; // เก็บค่าแต่ละโหนดที่สามารถหาเส้นทางที่น้อยที่สุดได้แล้ว

    // เซทค่าทุกค่่าใน key ให้เป็น inf และ mstset ให้เป็น 0
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    // จุดเริ่มต้นของ MST
    key[0] = 0; //น้ำหนักรวมของเส้นทางจากจุดต้นทางไปยังตัวมันเองคือ 0
    parent[0] = -1; // กำหนด -1 คือ ไม่มีโหนดไหนเชื่อมต่อ เพื่อเป็นจุดเริ่มต้น 

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++) {
        // เลือกจุดที่มีค่า key น้อยที่สุดจากจุดที่ยังไม่ได้เข้าร่วม MST
        int u = minKey(key, mstSet, V); 

        // จุดที่ถูกเลือกนี้ได้เข้าร่วม MST และจะไม่ถูกพิจารณาเพิ่มเติมในการเลือกจุดในรอบถัดไป.
        mstSet[u] = 1;

        // u คือจุดที่น้อยที่สุด
        for (int v = 0; v < V; v++)
            /*ตรวจสอบว่ามีเส้นทาง (edge) ระหว่างจุด u และ v หรือไม่ && ตรวจสอบว่าจุด v ยังไม่ได้รวมเข้า MST || 
            ตรวจสอบว่าน้ำหนักของเส้นทางที่เชื่อม u และ v น้อยกว่าค่า key[v] ปัจจุบันของจุด v.*/
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

// หาค่า key ที่น้อยที่สุด และยังไม่เข้าร่วม MST
int minKey(int key[], int mstSet[], int V) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        //ตรวจสอบว่าจุด v ยังไม่ได้รวมเข้า MST (mstSet[v] == 0) และค่า key ของจุด v น้อยกว่าค่า min.
        if (mstSet[v] == 0 && key[v] < min) {
            min = key[v]; // อัพเดต ค่า min จาก key ตำแหน่งที่ v
            min_index = v;
        }
    }
    //ส่งค่า min_index ออกจากฟังก์ชัน เป็นการบอกว่าจุดที่มีค่า key น้อยที่สุดอยู่ที่ตำแหน่งไหนในอาร์เรย์ key
    return min_index;
}


void printMST(int V, int parent[], int graph[V][V]) {
    int sum = 0;
    char char_ans[15] = {'a','b','c','d','e','f','g','h','i'};
    printf("Edge   Weight\n");
    for (int i = 1; i < V; i++){ //เริ่มที่ 1 เพราะ ไม่นับโหนดแรกที่ไม่มีทางเชื่อม
        sum += graph[i][parent[i]]; 
        printf("%c <=> %c    %d \n", char_ans[parent[i]], char_ans[i], graph[i][parent[i]]);
        // printf("%d => %d    %d \n", parent[i], i, graph[i][parent[i]]);

    }
    printf("Total Weight = %d\n", sum);
}
