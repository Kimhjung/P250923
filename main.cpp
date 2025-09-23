#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//int select;

int main()
{
    int pocket[52];

    for (int i = 0; i <= 51; i++)
    {
        pocket[i] = i + 1;
    }

    //2. 시간 사용
    srand((unsigned int)time(nullptr));

    //3. 중복값 생김
    
    for (int i = 0; i < 52; i++)
    {
        int First = rand() % 52;
        int Second = rand() % 52;
        int Temp = 0;

        Temp = pocket[First];
        pocket[First] = pocket[Second];
        pocket[Second] = Temp;
    }
    for (int i = 0; i < 52; i++) 
    {
        printf("%d\n", pocket[i]);
    }
}