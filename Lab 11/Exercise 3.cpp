#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

// User-defined Sort (Bubble Sort)
void mySort(vector<int> &v) {

    int n = v.size();

    for(int i = 0; i < n-1; i++) {

        for(int j = 0; j < n-i-1; j++) {

            if(v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main() {

    int N;

    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> v1(N), v2(N);

    cout << "Enter elements: " << endl;

    for(int i = 0; i < N; i++) {
        cin >> v1[i];
        v2[i] = v1[i];
    }

    // Time for user-defined sort
    clock_t start1 = clock();

    mySort(v1);

    clock_t end1 = clock();

    double time1 = double(end1 - start1) / CLOCKS_PER_SEC;

    // Time for STL sort
    clock_t start2 = clock();

    sort(v2.begin(), v2.end());

    clock_t end2 = clock();

    double time2 = double(end2 - start2) / CLOCKS_PER_SEC;

    // Print sorted vector
    cout << "\nSorted using Bubble Sort: ";

    for(int x : v1) {
        cout << x << " ";
    }

    cout << "\nTime Taken: " << time1 << " seconds" << endl;

    cout << "\nSorted using STL sort(): ";

    for(int x : v2) {
        cout << x << " ";
    }

    cout << "\nTime Taken: " << time2 << " seconds" << endl;

    return 0;
}
