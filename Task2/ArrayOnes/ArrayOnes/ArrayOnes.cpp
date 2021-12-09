#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    int cur_num;
    vector <int> array;
    int res = 0;
    int cur = 0;


    for (int i = 0; i < n; ++i) {

        cin >> cur_num;
        array.push_back(cur_num);
    }


    for (auto i : array) {
        if (i == 1) {
            ++cur;
            res = max(res, cur);
            continue;
        }
        cur = 0;
    }
    cout<< res;



}