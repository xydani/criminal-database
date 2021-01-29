/*
 * LIBRERIA CONTENENTE LE FUNZIONI DI STAMPA DEI RECORD
 */

#ifndef PROGETTO_LRNDNL_STAMPARECORD_H
#define PROGETTO_LRNDNL_STAMPARECORD_H

#include "recordSoggetto.h"

void stampaRecord(RecordSoggetto *puntatore);
void stampaNome(RecordSoggetto *puntatore);
void stampaCognome(RecordSoggetto *puntatore);
void stampaAltezza(RecordSoggetto *puntatore);
void stampaPesoe(RecordSoggetto *puntatore);
void stampaColoreOcchi(RecordSoggetto *puntatore);
void stampaColoreCapelli(RecordSoggetto *puntatore);
void stampaTipoCapelli(RecordSoggetto *puntatore);
void stampaBarba(RecordSoggetto *puntatore);
void stampaCicatriceVolto(RecordSoggetto *puntatore);
void stampaChiaveImpronta(RecordSoggetto *puntatore);
void stampaResidenza(RecordSoggetto *puntatore);
void stampaUltimaPosizione(RecordSoggetto *puntatore);
void stampaStatoSoggetto(RecordSoggetto *puntatore);

#endif //PROGETTO_LRNDNL_STAMPARECORD_H
