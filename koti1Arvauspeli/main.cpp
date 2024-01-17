#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maxnum);

int main()
{
    int maxnum = 40;
    game(maxnum);

    return 0;
}


int game(int maxnum) {
    srand(time(NULL));
    int luku;
    int randomLuku = rand() % maxnum + 1;
    int yritys = 0;

    cout << "Anna luku 1-" << maxnum << "!" << endl;

    do {
        cout << "Anna luku: " << endl;
        cin >> luku;
        yritys++;

        if (luku == randomLuku) {
            cout << "oikea luku!" << endl;
            cout << "yritysten maara: " <<yritys << endl;
        }
        else if (luku < randomLuku){
            cout << "luku on suurempi" << endl;
        }

        else {
            cout << "luku on pienempi" << endl;
        }
    }

    while (luku != randomLuku);
}
