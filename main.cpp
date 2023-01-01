// C++ program to find the next optimal move for
// a player

#include <iostream>
#include "minimax.hh"

#include <string>

//Part A: define a primary template
template<class T>
T app_max(T a, T b) { return (a > b ? a : b); }

//Part B: explicit specialization for T=std::string,
template<>
std::string app_max<std::string>(std::string a, std::string b) {
    return (a[0] > b[0] ? a : b);
}
//part C: test function


template<typename T>
struct X {
    X(T init) : m(init) {}

    T increase() { return ++m; }

    T m;
};

template<> //Note: no parameters inside <>, it tells compiler
//"hi i am a fully specialized template"
struct X<char> { //Note: <char> after X, tells compiler
// "Hi, this is specialized only for type char"
    X(char init) : m(init) {}

    char increase() { return (m < 127) ? ++m : (m = -128); }

    char toUpperCase() {
        if ((m >= 'a') && (m <= 'z')) m += 'A' - 'a';
        return m;
    }

    char m;
};


int main() {
//    char board[3][3] =
//            {
//                    {'x', 'o', 'x'},
//                    {'o', 'o', 'x'},
//                    {'_', '_', '_'}
//            };
//
//    Move bestMove = findBestMove(board);
//
//    printf("The Optimal Move is :\n");
//    printf("ROW: %d COL: %d\n\n", bestMove.row,
//           bestMove.col);

//    string a = "abc", b="efg";
//    cout << app_max<int>(5, 6) << endl; //line A
//    cout << app_max<string>(a, b) << endl; //line B
//
//    string x="abc", y="efg";
//    cout << app_max(x,y)<<endl;

    X<int> x1(5); //line A
    std::cout << x1.increase() << std::endl;
    X<char> x2('b'); //line B
    std::cout << x2.toUpperCase() << std::endl;

    return 0;
}