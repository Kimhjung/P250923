#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;
/* 
// ___ Case 1 ___
// 끝나면 그냥 없어짐
void Swap(int A, int B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

int main()
{
    int A = 10;
    int B = 20;

    //사용할 변수의 주소값을 넣음
    Swap(A, B);

    //반환 안됨
    cout << A << endl;
    cout << B << endl;

    return 0;
}

// 출력값 : 10 '\n' 20
*/

/*
// ___ Case2 ___
//Array의 경우, 메모리 8byte 차지함
//int, char 등의 데이터 타입은 4byte차지함
//int, char 같은 경우 Pointer를 사용하지 않음
void Swap(int* PA, int* PB)
{
    //Temp에 PA 주소의 값을 넣어줌
    int Temp = *PA;
    *PA = *PB;
    *PB = Temp;
}

int main()
{
    int A = 10;
    int B = 20;

    //사용할 변수의 주소값을 넣음
    Swap(&A, &B);

    cout << A << endl;
    cout << B << endl;

    return 0;
}
*/

// ___ Case 3 ___
/*
// C용
void Swap(int* PA, int* PB)
{
    //Temp에 PA 주소의 값을 넣어줌
    int Temp = *PA;
    *PA = *PB;
    *PB = Temp;
}
*/

void Swap(int& PA, int& PB)
{
    //Temp에 PA 주소의 값을 넣어줌
    int Temp = PA;
    PA = PB;
    PB = Temp;
}

int main() 
{
    int A = 10;
    int B = 20;

    //사용할 변수의 주소값을 넣음
    Swap(A, B);

    cout << A << endl;
    cout << B << endl;

    return 0;
}