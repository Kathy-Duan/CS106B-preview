#include <iostream>
#include <vector>


using namespace std;


double mean(vector<double> & data);

int main() {
    vector<double> data1 = {1.0, 2.0, 3.5};
    cout << mean(data1) << endl;
    vector<double> data2 = {1.0};
    cout << mean(data2) << endl;
    return 0;
}


double mean(vector<double> & data) {
    double sum = 0;
    for (int i = 0; i < data.size(); i++) {
        sum += data[i];
    }
    return sum / data.size();
}