#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

struct area {
    char areaID[50];
    int Latitude;
    int Longitude;
    int HasGold;
};

// Function to find nearest neighbors using map function
map<float, int> findNearestNeighbors(area x[], float query[]) {
    map<float, int> distancesMap;
    
    for (int i = 0; i < 15; ++i) {
        float distance = hypot(x[i].Latitude - query[0], x[i].Longitude - query[1]);
        distancesMap[distance] = i;
    }
    
    return distancesMap;
}

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

    // Find nearest neighbors using map function
    map<float, int> distancesMap = findNearestNeighbors(x, query);

    // Sort distancesMap by keys (distances)
    vector<pair<float, int>> sortedDistances(distancesMap.begin(), distancesMap.end());
    sort(sortedDistances.begin(), sortedDistances.end());

    cout << "3 Nearest Neighbors:" << endl;
    for (int i = 0; i < 3; ++i) {
        int index = sortedDistances[i].second;
        string hasGoldString = (x[index].HasGold == 1) ? "Yes" : "No";
        cout << "AreaID: " << x[index].areaID << ", Distance: " << sortedDistances[i].first << ", HasGold: " << hasGoldString << endl;
    }
    
    return 0;
}
