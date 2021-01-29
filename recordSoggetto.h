/*
 * LIBRERIA CONTENENTE LE STRUTTURE RELATIVE AL RECORD SOGGETTO
 */

#ifndef PROGETTO_LRNDNL_RECORDSOGGETTO_H
#define PROGETTO_LRNDNL_RECORDSOGGETTO_H


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "enumerazioni.h"

#define DIM_NOME_COGNOME 63 //dimensione stringa relativa al nome e al cognome del soggetto
#define DIM_COLORE_OCCHI_CAPELLI 6 //dimensione vettore relativo al colore degli occhi e dei capelli del soggetto
#define DIM_BARBA_CICATRICE 1 //dimensione vettore per l'input di barba e cicatrice
#define DIM_CHIAVE_IMPRONTA 16 //dimensione vettore relativo alla chiave della impronta digitale
#define DIM_RESIDENZA 511 //dimensione stringa relativa alla residenza del soggetto

//struttura che definisce l'ultima posizione gps nota del soggetto
typedef struct{
    double latitudine;
    double longitudine;
}PosizioneGps;

//struttura che definisce le caratteristiche del soggetto
typedef struct {
    char nome[DIM_NOME_COGNOME+1];
    char cognome[DIM_NOME_COGNOME+1];

    //espressa in cm
    int altezza;

    //espresso in Kg
    float peso;

    //espresso in esadecimale
    char coloreOcchi[DIM_COLORE_OCCHI_CAPELLI];

    //espresso in esadecimale
    char coloreCapelli[DIM_COLORE_OCCHI_CAPELLI];

    TipoCapelli tipoCapelli;

    //true presenza barba, false assenza
    _Bool barba;

    //true presenza cicatrice, false assenza
    _Bool cicatriceVolto;

    char chiaveImprontaDigitale[DIM_CHIAVE_IMPRONTA];
    char residenza[DIM_RESIDENZA+1];

    PosizioneGps ultimaPosizioneNota;
    StatoSoggetto statoDelSoggetto;
} RecordSoggetto;

#endif //PROGETTO_LRNDNL_RECORDSOGGETTO_H
