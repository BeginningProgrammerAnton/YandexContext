#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int cur_num;
    vector <int> array;
    vector <int> res;
    if (n == 0) {
        return 0;
    }
    cin >> cur_num;
    res.push_back(cur_num);
    int cur = res[0];


    for (int i = 1; i < n; ++i) {

        cin >> cur_num;
        if (cur == cur_num) {
            continue;
        }
        res.push_back(cur_num);
        cur = cur_num;

    }

    for (auto i : res) {
        cout << i << endl;
    }

    return 0;
}
