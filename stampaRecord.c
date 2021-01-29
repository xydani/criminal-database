#include "stampaRecord.h"

/* procedura che stampa a schermo tutti i campi relativi ad un soggetto  */
void stampaRecord(RecordSoggetto *puntatore){

    printf("\n----------------------------------");
    printf("\n----- STAMPA RECORD SOGGETTO -----");
    printf("\n----------------------------------");
    printf("\n");

    stampaNome(puntatore);
    stampaCognome(puntatore);
    stampaAltezza(puntatore);
    stampaPesoe(puntatore);
    stampaColoreOcchi(puntatore);
    stampaColoreCapelli(puntatore);
    stampaTipoCapelli(puntatore);
    stampaBarba(puntatore);
    stampaCicatriceVolto(puntatore);
    stampaChiaveImpronta(puntatore);
    stampaResidenza(puntatore);
    stampaUltimaPosizione(puntatore);
    stampaStatoSoggetto(puntatore);
}

/* Pocedura che stampa il nome del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaNome(RecordSoggetto *puntatore){
    printf("\nNome: %s", puntatore->nome);
}

/* Procedura che stampa il cognome del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaCognome(RecordSoggetto *puntatore){
    printf("\nCognome: %s", puntatore->cognome);
}

/* Procedura che stampa l'altezza del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaAltezza(RecordSoggetto *puntatore){
    printf("\nAltezza: %d cm", puntatore->altezza);
}

/* Procedura che stampa il peso del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaPesoe(RecordSoggetto *puntatore){
    printf("\nPeso: %.2f Kg", puntatore->peso);
}

/* Procedura che stampa il colore degli occhi del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaColoreOcchi(RecordSoggetto *puntatore){

    int i; //contatore per ciclo di stampa

    printf("\nColore occhi: ");
    for(i = 0; i < DIM_COLORE_OCCHI_CAPELLI; i++){
        printf("%c", puntatore->coloreOcchi[i]);
    }
}

/* Procedura che stampa il colore dei capelli del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaColoreCapelli(RecordSoggetto *puntatore){

    int i; //contatore per ciclo di stampa

    printf("\nColore capelli: ");
    for(i = 0; i < DIM_COLORE_OCCHI_CAPELLI; i++){
        printf("%c", puntatore->coloreCapelli[i]);
    }
}

/* Procedura che stampa il tipo di capelli del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaTipoCapelli(RecordSoggetto *puntatore){

    printf("\nTipo capelli: ");
    switch(puntatore->tipoCapelli) {
        case CORTI:
            printf("CORTI");
            break;
        case MEDI:
            printf("MEDI");
            break;
        case LUNGHI:
            printf("LUNGHI");
            break;
        case ALTRO:
            printf("ALTRO");
            break;
        default: printf("Errore tipo capelli del soggetto!"); break;
    }
}

/* Procedura che stampa il valore di presenza della barba.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaBarba(RecordSoggetto *puntatore){

    printf("\nBarba: ");
    if(puntatore->barba == true)
        printf("si");
    else
    if(puntatore->barba == false)
        printf("no");
}

/* Procedura che stampa il valore di presenza della cicatrice.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaCicatriceVolto(RecordSoggetto *puntatore){

    printf("\nCicatrice sul volto: ");
    if(puntatore->cicatriceVolto == true)
        printf("si");
    else
    if(puntatore->cicatriceVolto == false)
        printf("no");
}

/* Procedura che stampa la chiave dell'impronta del soggetto
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaChiaveImpronta(RecordSoggetto *puntatore){

    int i; //contatore per ciclo di stampa

    printf("\nChiave impronta digitale: ");
    for(i = 0; i < DIM_CHIAVE_IMPRONTA; i++){
        printf("%c", puntatore->chiaveImprontaDigitale[i]);
    }
}

/* Procedura che stampa la residenza del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaResidenza(RecordSoggetto *puntatore){
    printf("\nResidenza: %s", puntatore->residenza);
}

/* Procedura che stampa le coordinate gps dell'ultima posizione nota del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaUltimaPosizione(RecordSoggetto *puntatore){
    printf("\nUltima posizione GPS nota: ");
    printf("\nLatitudine: %.6lf - ", puntatore->ultimaPosizioneNota.latitudine);
    printf("Longitudine: %.6lf", puntatore->ultimaPosizioneNota.longitudine);
}

/* Procedura che stampa lo stato del soggetto.
 * Riceve in ingresso un pantatore ad una struttura RecordSoggetto.*/
void stampaStatoSoggetto(RecordSoggetto *puntatore){

    printf("\nStato del soggetto: ");
    switch(puntatore->statoDelSoggetto) {
        case LIBERO:
            printf("LIBERO");
            break;
        case RICERCATO:
            printf("RICERCATO");
            break;
        case IN_ARRESTO:
            printf("IN ARRESTO");
            break;
        case EVASO:
            printf("EVASO");
            break;
        default: printf("Errore stampa stato del soggetto!"); break;
    }
}