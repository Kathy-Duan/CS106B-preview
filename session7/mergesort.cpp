#include <iostream>
#include <vector>

using namespace std;


void mergeSort(vector<int>& nums, int low, int high);
void merge(const vector<int>& left, const vector<int>& right, vector<int>& result);

int main() {
    vector<int> nums = {8, 3, 5, 1, 9, 2, 7, 4};
    mergeSort(nums, 0, nums.size() - 1);
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
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    vector<int> left(nums.begin() + low, nums.begin() + mid + 1);
    vector<int> right(nums.begin() + mid + 1, nums.begin() + high + 1);
    vector<int> result(left.size() + right.size());
    merge(left, right, result);
    for (int i = 0; i < result.size(); i++) {
        nums[low + i] = result[i];
    }
}

void merge(const vector<int>& left, const vector<int>& right, vector<int>& result) {
    int i = 0; 
    int j = 0; 

    int k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            result[k++] = left[i++];
        }
        else {
            result[k++] = right[j++];
        }
    }
    while (i < left.size()) {
        result[k++] = left[i++];
    }
    while (j < right.size()) {
        result[k++] = right[j++];
    }
}
