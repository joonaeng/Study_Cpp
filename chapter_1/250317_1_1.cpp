#include <iostream>

void name();
void P1();
void P2();
void P3();
void P4();

int main(void) {
    P4();
    return 0;
}

// C++에서의 입출력 방법
// std:: -> 스탠다드 헤더파일
// cout<< -> 출력
// cin>> -> 입력
// endl; -> 줄바꿈꿈
// 이어서 출력을 사용하는 경우 << 가능

void name() {
    char name[100];
    char lang[200];

    std::cout << "이름은 무엇입니까? ";
    std::cin >> name;

    std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
    std::cin >> lang;

    std::cout << "내 이름은 " << name << "입니다. \n";
    std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
}

void P1() {
    int num1, num2, num3, num4, num5, result;

    std::cout << "1번째 정수 입력: ";
    std::cin >> num1;
    std::cout << "2번째 정수 입력: ";
    std::cin >> num2;
    std::cout << "3번째 정수 입력: ";
    std::cin >> num3;
    std::cout << "4번째 정수 입력: ";
    std::cin >> num4;
    std::cout << "5번째 정수 입력: ";
    std::cin >> num5;

    result = num1 + num2 + num3 + num4 + num5;
    std::cout << "합계: " << result << std::endl;
}

void P2() {
    char name[100];
    char phoneNum[100];

    std::cout << "이름을 입력해주세요 : ";
    std::cin >> name;

    std::cout << "전화번호를 입력해주세요 : ";
    std::cin >> phoneNum;

    std::cout << "이름 : " << name << "\n전화번호 : " << phoneNum << std::endl;
}

void P3() {
    int num;
    std::cout << "구구단 몇 단? : ";
    std::cin >> num;

    for (int i = 1; i < 10; i++) {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }
}

void P4() {
    float pay = 0, sell = 0;
    while (1) {
        std::cout << "판매 금액이 얼마인가요?(종료를 원할 시 -1을 입력) : ";
        std::cin >> sell;

        if (sell == -1) break;

        pay = 50 + ((sell / 100) * 12);

        std::cout << "이번 달 급여 : " << pay << "만원" << std::endl;
    }
}