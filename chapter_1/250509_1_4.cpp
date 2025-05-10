#include <iostream>

// 인라인 함수
// inline을 통해 실행 속도를 높일 수 있다
// 기존 함수 = 함수 선언 -> 메인문 호출
// 인라인 함수의 경우
// std::cout<<SQUARE(12)<<std::endl;
// 이 문장이 아래와 같다다
// std::cout<<12*12<<std::endl;
// 단 인라인 함수의 경우 선언시 자료형에 의존하게 되는데
// 함수 오버로딩으로 해결할 수 있지만 기존 함수의 장점을 없애는 행위다
// 그래서 아래와 같이 template를 사용하여 데이터 손실을 발생하지 않게 할 수 있다.

template <typename T>
inline T SQUARE(T x)
{
    return x * x;
}

int main(void)
{
    std::cout << SQUARE(5.5) << std::endl;
    std::cout << SQUARE(12) << std::endl;
    return 0;
}