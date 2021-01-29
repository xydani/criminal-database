#include "raccoltaLibrerie.h"

//MODIFICARE CONFRONTA RECORD DEVE RESTITUIRE UN INT

int main() {

    srand(time(NULL));

    RecordSoggetto r1, r2, r3, r4;

    RecordSoggetto *r1P = &r1;
    RecordSoggetto *r2P = &r2;
    RecordSoggetto *r3P = &r3;
    RecordSoggetto *r4P = &r4;

    //inserisciRecord(r1P);
    //inserisciRecord(r2P);

    generaRecord(r3P);
    generaRecord(r4P);

    //stampaRecord(r1P);
    //stampaRecord(r2P);
    stampaRecord(r3P);
    stampaRecord(r4P);

    confrontaRecord(r3P, r4P);

    return 0;
}