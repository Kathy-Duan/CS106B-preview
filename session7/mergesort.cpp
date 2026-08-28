#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {8, 3, 5, 1, 9, 2, 7, 4};
    mergesort(nums, 0, nums.size() - 1);
    for (int elem : nums) {
        cout << elem;
    }
    cout << endl;
    return 0;
}

void mergeSort(vector<int>& nums, int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = low + (high - low) / 2;
    mergeSort(nums, low, mid - 1);
    mergeSort(nums, mid, high);
    merge();
}

void merge() {
    
}