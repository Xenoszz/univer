#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct area {
    char areaID[50];
    int Latitude;
    int Longtitude;
    int HasGold;

    area(const char* id, int lat, int lon, int gold)
        : Latitude(lat), Longtitude(lon), HasGold(gold) {
        strcpy(areaID, id);
    }
};

void knn(area* data, int A, int B) {
    float lowdistance[3] = {9999, 9999, 9999};
    float distance[50];
    int minindex[3], Y = 0, N = 0;
    for (int i = 0; i < 15; i++) {
        distance[i] = sqrt(pow(data[i].Latitude - A, 2) + pow(data[i].Longtitude - B, 2));
        if (distance[i] < lowdistance[0] || distance[i] < lowdistance[1] || distance[i] < lowdistance[2]) {
            if (distance[i] <= lowdistance[0]) {
                lowdistance[2] = lowdistance[1];
                lowdistance[1] = lowdistance[0];
                lowdistance[0] = distance[i];
                minindex[0] = i;
            } else if (distance[i] <= lowdistance[1]) {
                lowdistance[2] = lowdistance[1];
                lowdistance[1] = distance[i];
                minindex[1] = i;
            } else {
                lowdistance[2] = distance[i];
                minindex[2] = i;
            }
        }
    }
    cout << "me tong or not?" << endl;
    if (data[minindex[0]].HasGold == 1) {
        Y++;
    } else {
        N++;
    }
    if (data[minindex[1]].HasGold == 1) {
        Y++;
    } else {
        N++;
    }
    if (data[minindex[2]].HasGold == 1) {
        Y++;
    } else {
        N++;
    }
    if (Y > N) {
        cout << "Yes jer Gold" << endl;
    } else {
        cout << "No jer Gold" << endl;
    }
    cout << "nearest 3 position :" << data[minindex[0]].areaID << "," << data[minindex[1]].areaID << "," << data[minindex[2]].areaID << endl;
}

int main() {
    area areaID[15] = {
        {"1", 54, 97, 1},
        {"2", 99, 91, 0},
        {"3", 61, 53, 1},
        {"4", 43, 95, 0},
        {"5", 60, 10, 1},
        {"6", 40, 74, 0},
        {"7", 16, 92, 1},
        {"8", 8, 8, 0},
        {"9", 90, 37, 1},
        {"10", 13, 32, 0},
        {"11", 85, 75, 1},
        {"12", 98, 23, 0},
        {"13", 94, 74, 1},
        {"14", 54, 38, 0},
        {"15", 36, 42, 1}
    };

    int A = 50;
    int B = 50;

    knn(areaID, A, B);

    return 0;
}
