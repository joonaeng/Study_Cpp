#include <iostream>

// 매개변수의 디폴트 값을 선언 할 수 있음
// 아래의 경우 Adder에 입력이 없을 경우 1과 2로 디폴트 값이 설정된다
// 만약 변수를 넣어 줄 경우 디폴트 값이 변경된다
// 변수는 왼쪽 인자값부터 채워지기 때문에 디폴트 값 선언의 경우 오른쪽 값부터 채워야 한다
// ex) int num1 = 1, int num2 = 2  가능
//     int num1, int num2 = 2      가능
//     int num1 = 1, int num2      불가능 -> 이의 경우 변수 입력이 2개 이상이면 가능할것으로 예상
int Adder(int num1 = 1, int num2 = 2) {
    return num1 + num2;
}

void P1() {
    std::cout << Adder() << std::endl;
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(3, 5) << std::endl;
}

int BoxVolume(int length, int width = 1, int height = 1) {
    return length * width * height;
}

void P2() {
    std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
    std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
    std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
}

int main(void) {
    P2();
    return 0;
}