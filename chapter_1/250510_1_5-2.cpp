#include <iostream>

// using 전역 선언을 통해 cin, cout, endl을 사용 시 std:: 이름 공간에 있는 함수를 사용한다.
// 추천하는 방식
// using std::cin;
// using std::cout;
// using std::endl;

// 혹은 이름공간을 직접 선언함으로 조금 더 간단하게
// std 이름 공간 내부의 모든 함수를 사용할 수 있다
// 추천하지는 않는 방식
using namespace std;

namespace Hybrid {
void HybFunc(void) {
    std::cout << "So simple function!" << std::endl;
    std::cout << "In namespace Hybrid!" << std::endl;
}
}  // namespace Hybrid

// 이름공간의 중첩이 생길 경우 아래와 같이 이름공간의 별칭을 설정할 수 있다.
// namespace AAA {
//     namespace BBB {
//         namespace CCC {
//             int num1;
//             int num2;
//         }  // namespace CCC

//     }  // namespace BBB

// }  // namespace AAA

// namespace ABC = AAA::BBB::CCC;
// AAA::BBB::CCC::num1 = 20;
// AAA::BBB::CCC::num2 = 30;
// cout << ABC::num1 << endl;
// cout << ABC::num2 << endl;

// 전역변수와 지역변수의 이름이 같은 경우 범위 지정연산자를 사용해 전역변수를 특정할 수 있다.
int val = 20;

int main(void) {
    int val = 30;
    val += 3;
    ::val += val;
    cout << val << endl;
    cout << ::val << endl;
    return 0;
}