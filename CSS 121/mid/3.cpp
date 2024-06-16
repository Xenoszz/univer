#include <iostream>
#include <cmath>

using namespace std;

struct area {
    char areaID[50];
    int Latitude;
    int Longitude;
    int HasGold;
};
int main() {
    area x[15] = {
        {"1", 54, 97, 1},
        {"2", 99, 91, 0},
        {"3", 61, 63, 1},
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
    float query[2] = {52, 25};
    int nearestIndices[3];
    float nearestDistances[3] = {9999,9999,9999};
    for (int i = 0; i < 15; i++) {
        float distance = sqrt(pow(x[i].Latitude - query[0], 2) + pow(x[i].Longitude - query[1], 2));
        if (distance < nearestDistances[0]) {
            nearestDistances[2] = nearestDistances[1];
            nearestIndices[2] = nearestIndices[1];
            nearestDistances[1] = nearestDistances[0];
            nearestIndices[1] = nearestIndices[0];
            nearestDistances[0] = distance;
            nearestIndices[0] = i;
        } else if (distance < nearestDistances[1]) {
            nearestDistances[2] = nearestDistances[1];
            nearestIndices[2] = nearestIndices[1];
            nearestDistances[1] = distance;
            nearestIndices[1] = i;
        } else if (distance < nearestDistances[2]) {
            nearestDistances[2] = distance;
            nearestIndices[2] = i;
        }
    }
    cout << "3 Nearest Neighbors:" << endl;
    for (int k = 0; k < 3; k++) {
        string hasGoldString;
        if (x[nearestIndices[k]].HasGold == 1) {
            hasGoldString = "Yes";
        } else {
            hasGoldString = "No";
        }
        cout << "AreaID: " << x[nearestIndices[k]].areaID << ", Distance: " << nearestDistances[k] << ", HasGold: " << hasGoldString << endl;
    }
    return 0;
}
/*
Time complexity BigO(n)
*/