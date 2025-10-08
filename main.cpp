#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << vec[i] << " ";
        }
        cout << "\n";
        return;
    }

    int start_num = 1;
    if (!vec.empty()) {
        start_num = vec.back() + 1;
    }

    for (int i = start_num; i <= N; i++) {
        vec.push_back(i);
        func(cnt + 1);
        vec.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    func(0);

    return 0;
}

