#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;


int main()
{
    int Number[10] = { 0,1,2,3,4,5 };

    int* P = Number;

    /*
    *P = 1;                    //P = 200
    *(P + 1) = 2;           // P + 1 = 204(int = 4byte) //(0x200 + sizeof(int))
    *(P + 2) = 3;
    *(P + 3) = 4;
    */

    cout << *(Number + 1) << endl;
    cout << Number[1] << endl;

    //요즘 절대 안쓰는 법
    cout << *(P++) << endl;     // 출력 0 -> P 출력 후 값 증가(증가된 값 원하면 ++P)
    cout << *(P) << endl;

    /*
    delete P;     //P가 가리키는 곳 없애기
    P = nullptr;    //P 비활성화
    */

    return 0;
}