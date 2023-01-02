#include <iostream>
#include <vector>

using namespace std;

int step_func(int y) {
    return y > 0 ? 1 : 0;
}


int main() {

    vector<int> vec{1, 3, 5, 6, 8, 54, 99};
    cout << boolalpha << binary_search(vec.begin(), vec.end(), 4) << endl;

    vector<int> vec2{2, 3, 11, 6, 8, 4, 9};
    sort(vec2.begin(), vec2.end());
    cout << vec2[2] << endl;

    cout<< step_func(-32);

    return 0;
}