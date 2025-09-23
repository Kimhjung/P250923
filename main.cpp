#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    //Pointer
    /*
    //메모리 위치 잡기
    int* P = new int;

    //두개 같은거
    int* P = 0;
    int* P = nullptr;       //C++에만 있음

    *P = 1;
    */

    /*포인터가 지워질 때
    * 1. delete 했을 때
    * 2. main 함수가 중단됐을 때
    * 3. 컴퓨터가 다운됐을 때
    */
    bool* A = new bool;

    *A = true;

    cout << A;

    delete A;

    return 0;
}