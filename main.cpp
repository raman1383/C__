#include <bits/stdc++.h>

using namespace std;


int main() {

    array<int, 4> arr{1, 2, 3, 4};
    auto res = count_if(arr.cbegin(), arr.cend(),
                        [](int num) { return num == 3; });
    cout << res << endl;

}