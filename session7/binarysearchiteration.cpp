#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(const vector<int>& elems, int key, int low, int high);


int main(){
    vector<int> elems1 = {1, 2, 3, 4};
    int key1 = 2;
    cout << binarySearch(elems1, key1, 0, elems1.size() - 1) << endl;
    vector<int> elems2 = {1, 2, 3};
    int key2 = 2;
    cout << binarySearch(elems2, key2, 0, elems2.size() - 1) << endl;
    vector <int> elems3 = {1};
    int key3 = 1;
    cout << binarySearch(elems3, key3, 0, elems3.size() - 1) << endl;
    vector <int> elems4 = {};
    int key4 = 1;
    cout << binarySearch(elems4, key4, 0, elems4.size() - 1) << endl;
    return 0;
}

bool binarySearch(const vector<int>& elems, int key, int low, int high) {
    int mid = low + (high - low) / 2;
    while (low <= high) {
        if (elems[mid] == key) {
            return true;
        }
        else if (key > elems[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
}