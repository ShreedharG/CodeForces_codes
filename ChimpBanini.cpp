#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_time;
    cin >> num_time;
    while (num_time--) {
        int n;
        cin >> n;

        long long R = 0, S = 0;
        deque<int> dq;
        bool rev = false;

        for (int i = 0; i < n; i++) {
            int op;
            cin >> op;

            if (op == 3) {
                int ele;
                cin >> ele;
                if (!rev) dq.push_back(ele);
                else dq.push_front(ele);

                int m = dq.size();
                S += ele;
                R += 1LL * m * ele;
            } 
            else if (op == 2) {
                int m = dq.size();
                R = 1LL * (m + 1) * S - R;
                rev = !rev; // direction flip
            } 
            else {
                int ele;
                int m = dq.size();

                if (!rev) {
                    ele = dq.back();
                    dq.pop_back();
                    dq.push_front(ele);
                } else {
                    ele = dq.front();
                    dq.pop_front();
                    dq.push_back(ele);
                }

                R = R + S - 1LL * m * ele;
            }

            cout << R << "\n";
        }
    }
    return 0;
}
