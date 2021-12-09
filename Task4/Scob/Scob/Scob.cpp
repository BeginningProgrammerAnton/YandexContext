#include <iostream>

using namespace std;


void Func(string  cur, int open, int close, int n);
int main()
{
    int n;
    cin >> n;
    Func("", 0, 0, n);
}

void Func(string  cur,int open,int close,int n) {
    if (cur.length() == (2 * n)) {
        cout << cur;
        cout << endl;
        return;
    }
    if (open < n) {
     
        Func(cur + "(", open + 1, close, n);
    }
    if (close < open) {
      
        Func(cur + ")" , open, close + 1, n);
    }

}
