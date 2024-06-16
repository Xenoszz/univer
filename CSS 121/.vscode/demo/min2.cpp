#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}


int quickselect(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        int pivotIndex = partition(arr, low, high);
        if (pivotIndex == k) {
            return arr[pivotIndex];
        } else if (pivotIndex < k) {
            return quickselect(arr, pivotIndex + 1, high, k);
        } else {
            return quickselect(arr, low, pivotIndex - 1, k);
        }
    }
    return -1; 
}


double findMedian(vector<int>& data) {
    int n = data.size();
    if (n % 2 == 0) {
        int median1 = quickselect(data, 0, n - 1, n / 2);
        int median2 = quickselect(data, 0, n - 1, n / 2 - 1);
        return (median1 + median2) / 2.0;
    } else {
        return quickselect(data, 0, n - 1, n / 2);
    }
}


vector<int> findMode(vector<int>& data) {
    unordered_map<int, int> freqMap;
    for (int num : data) {
        freqMap[num]++;
    }
    int maxFreq = 0;
    for (const auto& pair : freqMap) {
        maxFreq = max(maxFreq, pair.second);
    }
    vector<int> modes;
    for (const auto& pair : freqMap) {
        if (pair.second == maxFreq) {
            modes.push_back(pair.first);
        }
    }
    return modes;
}

int main() {
    
    vector<int> data;
    for (int i = 0; i < 100; ++i) {
        data.push_back(i);
    }
    random_shuffle(data.begin(), data.end()); 
 
    double median = findMedian(data);
    cout << "Median: " << median << endl;

   
    vector<int> modes = findMode(data);
    cout << "Mode: ";
    for (int mode : modes) {
        cout << mode << " ";
    }
    cout << endl;

    return 0;
}
