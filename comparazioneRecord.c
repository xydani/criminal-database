#include "comparazioneRecord.h"

/* procedura che compara due record, riceve in ingresso due puntatori a due RecordSoggetto.
 * Termina con una stampa che indica la percentuale di uguaglianza tra i due record */
void confrontaRecord(RecordSoggetto *puntatore1, RecordSoggetto *puntatore2){

    float contatoreUguaglianza = 0; //contatore elementi trovati uguali
    float elementiConfrontati = 13; //elementi totali da confrontare
    int uguaglianza; //variabile per il calcolo finale dell'uguaglianza

    //cofronto ogni elemento delle due strutture
    if(strcmp(puntatore1->nome, puntatore2->nome) == 0)
        contatoreUguaglianza++;
    if(strcmp(puntatore1->cognome, puntatore2->cognome) == 0)
        contatoreUguaglianza++;
    if(puntatore1->altezza == puntatore2->altezza)
        contatoreUguaglianza++;
    if(puntatore1->peso == puntatore2->peso)
        contatoreUguaglianza++;
    if(strcmp(puntatore1->coloreOcchi, puntatore2->coloreOcchi) == 0)
        contatoreUguaglianza++;
    if(strcmp(puntatore1->coloreCapelli, puntatore2->coloreCapelli) == 0)
        contatoreUguaglianza++;
    if(puntatore1->tipoCapelli == puntatore2->tipoCapelli)
        contatoreUguaglianza++;
    if(puntatore1->barba == puntatore2->barba)
        contatoreUguaglianza++;
    if(puntatore1->cicatriceVolto == puntatore2->cicatriceVolto)
        contatoreUguaglianza++;
    if(strcmp(puntatore1->chiaveImprontaDigitale, puntatore2->chiaveImprontaDigitale) == 0)
        contatoreUguaglianza++;
    if(strcmp(puntatore1->residenza, puntatore2->residenza) == 0)
        contatoreUguaglianza++;
    if((puntatore1->ultimaPosizioneNota.latitudine == puntatore2->ultimaPosizioneNota.latitudine) &&
            (puntatore1->ultimaPosizioneNota.longitudine == puntatore2->ultimaPosizioneNota.longitudine))
        contatoreUguaglianza++;
    if(puntatore1->statoDelSoggetto == puntatore2->statoDelSoggetto)
        contatoreUguaglianza++;

    //calcolo l'uguaglianza
    uguaglianza = round(((contatoreUguaglianza / elementiConfrontati) * 100));

    printf("\n\n----- Cofronto tra %s %s e %s %s -----", puntatore1->nome, puntatore1->cognome,
                                                puntatore2->nome, puntatore2->cognome);
    printf("\nPercentuale uguaglianza tra i due record = %d%%", uguaglianza);
}