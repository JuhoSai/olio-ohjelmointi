#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    Asunto as1, as2, as3, as4;
    Kerros kerros1, kerros2, kerros3;
    Katutaso katutaso;
    Kerrostalo kerrostalo;
    cout << "maaritetaan koko kerrostalon kaikki asunnot" << endl;

    katutaso.maaritaAsunnot();
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja " << endl;
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    kerros1.maaritaAsunnot();
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    kerros2.maaritaAsunnot();
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    kerros3.maaritaAsunnot();
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;

    cout << "Kerrostalon kulutus = " << kerrostalo.laskeKulutus(1) << endl;

    return 0;

}
