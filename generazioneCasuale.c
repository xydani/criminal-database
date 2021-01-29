#include "generazioneCasuale.h"

/* Procedura per la generazione dei campi di un record soggetto.
 * Riceve in ingresso un puntatore ad un record soggetto e genera ogni campo del record.*/
void generaRecord(RecordSoggetto *puntatore){

    generaNome(puntatore);
    generaCognome(puntatore);
    generaAltezza(puntatore);
    generaPeso(puntatore);
    generaColoreOcchi(puntatore);
    generaColoreCapelli(puntatore);
    generaTipoCapelli(puntatore);
    generaBarba(puntatore);
    generaCicatrice(puntatore);
    generaChiaveImprontaDigitale(puntatore);
    generaResidenza(puntatore);
    generaPosizioneGps(puntatore);
    generaStatoSoggetto(puntatore);
}

/* Procedura che genera un nome casuale prendendo casualmente una stringa da una matrice.
 * Assegna poi tale stringa alla rispettiva variabile della struttura passata in ingresso.*/
void generaNome(RecordSoggetto *puntatore){

    char nomi[NUM_NOMI_COGNOMI][DIM_NOME_COGNOME+1] = {"Daniele", "Luca", "Marco", "Francesco", "Sara", "Carla",
                                                     "Laura", "Antonio", "Fabio", "Davide", "Chiara", "Mirko",
                                                     "Giovanni", "Monica", "Federica", "Marcello", "Luigi",
                                                     "Gianluca", "Serena", "Cristina", "Carlo", "Lorenzo",
                                                     "Zero", "Gabriele"};

    //assegno alla variabile del puntatore un nome generato casualmente dall'array di nomi
    strcpy(puntatore->nome, nomi[rand() % NUM_NOMI_COGNOMI]);
}

/* Procedura che genera un cognome casuale prendendo casualmente una stringa da una matrice.
 * Assegna poi tale stringa alla rispettiva variabile della struttura passata in ingresso.*/
void generaCognome(RecordSoggetto *puntatore){

    char cognomi[NUM_NOMI_COGNOMI][DIM_NOME_COGNOME+1] = {"Lurani", "Puddu", "Fara", "Cadoni", "Secci", "Vitali",
                                                          "Rossi", "Marcellini", "Sabatino", "Girozzi", "Spadoni",
                                                          "Mechetti", "Sassu", "Fadda", "Poddighe", "Tola",
                                                          "Solinas", "Civati", "Renzi", "Salvini", "Prodi", "Porcu",
                                                          "Piu", "Balloccu"};

    //assegno alla variabile del puntatore un nome generato casualmente dall'array di nomi
    strcpy(puntatore->cognome, cognomi[rand () % NUM_NOMI_COGNOMI]);
}

/* Procedura che genera casualmente un altezza.
 * Assegna infine il valore generato alla rispettiva variabile della struttura passata in ingresso.*/
void generaAltezza(RecordSoggetto *puntatore){

    //variabile temporanea per la generazione
    int numeroCasuale;

    numeroCasuale = MIN_ALTEZZA + rand() % (MAX_ALTEZZA - MIN_ALTEZZA + 1);
    puntatore->altezza = numeroCasuale;
}

/* Procedura che genera casualmente un peso.
 * Assegna infine il valore generato alla rispettiva variabile della struttura passata in ingresso.*/
void generaPeso(RecordSoggetto *puntatore){

    //variabile temporanea per la generazione
    int pesoCasualeGrammi;
    float pesoCasualeKg;

    //genero prima un peso in grammi
    pesoCasualeGrammi = MIN_PESO + rand() % (MAX_PESO_G - MIN_PESO + 1);

    //e poi lo trasformo in kg
    pesoCasualeKg = (float)pesoCasualeGrammi / 100;

    //assegno il valore generato al campo peso della struttura
    puntatore->peso = pesoCasualeKg;
}

/* Procedura che genera casualemente un colore per gli occhi espresso in esadecimale,
 * creando una combinazione di lettere e numeri tra 0 e 9 e A ed F.
 * Assegna infine il valore generato alla rispettiva variabile della struttura passata in ingresso.*/
void generaColoreOcchi(RecordSoggetto *puntatore){

    int contatore; //contatore per il ciclo di assegnamento dei caratteri all'array del colore degli occhi
    int valoreLettere = 0; //valore che se generato indica di dover generare una lettera
    int valoreNumeri = 1; //valore che se generato indica di dover generare un numero
    int letteraOppureNumero; //variabile in cui viene generato il primo valore ( lettera o numero)
    char numeroRandom; //variabile dove viene creato il numero randomico tra 0 e 9
    char carattereRandom; //variabile dove viene creato il carattere randomico tra A ed F

    //ciclo di assegnamento dei caratteri all'array del colore degli occhi
    for(contatore = 0; contatore < DIM_COLORE_OCCHI_CAPELLI; contatore++){

        //genero il primo valore random, 0 o 1, cioè lettera o numero
        letteraOppureNumero = valoreLettere + rand() % (valoreNumeri - valoreLettere + 1);

        //se il valore generato è 0
        if (letteraOppureNumero == valoreLettere){

            //genero una lettera casuale tra A ed F
            carattereRandom = 'A' + rand() % ('F' - 'A' + 1);

            //e l'assegno alla posizione indicata dal contatore del ciclo che è anche l'indice dell'array
            puntatore->coloreOcchi[contatore] = carattereRandom;
        } else

            //se il valore generato è 1
            if(letteraOppureNumero == valoreNumeri){

                //genero una numero casuale tra 0 ed 9
                numeroRandom = '0' + rand() % ('9' - '0' + 1);

                //e l'assegno alla posizione indicata dal contatore del ciclo che è anche l'indice dell'array
                puntatore->coloreOcchi[contatore] = numeroRandom;
            }
    }
}

/* Procedura che genera casualemente un colore per i capelli espresso in esadecimale,
 * creando una combinazione di lettere e numeri tra 0 e 9 ed A ed F.
 * Assegna infine il valore generato alla rispettiva variabile della struttura passata in ingresso. */
void generaColoreCapelli(RecordSoggetto *puntatore){

    int contatore; //contatore per il ciclo di assegnamento dei caratteri all'array del colore dei capelli
    int valoreLettere = 0; //valore che se generato indica di dover generare una lettera
    int valoreNumeri = 1; //valore che se generato indica di dover generare un numero
    int letteraOppureNumero; //variabile in cui viene generato il primo valore ( lettera o numero)
    char numeroRandom; //variabile dove viene creato il numero randomico tra 0 e 9
    char carattereRandom; //variabile dove viene creato il carattere randomico tra A ed F

    //ciclo di assegnamento dei caratteri all'array del colore dei capelli
    for(contatore = 0; contatore < DIM_COLORE_OCCHI_CAPELLI; contatore++){

        //genero il primo valore random, 0 o 1, cioè lettera o numero
        letteraOppureNumero = valoreLettere + rand() % (valoreNumeri - valoreLettere + 1);

        //se il valore generato è 0
        if (letteraOppureNumero == valoreLettere){

            //genero una lettera casuale tra A ed F
            carattereRandom = 'A' + rand() % ('F' - 'A' + 1);

            //e l'assegno alla posizione indicata dal contatore del ciclo che è anche l'indice dell'array
            puntatore->coloreCapelli[contatore] = carattereRandom;
        } else

            //se il valore generato è 1
            if(letteraOppureNumero == valoreNumeri){

                //genero una numero casuale tra 0 ed 9
                numeroRandom = '0' + rand() % ('9' - '0' + 1);

                //e l'assegno alla posizione indicata dal contatore del ciclo che è anche l'indice dell'array
                puntatore->coloreCapelli[contatore] = numeroRandom;
        }
    }
}

/* Procedura che genera un tipo di capelli generando casualmente un valore tra
 * quelli di una enumerazione e lo asseggna poi alla rispettiva variabile del Record
 * passato in ingresso.*/
void generaTipoCapelli(RecordSoggetto *puntatore){

    int numeroRandom; //numero random generato per slezionare un valore dell'enumerazione TipoCapelli

    //genero un numero tra i valori dell'enumerazione TipoCapelli
    numeroRandom = CORTI + rand() % (ALTRO - CORTI + 1);

    //e in base a quel numero assegno il valore alla struttura
    switch(numeroRandom){
        case CORTI:
            puntatore->tipoCapelli = CORTI;
            break;
        case MEDI:
            puntatore->tipoCapelli = MEDI;
            break;
        case LUNGHI:
            puntatore->tipoCapelli = LUNGHI;
            break;
        case ALTRO:
            puntatore->tipoCapelli = ALTRO;
            break;
        default: printf("\nErrore tipo capelli soggetto."); break;
    }
}

/*Procedura che genera casualemente la presenza o meno della barba.
 * Assegna infine il valore generato alla rispettiva variabile della struttura passata in ingresso.*/
void generaBarba(RecordSoggetto *puntatore){

    int randomBarba;
    int divisore = 2;
    int min = 0;
    int max = 10;

    //genero un numero random tra 0 e 10
    randomBarba = min + rand() % (max - min + 1);

    //se il nuero è pari, viene assegnata la presenza della barba
    if(randomBarba % divisore == min)
        puntatore->barba =  true;
    else

        //se il nuero è dispari, viene assegnata la mancanza della barba
        if (randomBarba % divisore != min)
            puntatore->barba = false;
}

/* Procedura che genera casualemente la presenza o meno di una cicatrice sul volto.
 * Assegna infine il valore generato alla rispettiva variabile della struttura passata in ingresso.*/
void generaCicatrice(RecordSoggetto *puntatore){

    int randomCicatrice;
    int divisore = 2;
    int min = 0;
    int max = 10;

    //genero un numero random tra 0 e 10
    randomCicatrice = min + rand() % (max - min + 1);

    //se il nuero è pari, viene assegnata la presenza della cicatrice
    if (randomCicatrice % divisore == min)
        puntatore->cicatriceVolto = true;
    else

        //se il nuero è dispari, viene assegnata la mancanza della cicatrice
        if (randomCicatrice % divisore != min)
            puntatore->cicatriceVolto = false;
}

/* Procedura che genera la chiave dell'impronta digitale, creando una
 * combinazione casuale di 16 lettere e numeri.
 * Assegna infine Ogni generato alla rispettiva variabile della struttura passata in ingresso.*/
void generaChiaveImprontaDigitale(RecordSoggetto *puntatore){

    int i; //contatore per il ciclo di assegnamento dei caratteri all'array del colore dei capelli
    int valoreLettereMaiuscole = 0; //valore che se generato indica di dover generare una lettera maiuscola
    int valoreLettereMinuscole = 1; //valore che se generato indica di dover generare una lettera minuscola
    int valoreNumeri = 2; //valore che se generato indica di dover generare un numero
    int letteraOppureNumero; //variabile in cui viene generato il primo valore ( lettera o numero)
    char numeroRandom; //variabile dove viene creato il numero randomico tra 0 e 9
    char carattereMaiuscoloRandom; //variabile dove viene creato il carattere randomico tra A ed F
    char carattereMinuscoloRandom; //variabile dove viene creato il carattere randomico tra a ed f

    //ciclo di assegnamento dei caratteri all'array del colore dei capelli
    for(i = 0; i < DIM_CHIAVE_IMPRONTA; i++){

        //genero il primo valore random, 0, 1 o 2, cioè lettere maiuscole, minuscole o numeri
        letteraOppureNumero = valoreLettereMaiuscole + rand() % (valoreNumeri - valoreLettereMaiuscole + 1);

        //se il valore generato è 0
        if (letteraOppureNumero == valoreLettereMaiuscole){

            //genero una lettera casuale tra A e Z
            carattereMaiuscoloRandom = 'A' + rand() % ('Z' - 'A' + 1);

            //e l'assegno alla posizione indicata dal contatore del ciclo che è anche l'indice dell'array
            puntatore->chiaveImprontaDigitale[i] = carattereMaiuscoloRandom;
        } else
            //se il valore generato è 1
            if (letteraOppureNumero == valoreLettereMinuscole){

                //genero una lettera casuale tra a e z
                carattereMinuscoloRandom = 'a' + rand() % ('z' - 'a' + 1);

                //e l'assegno alla posizione indicata dal contatore del ciclo che è anche l'indice dell'array
                puntatore->chiaveImprontaDigitale[i] = carattereMinuscoloRandom;
            } else
                //se il valore generato è 2
                if(letteraOppureNumero == valoreNumeri){

                //genero una numero casuale tra 0 ed 9
                numeroRandom = '0' + rand() % ('9' - '0' + 1);

                //e l'assegno alla posizione indicata dal contatore del ciclo che è anche l'indice dell'array
                puntatore->chiaveImprontaDigitale[i] = numeroRandom;
            }
    }
}

/* Procedura che genera casualemente la residenza del soggetto.
 * Concatena quattro stringhe contenenti ognuna una parte dell'indirizzo, generato
 * casualmente tra i valori di una matrice o all'interno di un intervallo numerico.
 * Assegna poi tali valori alla rispettiva variabile della struttura passata in ingresso.*/
void generaResidenza(RecordSoggetto *puntatore){

    int i; //variabile contatore per il ciclo for
    int randomNumeroCivico;

    char tipoIndirizzo[NUM_TIPO_INDIRIZZI][DIM_RESIDENZA + 1] = {"Via", "Viale", "Piazza", "Corso"};
    char nomeIndirizzo[NUM_NOMI_INDIRIZZI][DIM_RESIDENZA + 1] = {"Tempio", "Trento", "Roma", "Plebiscito",
                                                                 "Napoli", "Pascoli", "Abate", "Agnello",
                                                                 "Parmenide", "Birbone", "Dante", "Pasinara"};
    char nomeCitta[NUM_CITTA][DIM_RESIDENZA + 1] = {"Roma", "Sassari", "Perugia", "Milano", "Napoli",
                                                    "Velletri", "Olbia", "Venezia", "Cittadella", "Bari",
                                                    "Oristano", "Padova"};

    //assegno alla variabile del puntatore un tipo indirizzo generato casualmente dall'array di tipoIndirizzo
    strcpy(puntatore->residenza, tipoIndirizzo[rand() % NUM_TIPO_INDIRIZZI]);

    //aggiungo uno spazio alla stringa
    strcat(puntatore->residenza, " ");

    //assegno alla variabile del puntatore un nome indirizzo generato casualmente dall'array di nomeIndirizzo
    strcat(puntatore->residenza, nomeIndirizzo[rand() % NUM_NOMI_INDIRIZZI]);

    //aggiungo uno spazio alla stringa
    strcat(puntatore->residenza, " ");

    //genero casualmente il numero di cifre del numero civico
    randomNumeroCivico = NUMERO_CIVICO_CIFRE_MIN + rand() % (NUMERO_CIVICO_CIFRE_MAX - NUMERO_CIVICO_CIFRE_MIN + 1);

    //faccio n cicli quante sono le cifre del numero civico appena generate
    for (i = 0;  i < randomNumeroCivico ; i++) {

        int numeroRandom;

        //genero una cifra casuale tra 1 e 9
        numeroRandom = CIFRA_MIN + rand() % (CIFRA_MAX - CIFRA_MIN + 1);

        //in base alla cifra che è stata generata assegno la stringa corrispondente
        switch(numeroRandom){
            case 1:
                strcat(puntatore->residenza, "1");
                break;
            case 2:
                strcat(puntatore->residenza, "2");
                break;
            case 3:
                strcat(puntatore->residenza, "3");
                break;
            case 4:
                strcat(puntatore->residenza, "4");
                break;
            case 5:
                strcat(puntatore->residenza, "5");
                break;
            case 6:
                strcat(puntatore->residenza, "6");
                break;
            case 7:
                strcat(puntatore->residenza, "7");
                break;
            case 8:
                strcat(puntatore->residenza, "8");
                break;
            case 9:
                strcat(puntatore->residenza, "9");
                break;
            default: strcat(puntatore->residenza, "1");
        }
    }

    //aggiungo uno spazio alla stringa
    strcat(puntatore->residenza, " ");

    //assegno alla variabile del puntatore un nome città generato casualmente dall'array di nomeCitta
    strcat(puntatore->residenza, nomeCitta[rand() % NUM_CITTA]);
}

/*Procedura che genera casualemente la posizione gps del soggetto.
 * Genera casualmente una latitudine e una longitudine.
 * Assegna poi tali valori alle rispettive variabili della struttura passata in ingresso.*/
void generaPosizioneGps(RecordSoggetto *puntatore){

    int randomInteroLatitudine; //variabile che conterrà il valore intero della latitudine
    double randomDecimaleLatitudine; //variabile che conterrà il valore decimale della latitudine
    int randomInteroLongitudine; //variabile che conterrà il valore intero della longitudine
    double randomDecimaleLongitudine; //variabile che conterrà il valore decimale della longitudine
    double sommaLatitudine = 0; //variabile che conterrà il valore finale della latitudine
    double sommaLongitudine = 0; //variabile che conterrà il valore finale della longitudine

    //genero dei valori casuali tra l'intervallo consentito per la latitudine
    randomInteroLatitudine = MIN_LATITUDINE + rand() % (MAX_LATITUDINE - MIN_LATITUDINE + 1);

    //se il valore intero generato non è uno dei limiti dell'intervallo, genero un valore decimale
    if(randomInteroLatitudine != MAX_LATITUDINE && randomInteroLatitudine != MIN_LATITUDINE){

        randomDecimaleLatitudine = ((MIN_DECIMALE + rand() % (MAX_DECIMALE - MIN_DECIMALE + 1)) /1000000.0);
        sommaLatitudine = randomInteroLatitudine + randomDecimaleLatitudine;
    }else {

        //se il numero intero generato è uno dei limiti dell'intervallo, non genero un numero casuale
        sommaLatitudine = randomInteroLatitudine;
    }

    //genero dei valori casuali tra l'intervallo consentito per la longitudine
    randomInteroLongitudine = MIN_LONGITUDINE + rand() % (MAX_LONGIUDINE - MIN_LONGITUDINE + 1);

    //se il valore intero generato non è uno dei limiti dell'intervallo, genero un valore decimale
    if(randomInteroLongitudine != MIN_LONGITUDINE && randomInteroLongitudine != MAX_LONGIUDINE){

        randomDecimaleLongitudine = ((MIN_DECIMALE + rand() % (MAX_DECIMALE - MIN_DECIMALE + 1)) /1000000.0);
        sommaLongitudine = randomInteroLongitudine + randomDecimaleLongitudine;
    }else {

        //se il numero intero generato è uno dei limiti dell'intervallo, non genero un numero casuale
        sommaLongitudine = randomInteroLongitudine;
    }

    //assegno i valori generati alle rispettive variabili di struttura
    puntatore->ultimaPosizioneNota.latitudine = sommaLatitudine;
    puntatore->ultimaPosizioneNota.longitudine = sommaLongitudine;

}

/* Procedura che genera casualemente lo stato del soggetto generando casualmente un valore tra
 * quelli di una enumerazione e lo asseggna poi alla rispettiva variabile del Record
 * passato in ingresso. */
void generaStatoSoggetto(RecordSoggetto *puntatore){

    int randomStato;

    //genero un numero tra i valori dell'enumerazione StatoSoggetto
    randomStato = LIBERO + rand() % (EVASO - LIBERO + 1);

    //e in base a quel numero assegno il valore alla struttura
    switch(randomStato){
        case LIBERO:
            puntatore->statoDelSoggetto = LIBERO;
            break;
        case RICERCATO:
            puntatore->statoDelSoggetto = RICERCATO;
            break;
        case IN_ARRESTO:
            puntatore->statoDelSoggetto = IN_ARRESTO;
            break;
        case EVASO:
            puntatore->statoDelSoggetto = EVASO;
            break;
        default: printf("\nErrore stato soggetto."); break;
    }
}