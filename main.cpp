#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

#define MAX_SIZE 52
#define CARD 3
#define Member 2

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

    int Dealer[3] = { 0,0,0 };
    int Player[3] = { 0,0,0 };

    string Shape[4] = { "♠", "♣", "♡", "◇" };
    int i = 0;

    //카드 뽑음
    Dealer[0] = Deck[0];
    Dealer[1] = Deck[2];
    Dealer[2] = Deck[4];

    Player[0] = Deck[1];
    Player[1] = Deck[3];
    Player[2] = Deck[5];

    for (int i = 0; i < CARD; i++)
    {
        //Dealer Card Number
        if (Dealer[i] / 4 + 1 == 11)
        {
            cout << "Dealer : " << Shape[Dealer[i] % 4];
            cout << "J" << "\t";
        }
        else if (Dealer[i] / 4 + 1 == 12)
        {
            cout << "Dealer : " << Shape[Dealer[i] % 4];
            cout << "Q" << "\t";
        }
        else if (Dealer[i] / 4 + 1 == 13)
        {
            cout << "Dealer : " << Shape[Dealer[i] % 4];
            cout << "K" << "\t";
        }
        else
        {
            cout << "Dealer : " << Shape[Dealer[i] % 4];
            cout << (Dealer[i] / 4) + 1 << "\t";
        }

        //Player Card Number
        if (Player[i] / 4 + 1 == 11)
        {
            cout << "Player : " << Shape[Player[i] % 4];
            cout << "J" << endl;
        }
        else if (Player[i] / 4 + 1 == 12)
        {
            cout << "Player : " << Shape[Player[i] % 4];
            cout << "Q" << endl;
        }
        else if (Player[i] / 4 + 1 == 13)
        {
            cout << "Player : " << Shape[Player[i] % 4];
            cout << "K" << endl;
        }
        else
        {
            cout << "Player : " << Shape[Player[i] % 4];
            cout << (Player[i] / 4) + 1 << endl;
        }
    }

    int SumDealer = 0;
    int SumPlaer = 0;
    for (int i = 0; i < CARD; i++)
    {
        SumDealer += Dealer[i];

        SumPlaer += Player[i];
    }

    if (SumDealer < SumPlaer)
    {
        cout << "Player Win" << endl;
    }
    else
    {
        cout << "Dealer Win" << endl;
    }
    
    return 0;
}