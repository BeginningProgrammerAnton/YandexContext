#include <string>
#include <set>
#include <iostream>

using namespace std;

int main() {
    string s;
    string j;
    set <char> set_s;
    cin >> s;
    cin >> j;

    int current = 0;

    for (int i = 0; i < s.length(); ++i) {
        set_s.insert(s[i]);
    }
    for (int i = 0; i < j.length(); ++i) {
        if (set_s.find(j[i]) != set_s.end()) {
            ++current;
        }
  
    }
    cout << current;

}