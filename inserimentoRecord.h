/*
 * LIBRERIA CONTENENTE LE PROCEDURE DI INSERIMENTO DI UN RECORD SOGGETTO
 */
#ifndef PROGETTO_LRNDNL_INSERIMENTORECORD_H
#define PROGETTO_LRNDNL_INSERIMENTORECORD_H

#include "recordSoggetto.h"
#include "funzioniControllo.h"

#define STR_(X) #X
#define STR(X) STR_(X)

void inserisciRecord(RecordSoggetto *puntatore);
void inserisciNome(RecordSoggetto *puntatore);
void inserisciCognome(RecordSoggetto *puntatore);
void inserisciAltezza(RecordSoggetto *puntatore);
void inserisciPeso(RecordSoggetto *puntatore);
void inserisciColoreOcchi(RecordSoggetto *puntatore);
void inserisciColoreCapelli(RecordSoggetto *puntatore);
void inserisciTipoCapelli(RecordSoggetto *puntatore);
void inserisciBarba(RecordSoggetto *puntatore);
void inserisciCicatriceVolto(RecordSoggetto *puntatore);
void inserisciChiaveImpronta(RecordSoggetto *puntatore);
void inserisciResidenza(RecordSoggetto *puntatore);
void inserisciCoordinateGps(RecordSoggetto *puntatore);
void inserisciLatitudine(RecordSoggetto *puntatore);
void inserisciLongitudine(RecordSoggetto *puntatore);
void inserisciStatoSoggetto(RecordSoggetto *puntatore);
#endif //PROGETTO_LRNDNL_INSERIMENTORECORD_H
