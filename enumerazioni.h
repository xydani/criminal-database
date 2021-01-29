/*
 * libreria che contiene enumerazioni
 */

#ifndef PROGETTO_LRNDNL_ENUMERAZIONI_H
#define PROGETTO_LRNDNL_ENUMERAZIONI_H

//enumerazione che definisce lo stato del soggetto
typedef enum{
    LIBERO, RICERCATO, IN_ARRESTO, EVASO
} StatoSoggetto;

//enumerazione che definisce il tipo di capelli del soggetto
typedef enum {
    CORTI, MEDI, LUNGHI, ALTRO
} TipoCapelli;

#endif //PROGETTO_LRNDNL_ENUMERAZIONI_H
