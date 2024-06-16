#include <iostream>
#include <algorithm> 

int main() {
    int nums[100];
    for (int i = 0; i < 100; ++i) {
        nums[i] = i;
    }


    std::sort(nums, nums + 100);


    double median;
    if (100 % 2 == 0) {
        median = (nums[49] + nums[50]) / 2.0; 
    } else {
        median = nums[50]; 
    }

    std::cout << "Median: " << median << std::endl;

    return 0;
}
