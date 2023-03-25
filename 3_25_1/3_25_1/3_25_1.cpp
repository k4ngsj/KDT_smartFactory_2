// 3_25_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void learn1()
{
    //변수 선언과 초기화
    int num = 0;//변수 선언 초기화 한줄에 함
    int num1;//변수의 선언
    num1 = 0;//변수의 초기화, 할당

    //배열의 기본
    string str = "";
    string str1[] = { "abc","def","ghi" };//선언할 때 크기가 정해져야 함, 단 배열 크기 지정 안해도 선언과 초기화 동시에 하면 오류 X

    string str2[3];//배열 크기 지정 안할 시 오류
    str2[0] = "apple";
    str2[1] = "banana";
    str2[2] = "pineapple";
    //str2[3] = "kitkat";//index 초과 오류- 오버플로 발생


    //배열의 출력
    cout << str2 << endl;//배열을 출력시키면 주소값이 출력됨
    cout << sizeof(str2) << endl;//배열 용량 반환 ex: int[3] = 4byte * 3 = 12byte -> 따라서 sizeof(std::string)으로 나눠야 배열 길이 나옴

    for (int i = 0; i < sizeof(str2)/sizeof(string); i++)
    {
        cout << str2[i] << endl;//std::endl은 \n과 같다
    }

    //다차원 배열
    int num2d[2][3] = { {1,2,3},{4} };//[줄 갯수][한 줄에 들어가는 원소 개수] -> 2행 3열

    char char2d[2][4] = { {'a','b','c','d'},{'e','f','g','h'}};
    /*
    for (int i = 0; i < sizeof(char2d) / sizeof(char2d[0]); i++)
    {
        for (int j = 0; j < sizeof(char2d[0]) / sizeof(char); j++)
            cout << char2d[i][j];
        cout << endl;
    }
    */
    for (int i = 0; i < sizeof(num2d) / sizeof(num2d[0]); i++)
    {
        for (int j = 0; j < sizeof(num2d[0]) / sizeof(int); j++)
            cout << num2d[i][j]<<" ";
        cout << endl;
    }

    //for-each문
    int numarr[3] = { 4, 6, 9 };

    //for(자료형 변수:배열이름)
    //python의 for i in list와 유사

    //for (int nth : numarr)
    for (auto nth : numarr)//auto면 알아서 자료형 배정해줌
    {
        cout << nth << ' ';
    }cout << endl;

    for (auto &n : numarr)
    {
        cin >> n;
    }

    for (auto nth : numarr)//auto면 알아서 자료형 배정해줌
    {
        cout << nth << ' ';
    }cout << endl;


    //for-each 2D array
    for (auto &nth : char2d)
    {
        for (auto mth : nth)
            cout << mth << ' ';
        cout << endl;
    }

}

void printCity(string city[])
{

}

void sil1()
{
    string city[5] = { "Seoul","NewYork","London","Vancouver","Tokyo" };
    for (auto c : city)
    {
        cout << c << endl;
    }//cout << endl;
    //printCity(city);
}

void sil2()
{
    string city[5] = {};
    cout << "도시 5개 입력 : ";
    for (auto &c : city)
    {
        cin >> c;
    }

    for (auto c : city)
    {
        cout << c <<endl;
    }//cout << endl;
    //printCity(city);
}

void sil3()
{
    double grade[5];
    
    for (int i = 0;i<sizeof(grade)/sizeof(double);i++)
    {
        cout << i+1 <<"번 학생의 성적을 입력하세요 : ";
        cin >> grade[i];
        cout << endl;
    }
    double total = 0;
    for (auto grad : grade)
    {
        total += grad;
    }
    cout << "성적 평균:" << total * sizeof(double) / sizeof(grade) << endl;
}

void additionsil()
{
    /*
    학생 3명의 국어 성적과 수학 성적을 사용자로부터 입력받아서 배열에 저장 후,
    학생들의 국어 성적의 평균, 수학 성적의 평균을 산출하는 프로그램 작성.
    */

    double KorMathScore[3][2];
    for (int i = 0; i < sizeof(KorMathScore) / sizeof(KorMathScore[0]); i++)
    {
        cout << i << "번째 학생 국어 성적과 수학 성적 입력 : ";
        cin >> KorMathScore[i][0] >> KorMathScore[i][1];
    }
    double KorTotal = 0;
    double MathTotal = 0;

    for (int i = 0; i < sizeof(KorMathScore) / sizeof(KorMathScore[0]); i++)
    {
        KorTotal += KorMathScore[i][0];
        MathTotal += KorMathScore[i][1];
    }

    cout << "국어 평균 성적: " << KorTotal/(sizeof(KorMathScore)/ sizeof(KorMathScore[0])) << ", 수학 평균 성적: " << MathTotal / (sizeof(KorMathScore) / sizeof(KorMathScore[0])) << endl;
}

void additionalsil2()
{
    int correct[3] = { 1, 8, 5 };
    int user[3];
    cout << "1~9사이의 숫자 3개를 입력하세요 : ";
    for (auto& input : user)
    {
        cin >> input;
    }

    int hit = 0;
    for (auto input : user)
    {
        for (auto cor : correct)
        {
            if (input == cor)
                hit++;
        }
    }
    cout << hit << "개 맞춤!\n";
}

void learn2()
{
    //가변 배열 만들기 -> 동적 배열과 포인터
    //아래 변수로 크기를 정의 시 오류남-> 컴파일때 숫자가 안정해져있기 때문
    /*
    int size;
    cin >> size;
    int arr[size];//오류
    */

    //그래서 포인터를 사용
    //포인터: 메모리의 주소를 저장하는 변수
    int n = 3;
    int n2 = 5;
    int* p = &n;
    //여기서 &은 주소값을 의미

    //참고: 참조변수-> 포인터랑 약간은 다른개념
    int& chamjo = n;//참조변수 -> 닉네임같은것(n에 chamjo라는 별명을 붙인 꼴)

    cout << p << endl;//그냥 변수이름으로 접근 시 n의 주소값 나옴
    cout << *p << endl;//*붙일 시 p가 가리키고 있는 n에 담긴 값이 나옴

    p = &n2;
    cout << p << endl;//그냥 변수이름으로 접근 시 n의 주소값 나옴
    cout << *p << endl;//*붙일 시 p가 가리키고 있는 n에 담긴 값이 나옴

    n2 = 10;
    cout << p << endl;//그냥 변수이름으로 접근 시 n의 주소값 나옴
    cout << *p << endl;//*붙일 시 p가 가리키고 있는 n에 담긴 값이 나옴

    *p = 20;
    cout << p << endl;//그냥 변수이름으로 접근 시 n의 주소값 나옴
    cout << *p << endl;//*붙일 시 p가 가리키고 있는 n에 담긴 값이 나옴

    int& nchamjo = n;
    nchamjo = 6;
    cout << n << endl;

    string str = "abc";
    string* strp = &str;

    cout << strp << endl;
    cout << *strp << endl;


    ///////////////////////////////////////////////////////////////////
    //지금까지 배운 것들은 정적 메모리 변수들이다
    //동적 메모리 할당

    //동적 메모리는 힙 영역에 저장됨 -> 직접 할당과 해제 해야됨
    //정적 메모리는 스택 영역 -> 해제 필요 없음

    //이건 정적메모리
    int staticint = 3;
    int staticintP = staticint;

    //동적 메모리
    int* dynamicmem = new int;
    delete dynamicmem;

    //아래거 쓸려고 지금 동적 정적 하는거
    /*
    int size;
    cin >> size;
    int arr[size];//오류
    */

    int size2;
    cin >> size2;//배열 사이즈 입력
    int* dynamicarr = new int[size2];//동적으로 선언 성공

    for(int i = 0;i<size2;i++)
    {
        dynamicarr[i] = i + 1;
        cout << dynamicarr[i] << endl;
    }
    delete[] dynamicarr;//해제 필수, 배열의 경우 del뒤에 [] 꼭 붙이기. 아님 첫번째꺼만 날라감

}

void learn3()
{
    int size;
    cin >> size;//배열 사이즈 입력

    //nxn 행렬 만들기
    int** arr2d = new int* [size];

    for (int i = 0; i < size; i++)
    {
        arr2d[i] = new int[size];
        for (int j = 0; j < i; j++)
        {
            arr2d[i][j] = 1;
        }
    }




    //2D array 할당 해제 방법
    for (int i = 0; i < size; i++)
    {
        delete[] arr2d[i];//중괄호 해제하기
    }
    delete[] arr2d;//중괄호 삭제 후 대괄호 삭제


}

void learn3_additionalcode()
{

        // 포인터 : 메모리 주소를 저장하는 변수
        // 포인터를 이용하면, 동적 메모리를 생성할 수 있다.
        // 포인터가 나오기 전에 배운 변수, 배열 -> 정적 메모리. int n; int arr[3];
        // 힙 영역 : 동적 메모리가 저장됨. 할당과 해제를 직접 관리해줘야 함.
        // 스택 영역 : 정적 메모리가 저장됨. 빌드 할 때, 크기가 지정이 되어 있어야 함.
        // 주의. 포인터를 이용하면 동적 메모리를 생성할 수 있다는 거지, 
        // 포인터를 이용한 모든 변수가 동적 메모리는 아님!

        //int* p = new int;
        //*p = 5;
        //delete p;

        int num;
        std::cout << "크기를 입력하세요";
        std::cin >> num; // 5
        //int arr[num]; 
        int* arr = new int[num];

        for (int i = 0; i < num; i++) {
            arr[i] = i + 1;
        }
        //arr = {1,2,3,4,5}

        for (int i = 0; i < num; i++) {
            std::cout << arr[i] << " ";
        }
        delete[] arr;

        std::cout << std::endl;

        std::string* str = new std::string[num];
        //std::string ch = 65;
        for (int i = 0; i < num; i++) {
            str[i] = 65 + i; // 'A' 'B'
        }

        for (int i = 0; i < num; i++) {
            std::cout << str[i] << " ";
        }

        delete[] str;


        //num * num 행렬
        //int* arr1 = new int[num]; // 일차원 동적 배열
        //{ int, int, int }
        int** arr2 = new int* [num]; // num이 5일 경우
        //{ {}, {}, {}, {}, {} }

        for (int i = 0; i < num; i++) {
            arr2[i] = new int[num];
            //{ { , , , , }, { , , , , }, { , , , , }, { , , , , }, { , , , , } }
        }

        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                arr2[i][j] = 1;
            }
        }

        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                std::cout << arr2[i][j] << " ";
            }
            std::cout << std::endl;
        }

        for (int i = 0; i < num; i++) {
            delete[] arr2[i];
            //{ , , , , }
        }

        delete[] arr2;
        //{ }

        //int*** arr2 = new int** [num];


}

void finalsil1()
{
    int x, y = 0;
    while (true)
    {
        cout << "x를 입력하세요 : ";
        cin >> x;
        cout << "y를 입력하세요 : ";
        cin >> y;
        if (x > 0 && y > 0)
            break;
        cout << "x와 y 모두 양수를 입력해주세요" << endl;
    }
    int** arr = new int*[x];


    for (int i = 0; i < x; i++) {
        arr[i] = new int[x];
        for (int j = 0; j < y; j++) {
            arr[i][j] = i*y+j+1;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < y; i++) {
        delete[] arr[i];
        //{ , , , , }
    }

    delete[] arr;
}

void finalsil2()
{
    int numOfStudents = 0;
    cout << "학생 수 입력 : ";
    cin >> numOfStudents;
    int* gradeArr = new int[numOfStudents];
    for (int i = 0; i < numOfStudents; i++)
    {
        cout << i+1 << "번 학생의 성적을 입력하세요 : ";
        cin >> gradeArr[i];
    }
    int total = 0;
    for (int i = 0; i < numOfStudents; i++)
    {
        total += gradeArr[i];
    }
    cout << "성적 평균 : " << (double)total / (double)numOfStudents;
    delete[] gradeArr;
}

int main()
{
    std::cout << "Hello World!\n";
    //learn1();
    //sil1();
    //sil2();
    //sil3();
    //additionsil();
    //additionalsil2();
    //learn2();
    //learn3();
    //learn3_additionalcode();

    //finalsil1();
    finalsil2();
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
