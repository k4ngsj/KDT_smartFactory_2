// 3_24_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int add(int n1, int n2)
{
    return n1 + n2;
}
int minus(int n1, int n2)
{
    return n1 - n2;
}
int multiple(int n1, int n2)
{
    return n1 * n2;
}
double divide(int n1, int n2)
{
    return (double)n1 / (double)n2;
}

void sil1()
{
    int n1 = 5;
    int n2 = 10;

    std::cout << n1 << "+" << n2 << "=" << add(n1, n2) << "\n";
    std::cout << n1 << "-" << n2 << "=" << minus(n1, n2) << "\n";
    std::cout << n1 << "*" << n2 << "=" << multiple(n1, n2) << "\n";
    std::cout << n1 << "/" << n2 << "=" << divide(n1, n2) << "\n";


}

void even_or_odd(int n)
{
    if (n % 2)
    {
        std::cout << "홀수\n";
    }
    else
    {
        std::cout << "짝수\n";
    }
}

void sil2()
{
    int n;
    std::cout << "정수 입력 : ";
    std::cin >> n;
    even_or_odd(n);
}

int biggest(int n1, int n2, int n3)
{
    int biggest = n1;
    if (n2 > n3)
    {
        if (n2 > n1)
        {
            biggest = n2;
        }
    }
    else
    {
        if (n3 > n1)
        {
            biggest = n3;
        }
    }
    return biggest;
}

void sil3()
{
    int n1, n2, n3 = 0;
    int bigNum = 0;
    std::cout << "3개 수 입력:";
    std::cin >> n1 >> n2 >> n3;
    std::cout<<"가장 큰 수 : "<< biggest(n1, n2, n3)<<"\n";
}

int main()
{
    sil1();
    sil2();
    sil3();
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
