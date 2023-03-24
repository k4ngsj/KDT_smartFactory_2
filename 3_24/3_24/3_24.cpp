// 3_24.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void gugudan(int n)
{
    std::cout << "----" << n << "단 ----\n";
    for (int i = 1; i < 10; i++)
    {
        std::cout << n << " * " << i << " = " << n * i << "\n";
    }
}

void sil1()
{
    //(1)5단 출력
    std::cout << "5단 출력\n";
    gugudan(5);

    //(2)1~9단 출력
    std::cout << "1~9단 출력\n";
    for (int i = 1; i < 10; i++)
    {
        gugudan(i);
    }
}

void sil2()
{
    int n;
    std::cout << "1부터 n까지의 합 구하기\n숫자(양의 정수)를 입력하세요 : ";
    std::cin >> n;
    std::cout << "1부터 " << n << "까지의 합은 : " << n * (n - 1) / 2<<"\n";
}

void whileGugudan(int n)
{
    std::cout << "----" << n << "단 ----\n";
    int i = 1;
    while (i < 10)
    {
        std::cout << n << " * " << i << " = " << n * i << "\n";
        i++;
    }
    
}
void sil3_1()
{
    //(1)5단 출력
    std::cout << "5단 출력 using while\n";
    gugudan(5);

    //(2)1~9단 출력
    std::cout << "1~9단 출력\n";
    int i = 1;
    while (i < 10) {
        gugudan(i);
        i++;
    }
}

void sil3_2()
{
    int n;
    std::cout << "1부터 n까지의 합 구하기\n숫자(양의 정수)를 입력하세요 : ";
    std::cin >> n;
    std::cout << "1부터 " << n << "까지의 합은 : " << n * (n - 1) / 2 << "\n";
}
void sil3()
{
    sil3_1();
    sil3_2();
}

void sil4()
{
    std::cout << "사용자가 입력한 숫자 더하기\n";

    int inp = -1;
    int total = 0;

    while (inp != 0)
    {
        std::cout << "숫자를 입력하세요 (0: exit) : ";
        std::cin >> inp;
        total += inp;
    }
    std::cout << "사용자가 입력한 수의 합은 : "<< total <<"\n";
}

void sil5()
{
    int inp = 0;
    std::cout << "input: ";
    std::cin >> inp;
    std::cout << "output: \n";
    for (int i = 0; i < inp; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

int main()
{
    //std::cout << "Hello World!\n";
    sil1();
    sil2();
    sil3();
    sil4();
    sil5();
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
