#include <iostream>
#include <vector>


using namespace std;

void selectionSort(vector<int>& nums);

int main() {
    vector<int> nums1 = {1, 3, 4, 2};
    selectionSort(nums1);
    for (int elem : nums1) {
        cout << elem;
    }
    cout << endl;
    vector<int> nums2 = {1};
    selectionSort(nums2);
        for (int elem : nums2) {
        cout << elem;
    }
    cout << endl;
    vector<int> nums3 = {3, 1};
    selectionSort(nums3);
        for (int elem : nums3) {
        cout << elem;
    }
    cout << endl;
    vector<int> nums4 = {4, 3, 1};
    selectionSort(nums4);
        for (int elem : nums4) {
        cout << elem;
        }
    cout << endl;
    return 0;
}

void selectionSort(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int smallestIndex = i;
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] < nums[smallestIndex]) {
                smallestIndex = j;
            }
        }
       int temp = nums[i];
       nums[i] = nums[smallestIndex];
       nums[smallestIndex] = temp;
    }
}