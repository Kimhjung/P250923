#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;
/* 
// ___ Case 1 ___
// ������ �׳� ������
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

    //����� ������ �ּҰ��� ����
    Swap(A, B);

    //��ȯ �ȵ�
    cout << A << endl;
    cout << B << endl;

    return 0;
}

// ��°� : 10 '\n' 20
*/

/*
// ___ Case2 ___
//Array�� ���, �޸� 8byte ������
//int, char ���� ������ Ÿ���� 4byte������
//int, char ���� ��� Pointer�� ������� ����
void Swap(int* PA, int* PB)
{
    //Temp�� PA �ּ��� ���� �־���
    int Temp = *PA;
    *PA = *PB;
    *PB = Temp;
}

int main()
{
    int A = 10;
    int B = 20;

    //����� ������ �ּҰ��� ����
    Swap(&A, &B);

    cout << A << endl;
    cout << B << endl;

    return 0;
}
*/

// ___ Case 3 ___
/*
// C��
void Swap(int* PA, int* PB)
{
    //Temp�� PA �ּ��� ���� �־���
    int Temp = *PA;
    *PA = *PB;
    *PB = Temp;
}
*/

void Swap(int& PA, int& PB)
{
    //Temp�� PA �ּ��� ���� �־���
    int Temp = PA;
    PA = PB;
    PB = Temp;
}

int main() 
{
    int A = 10;
    int B = 20;

    //����� ������ �ּҰ��� ����
    Swap(A, B);

    cout << A << endl;
    cout << B << endl;

    return 0;
}