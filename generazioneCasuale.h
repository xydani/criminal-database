/*
 * LIBRERIA CONTENTENTE TUTTE LE FUNZIONI DI GENERAZIONE CASUALE DEI PARAMETRI DI UN RECORDSOGGETTO
 */

#ifndef PROGETTO_LRNDNL_GENERAZIONECASUALE_H
#define PROGETTO_LRNDNL_GENERAZIONECASUALE_H

#include "recordSoggetto.h"
#include "funzioniControllo.h"

#define NUMERO_CIVICO_CIFRE_MIN 1 //valore minimo cifre del numero civico
#define NUMERO_CIVICO_CIFRE_MAX 3 //valore massimo cifre del numero civico
#define CIFRA_MIN 1 //cifra minima per la generazione del numero civico
#define CIFRA_MAX 9 //cifra massima per la generazione del numero civico
#define NUM_NOMI_COGNOMI 24 //dimensione array nomi e cognomi
#define NUM_TIPO_INDIRIZZI 4 //dimensione array tipoIndirizzo
#define NUM_NOMI_INDIRIZZI 12 //dimensione array nomeIndirizzo
#define NUM_CITTA 12 //dimensione array nomeCitta
#define MIN_DECIMALE 0
#define MAX_DECIMALE 999999

void generaRecord(RecordSoggetto *puntatore);
void generaNome(RecordSoggetto *puntatore);
void generaCognome(RecordSoggetto *puntatore);
void generaAltezza(RecordSoggetto *puntatore);
void generaPeso(RecordSoggetto *puntatore);
void generaColoreOcchi(RecordSoggetto *puntatore);
void generaColoreCapelli(RecordSoggetto *puntatore);
void generaTipoCapelli(RecordSoggetto *puntatore);
void generaBarba(RecordSoggetto *puntatore);
void generaCicatrice(RecordSoggetto *puntatore);
void generaChiaveImprontaDigitale(RecordSoggetto *puntatore);
void generaResidenza(RecordSoggetto *puntatore);
void generaPosizioneGps(RecordSoggetto *puntatore);
void generaStatoSoggetto(RecordSoggetto *puntatore);

#endif //PROGETTO_LRNDNL_GENERAZIONECASUALE_H
