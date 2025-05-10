#include <iostream>

// 이름공간은은 헤더파일 혹은 클래스 라이브러리의 느낌이다
// std가 스탠다드 라이브러리라면 이름공간간 라이브러리를 생성 이후에 사용하는 방식으로
// 협업 시 사용하는 함수 이름이 같은 경우 함수 오버로딩으로 분리가 안될때
// 이름공간을 사용하여 분리가 가능하다

// 이 방식은 가장 기초적인 방식이다.
// namespace BestComImpl
// {
//     void SimpleFunc(void)
//     {
//         std::cout << "BestCom이 정의한 함수" << std::endl;
//     }
// } // namespace BestComImpl

// namespace ProgComImpl
// {
//     void SimpleFunc(void)
//     {
//         std::cout << "ProgCom이 정의한 함수" << std::endl;
//     }
// } // namespace ProgComImpl

// 아래의 방식은 함수의 선언과 정의를 구분하는 방법이다
//  namespace BestComImpl
//  {
//      void SimpleFunc(void);
//  }

// namespace ProgComImpl
// {
//     void SimpleFunc(void);
// } // namespace ProgComImpl

// void BestComImpl::SimpleFunc(void)
// {
//     std::cout << "BestCom이 정의한 함수" << std::endl;
// }

// void ProgComImpl::SimpleFunc(void)
// {
//     std::cout << "ProgCom이 정의한 함수" << std::endl;
// }

// 아래와 같이 같은 이름공간에 정의된 함수의 경우 선언 시 이름공간을 명시할 필요가 없다
// namespace BestComImpl
// {
//     void SimpleFunc(void);
// } // namespace BestComImpl

// namespace BestComImpl
// {
//     void PrettyFunc(void);
// } // namespace BestComImpl

// namespace ProgComImpl
// {
//     void SimpleFunc(void);
// } // namespace ProgComImpl

// void BestComImpl::SimpleFunc(void)
// {
//     std::cout << "BestCom이 정의한 함수" << std::endl;
//     PrettyFunc();
//     ProgComImpl::SimpleFunc();
// }

// void BestComImpl::PrettyFunc(void)
// {
//     std::cout << "So pretty" << std::endl;
// }

// void ProgComImpl::SimpleFunc(void)
// {
//     std::cout << "ProgCom이 정의한 함수" << std::endl;
// }

//이름공간의 중첩 시 아래와 같이 호출하면 불러올 수 있다.
namespace Parent
{
    int num = 2;

    namespace SubOne
    {
        int num = 3;
    } // namespace

    namespace SubTwo
    {
        int num = 4;
    } // namespace

} // namespace Parent

int main()
{
    std::cout << Parent::num << std::endl;
    std::cout << Parent::SubOne::num << std::endl;
    std::cout << Parent::SubTwo::num << std::endl;
    return 0;
}