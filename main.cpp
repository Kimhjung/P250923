#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    //Pointer
    /*
    //�޸� ��ġ ���
    int* P = new int;

    //�ΰ� ������
    int* P = 0;
    int* P = nullptr;       //C++���� ����

    *P = 1;
    */

    /*�����Ͱ� ������ ��
    * 1. delete ���� ��
    * 2. main �Լ��� �ߴܵ��� ��
    * 3. ��ǻ�Ͱ� �ٿ���� ��
    */
    bool* A = new bool;

    *A = true;

    cout << A;

    delete A;

    return 0;
}