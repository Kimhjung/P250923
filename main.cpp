#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

#define MAX_SIZE 52

int main()
{
    int pocket[MAX_SIZE];

    for (int i = 0; i < MAX_SIZE; i++)
    {
        pocket[i] = i + 1;
    }

    //#include <algorithm>에 들어있는 기능임
    random_shuffle(&pocket[0], &pocket[51]);

    for (int i = 0; i < MAX_SIZE; i++)
    {
        cout << pocket[i] << endl;
    }
    
    return 0;
}