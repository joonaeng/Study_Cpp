#include <iostream>
void funcOverloading();
void P1();

// 함수 오버로딩
// 기존의 C에서는 함수 이름이 똑같을 경우 선언이 불가능했지만
// C++에서는 함수 오버로딩을 통해 함수 이름이 같은 함수 선언이 가능하다
void MyFunc(void)
{
    std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
    std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
    std::cout << "MyFunc(int a, int b) called" << std::endl;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(double *a, double *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    P1();
    return 0;
}

void funcOverloading()
{
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);
}

void P1()
{
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;

    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2 << std::endl;

    double dbl1 = 1.111, dbl2 = 5.555;
    swap(&dbl1, &dbl2);
    std::cout << dbl1 << ' ' << dbl2 << std::endl;
}