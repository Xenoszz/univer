#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string Type[15] = { // type MBTI with string
        "ENTP", "INTJ", "ISTJ", "ENTP", "INTP", "ENFP", "ESTP", "ENTJ", "ESTJ", "INTJ", "ENTP", "ENTJ", "INFJ", "INTJ", "ESTJ"
    };

    float x[15][8] = {
        // Ne  Ni  Te  Ti  Se  Si  Fe  Fi 
        {35.4, 31, 33, 30, 38, 31, 34, 31},
        {26, 31, 33, 30, 26, 33, 30, 24},
        {24.4, 30.2, 31, 34, 28, 36, 22, 17},
        {22.2, 25.8, 36, 37, 29, 36, 22, 17},
        {43.2, 34, 36, 36, 39, 38, 40, 35},
        {32.4, 27, 35, 34, 27, 23, 31, 19},
        {28.4, 25.6, 33, 35, 32, 30, 24, 26},
        {30.2, 31.4, 35, 33, 36, 33, 36, 34 },
        {19.4, 12, 25, 28, 25, 23, 23, 22},
        {33.4, 38.6, 29, 29, 26, 37, 24, 25},
        {30, 29.6, 34, 32, 38, 28, 33, 22},
        {29, 22.8, 40, 28, 27, 31, 29, 19},
        {25.5, 33, 28, 34, 37, 27, 28, 24},
        {29.8, 26.4, 28, 36, 29, 30, 33, 28},
        {18.4, 15, 30, 33, 33, 31, 26, 23}
    };

    float query[8] = {
        32, 32, 27, 36, 29, 31, 28, 23
        
    };

    // เก็บระยะทางและ index ของประเภทที่ใกล้เคียงที่สุด 3 ประเภท
    float distances[3];
    int indices[3];

    for (int k = 0; k < 3; k++) {
        float minDistance = INFINITY;
        int minIndex = -1;

        for (int i = 0; i < 15; i++) {
            float distance = 0;
            for (int j = 0; j < 8; ++j) {
                distance += pow(x[i][j] - query[j], 2);
            }
            distance = sqrt(distance);

            if (distance < minDistance && i != indices[0] && i != indices[1] && i != indices[2]) {
                minDistance = distance;
                minIndex = i;
            }
        }

        distances[k] = minDistance;
        indices[k] = minIndex;
    }

    // แสดงผลลัพธ์
    cout << " 3 Nearest Neighbors:" << endl;
    for (int k = 0; k < 3; k++) {
        cout << "Type: " << Type[indices[k]] << ", Distance: " << distances[k] << endl;
    }

    return 0;
}

