#include <iostream>
#include <vector>
#include <list>
//#include <chrono>

using namespace std;


//struct email {
//    string subject;
//    string body;
//    string from;
////    std::chrono::time_point datetime;
//};

int main() {

//    vector<int> vec;
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(3);
//    for (const auto elem: vec) {
//        std::cout << elem << ", ";
//    }
//
//    std::cout << vec.at(2);
//// is the same as
//    std::cout << vec[2];
//// which is the same as
//    try {
//        vec.at(999999);
//    } catch (std::out_of_range& e) { cout << e.what();}

    std::list<double> lst{1.1, 2.2, 3.3, 4.2};
    for (auto& elem : lst) {
        std::cout << elem<<", ";
    }

    return 0;
}