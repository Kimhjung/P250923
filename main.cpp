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

    //���� ���� �Ⱦ��� ��
    cout << *(P++) << endl;     // ��� 0 -> P ��� �� �� ����(������ �� ���ϸ� ++P)
    cout << *(P) << endl;

    /*
    delete P;     //P�� ����Ű�� �� ���ֱ�
    P = nullptr;    //P ��Ȱ��ȭ
    */

    return 0;
}