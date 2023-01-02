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



    std::list<double> lst{1.1, 2.2, 3.3, 4.2};
    for (auto& elem : lst) {
        std::cout << elem<<", ";
    }

    return 0;
}