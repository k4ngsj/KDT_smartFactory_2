// 3_23_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void sil1()
{
    std::cout << "-----실습1-----\n";
    std::string name;
    int age;

    std::cout << "이름을 입력하세요: ";
    std::cin >> name;

    std::cout << "나이를 입력하세요: ";
    std::cin >> age;

    std::cout << "안녕하세요!" + name + "님(" << age << "세)";

}

void sil2()
{
    std::cout << "\n-----실습2-----\n";
    int age;

    std::cout << "나이를 입력하세요: ";
    std::cin >> age;

    if (age >= 1 && age <= 7)
    {
        std::cout << "유아";
    }
    else if (age <= 13)
    {
        std::cout << "초등학생\n";
    }
    else if (age <= 16)
    {
        std::cout << "중학생\n";
    }
    else if (age <= 19)
    {
        std::cout << "고등학생\n";
    }
    else if (age >=200)
    {
        std::cout << "나이가 너무 많습니다..!\n";
    }
    else
    {
        std::cout << "성인\n";
    }
}

void sil3()
{
    std::cout << "\n-----실습3-----\n";
    std::string name;

    std::cout << "이름을 입력하세요: ";
    std::cin >> name;

    if (name == "홍길동")
    {
        std::cout << "남자\n";
    }
    else if(name == "성춘향")
    {
        std::cout << "여자\n";
    }
    else
    {
        std::cout << "모르겠어요.\n";
    }
}

void sil4()
{
    std::cout << "\n-----실습4-----\n";
    int num = 0;
    std::cout << "정수를 입력하세요: ";
    std::cin >>num;

    num%5 == 0? std::cout << num<<"은 5의 배수입니다.\n": std::cout << num << "는 5의 배수가 아니네요ㅜㅜ\n";
}

void sil5()
{
    std::cout << "\n-----실습5-----\n";
    int num1, num2 = 0;
    float result = 0;
    char char1 = ' ';
    std::cout << "연산할 정수 두개를 입력해주세요: ";
    std::cin >> num1 >> num2;

    std::cout << "연산자를 입력해주세요. (+-*/): ";
    std::cin >> char1;
    
    switch (char1)
    {
    case '+':
        std::cout << num1+num2;
        break;
    case '-':
        std::cout << num1 - num2;
        break;
    case '*':
        std::cout << num1 * num2;
        break;
    case '/':
        std::cout << num1 / num2;
        break;
    default:
        std::cout << "err";
    }

}

int main()
{
    /*/
    std::cout << "Hello World!\n";
    int a = 1;
    int b = 2;
    std::cout << a + b;
    std::cout << "\n";

    float c = 8.925;
    float d = 0.2;
    std::cout << c + d<<"\n";

    bool b1 = true;
    std::cout << b1 << "\n";
    b1 = false;
    std::cout << b1 << "\n";
    
    char c1 = 'a';
    std::cout << c1 << "\n";

    std::string str1 = "1";
    std::string str2 = "2";
    str1 = "posco";
    std::cout << str1 + str2 << "\n";

    int intIn;
    std::string strIn;

    std::cin >> intIn;
    std::cin >> strIn;

    //std::cout << intIn+strIn; ///타입이 다른 변수 +로 출력 시 오류
    std::cout << intIn << strIn;
    */

    


    /*
    int a = 5;

    if (a >10)
    {
        std::cout << "a가 10보다 큽니다.";
    }
    else if (a == 5)
    {
        std::cout << "a는 5입니다.";
    }
    else
    {
        std::cout << "a가 10보다 크지 않고 5가 아닙니다.";
    }
    */

    /*
    char abc = 'c';

    switch(abc)
    {
    case 'a':
        std::cout << "a\n";
    case 'b':
        std::cout << "a or b\n";
        break;
    case 'c':
        std::cout << "c\n";
        break;
    default:
        std::cout << "none";
    }
    */
    
    sil1();
    sil2();
    sil3();
    sil4();
    sil5();

    return 0;
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
