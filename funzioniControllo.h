/*
 * LIBRERIA CHE RACCOGLIE LE FUNZIONI PER I CONTROLLI SUGLI INSERIMENTI
 */

#ifndef PROGETTO_LRNDNL_FUNZIONICONTROLLO_H
#define PROGETTO_LRNDNL_FUNZIONICONTROLLO_H

#include "recordSoggetto.h"

#define STARTING_BUFFER_INDEX (-1) //inizio contatore per lo svuotabuffer
#define VALORE_CONTROLLO_BUFFER 0 //valore per determinare se l'inserimento dell'utente è valido
#define MAX_ALTEZZA 250
#define MIN_ALTEZZA 0
#define MIN_PESO 0
#define MAX_PESO_KG 200
#define MAX_PESO_G 20000 //peso massimo in grammi
#define MAX_LATITUDINE 90
#define MIN_LATITUDINE (-90)
#define MAX_LONGIUDINE 180
#define MIN_LONGITUDINE (-180)

int svuotaBuffer();
_Bool controlloNome(char nome[]);
_Bool controlloCognome(char cognome[]);
_Bool controlloAltezza(int altezza);
_Bool controlloPeso(float peso);
_Bool controlloColoreOcchi(char coloreOcchi[]);
_Bool controlloColoreCapelli(char coloreCapelli[]);
_Bool controlloTipoCapelli(int tipoCapelli);
_Bool controlloStatoSoggetto(int statoSoggetto);
_Bool controlloChiaveImpronta(char chiaveImpronta[]);
_Bool controlloResidenza(char residenza[]);
_Bool controlloLatitudine(double latitudine);
_Bool controlloLongitudine(double longitudine);

#endif //PROGETTO_LRNDNL_FUNZIONICONTROLLO_H
