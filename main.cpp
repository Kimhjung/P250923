#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

#define MAX_SIZE 52
#define CARD 3

int main()
{

    srand((unsigned int)time(nullptr));
    int Deck[MAX_SIZE];

    //카드 만듦
    for (int i = 0; i < MAX_SIZE; i++)
    {
        Deck[i] = i + 1;
    }

    //#include <algorithm>에 들어있는 기능
    //카드 섞음
    random_shuffle(&Deck[0], &Deck[51]);

    int Dealer[3];
    int Player[3];

    int i = 0;
    //카드 뽑음
    for (i = 0; i < CARD; i++)
    {
        Dealer[i] = Deck[i];

        Player[i] = Deck[i + CARD];
    }

    for (int i = 0; i < CARD; i++)
    {
        if (Dealer[i] % 4 == 0)
        {
            cout << "Dealer : Spade " << (Dealer[i] / 4) +1 << "\t";
        }
        else if (Dealer[i] % 4 == 1)
        {
            cout << "Dealer : Clover " << (Dealer[i] / 4) + 1 << "\t";
        }
        else if (Dealer[i] % 4 == 2)
        {
            cout << "Dealer : Heart " << (Dealer[i] / 4) + 1 << "\t";
        }
        else
        {
            cout << "Dealer : Dia " << (Dealer[i] / 4) + 1 << "\t";
        }

        if (Dealer[i] % 4 == 0)
        {
            cout << "Player : Spade " << (Player[i] / 4) + 1 << endl;
        }
        else if (Dealer[i] % 4 == 1)
        {
            cout << "Player : Clover " << (Player[i] / 4) + 1 << endl;
        }
        else if (Dealer[i] % 4 == 2)
        {
            cout << "Player : Heart " << (Player[i] / 4) + 1 << endl;
        }
        else
        {
            cout << "Player : Dia " << (Player[i] / 4) + 1 << endl;
        }
    }
    
    return 0;
}