#include "funzioniControllo.h"

/* funzione per svuotare il buffer dopo l'inserimento di una stringa
 * ritorna il numero dei caratteri eliminati dal buffer.*/
int svuotaBuffer(){

    /*contatore caratteri che vengono eliminati dal buffer, inizia da
     * -1 perchè il primo ciclo verrà sempre eseguito */
    int i = STARTING_BUFFER_INDEX;

    char c;

    do{
        c = getchar();
        i++;
    }while (c != '\n');

    /* ritorna il valore di i aggiornato in base a quanti caratteri sono stati eliminati dal buffer*/
    return i;
}

/* Funzione che controlla se il nome inserito rispetta i requisiti,
 * quindi contiene solo lettere maiuscole e minuscole o spazi.
 * Riceve in ingresso una stringa e ritorna un valore true o false  */
_Bool controlloNome(char nome[]){

    int i;  //contatore per il ciclo for
    _Bool check = true; //booleano per il controllo della stringa, all'inizio la stringa viene considerata valida
    _Bool flagCiclo = true; //booleano per il controllo del ciclo, inizialmente viene considerato valido

    /*se il primo carattere è uno spazio segnala l'errore e ritorna che l'input è errato */
    if(nome[0] == ' '){
        check = false;
        printf("\nErrore! Il nome non puo\' iniziare con uno spazio.");
        return check;
    }

    //faccio un ciclo passando ogni valore dell'array per vedere se rispetta i requisiti
    for (i = 0; i <= DIM_NOME_COGNOME && flagCiclo == true; i++){

        //controllo se l'elemento della stringa non è una lettera dell'alfabeto
        if((nome[i] < 'a' || nome[i] > 'z') && (nome[i] < 'A' || nome[i] > 'Z')){

            //se è uno spazio viene considerato valido
            if(nome[i] == ' '){
                check = true;
            } else {

                //se è il carattere null viene considerato valido e fai terminare il ciclo
                if(nome[i] == '\0'){
                    check = true;
                    flagCiclo = false;
                } else {

                    //se il carattere non è idoneo il booleano prende false e il ciclo finisce
                    check = false;
                    flagCiclo = false;

                }
            }
        }
    }

    //ritorna il valore finale del booleano
    if(check == false){

        //se il valore è false stampa un messaggio di errore
        printf("\nErrore! Il nome puo\' contenere solo lettere. Riprova.");
        return check;
    } else {
        return check;
    }
}

/* Funzione che controlla se il cognome inserito rispetta i requisiti,
 * quindi contiene solo lettere maiuscole e minuscole o spazi.
 * Riceve in ingresso una stringa e ritorna un valore true o false  */
_Bool controlloCognome(char cognome[]){

    int i;  //contatore per il ciclo for
    _Bool check = true; //booleano per il controllo, all'inizio la stringa è valida
    _Bool flagCiclo = true; //booleano per il controllo del ciclo, inizialmente viene considerato valido

    /*se il primo carattere è uno spazio segnala l'errore e ritorna che l'input è errato */
    if(cognome[0] == ' '){
        check = false;
        printf("\nErrore! Il cognome non puo\' iniziare con uno spazio.");
        return check;
    }

    /* faccio un ciclo passando ogni valore dell'array per vedere se rispetta i requisiti */
    for (i = 0; i <= DIM_NOME_COGNOME && flagCiclo == true; i++){

        //controllo se l'elemento della stringa non è una lettera dell'alfabeto
        if((cognome[i] < 'a' || cognome[i] > 'z') && (cognome[i] < 'A' || cognome[i] > 'Z')){

            //se è uno spazio viene considerato valido
            if(cognome[i] == ' '){
                check = true;
            } else {

                //se è il carattere null viene considerato valido e fai terminare il ciclo
                if(cognome[i] == '\0'){
                    check = true;
                    flagCiclo = false;
                } else {

                    //se il carattere non è idoneo il booleano prende false e il ciclo finisce
                    check = false;
                    flagCiclo = false;

                }
            }
        }
    }

    //ritorna il valore finale del booleano
    if(check == false){

        //se il valore è false stampa un messaggio di errore
        printf("\nErrore! Il cognome puo\' contenere solo lettere. Riprova.");
        return check;
    } else {
        return check;
    }
}

/* Funzione che controlla se l'altezza inserita rispetta i requisiti. (0-250) (solo numeri interi).
 * Riceve in ingresso un intero e ritorna un valore booleano.*/
_Bool controlloAltezza(int altezza){

    _Bool check = true; //booleano per il controllo, all'inizio il valore viene considerato valido

    if(altezza > MAX_ALTEZZA){
        printf("\nErrore. Hai inserito un valore piu\' grande di 250. Riprova.");
        check = false;
        return check;
    } else
        if(altezza < MIN_ALTEZZA){
            printf("\nErrore. Hai inserito un valore piu\' piccolo di 0. Riprova.");
            check = false;
            return check;
        } else {
            return check;
        }
}

/* Funzione che controlla se il peso inserito rispetta i requisiti. (0-200) (numero decimale)
 * Riceve in ingresso un float e ritorna un valore booleanoy.*/
_Bool controlloPeso(float peso){

    _Bool check = true; //booleano per il controllo, all'inizio il valore viene considerato valido

    if(peso > MAX_PESO_KG){
        printf("\nErrore. Hai inserito un valore piu\' grande di 200. Riprova.");
        check = false;
        return check;
    } else
    if(peso < MIN_PESO){
        printf("\nErrore. Hai inserito un valore piu\' piccolo di 0. Riprova.");
        check = false;
        return check;
    } else {
        return check;
    }
}

/* Funzione che controlla se i caratteri inseriti rispettano i requisiti (valori esadecimali 0-9 e A-F).
 * Riceve in ingresso un array di caratteri e ritorna un valore booleano true o false*/
_Bool controlloColoreOcchi(char coloreOcchi[]){

    int i; //contatore del ciclo for
    _Bool check = true; //booleano per il controllo, inizialmente i caratteri inseriti vengono considerati validi
    _Bool flagCiclo = true; //booleano per il controllo del ciclo, inizialmente viene considerato valido

    /*se il primo carattere è uno spazio segnala l'errore e ritorna che l'input è errato */
    if(coloreOcchi[0] == ' '){
        check = false;
        printf("\nErrore! Il valore del colore non puo\' iniziare con uno spazio.");
        return check;
    }

    //faccio un ciclo passando ogni elemento dell'array per vedere se rispetta i requisiti
    for(i = 0; i < DIM_COLORE_OCCHI_CAPELLI && flagCiclo == true; i++){

        /*controllo se il carattere nell'indice i dell'array rispetta i requisiti (0-9 e A-F) */
        if((coloreOcchi[i] < '0' || coloreOcchi[i] > '9') && (coloreOcchi[i] < 'A' || coloreOcchi[i] > 'F')){

                //se uno dei valori dell'array è il carattere null, allora mancano dei caratteri nell'inserimento
                if(coloreOcchi[i] == '\0'){
                    check = false;
                    printf("\nErrore! Hai inserito un numero inferiore di caratteri. Riprova.");
                    return check;
                }

                //se uno dei valori dell'array è un carattere minuscolo, allora genera un errore
                if(coloreOcchi[i] >= 'a' && coloreOcchi[i] <= 'z'){
                    check = false;
                    printf("\nErrore! Le lettere devono essere in maiuscolo. Riprova.");
                    return check;
                }

                //se non rispetta i requisiti il booleano prende false
                check = false;

                //poi interrompi il ciclo e passa alla istruzione successiva
                flagCiclo = false;
            }
    }

    //ritorna il valore finale del booleano
    if(check == false){

        //se è false stampa un messaggio di errore
        printf("\nErrore! Hai inserito caratteri non validi. Riprova.");
        return check;
    } else {
        return check;
    }
}

/* Funzione che controlla se i caratteri inseriti rispettano i requisiti (valori esadecimali)
 * Riceve in ingresso un array di caratteri e ritorna un valore booleano true o false*/
_Bool controlloColoreCapelli(char coloreCapelli[]){

    int i; //contatore del ciclo for
    _Bool check = true; //booleano per il controllo, inizialmente i caratteri inseriti vengono considerati validi
    _Bool flagCiclo = true; //booleano per il controllo del ciclo, inizialmente viene considerato valido

    /*se il primo carattere è uno spazio segnala l'errore e ritorna che l'input è errato */
    if(coloreCapelli[0] == ' '){
        check = false;
        printf("\nErrore! Il valore del colore non puo\' iniziare con uno spazio.");
        return check;
    }

    //faccio un ciclo passando ogni elemento dell'array per vedere se rispetta i requisiti
    for(i = 0; i < DIM_COLORE_OCCHI_CAPELLI && flagCiclo == true; i++){

        /*controllo se il carattere nell'indice i dell'array rispetta i requisiti (0-9 e A-F) */
        if((coloreCapelli[i] < '0' || coloreCapelli[i] > '9') && (coloreCapelli[i] < 'A' || coloreCapelli[i] > 'F')){

            //se uno dei valori dell'array è il carattere null, allora mancano dei caratteri nell'inserimento
            if(coloreCapelli[i] == '\0'){
                check = false;
                printf("\nErrore! Hai inserito un numero inferiore di caratteri. Riprova.");
                return check;
            }

            //se uno dei valori dell'array è un carattere minuscolo, allora genera un errore
            if(coloreCapelli[i] >= 'a' && coloreCapelli[i] <= 'z'){
                check = false;
                printf("\nErrore! Le lettere devono essere in maiuscolo. Riprova.");
                return check;
            }

            //se non rispetta i requisiti il booleano prende false
            check = false;

            //poi interrompi il ciclo e passa alla istruzione successiva
            flagCiclo = false;
        }
    }

    //ritorna il valore finale del booleano
    if(check == false){

        //se è false stampa un messaggio di errore
        printf("\nErrore! Hai inserito caratteri non validi. Riprova.");
        return check;
    } else {
        return check;
    }
}

/* Funzione che controlla l'inserimento del valore necessario per stampare il corretto stile
 * di capelli del soggetto in base ai campi di un enumerazione.
 * Riceve in ingresso un intero e ritorna un valore booleano.*/
_Bool controlloTipoCapelli(int tipoCapelli){

    _Bool check = true; //booleano per il controllo, inizialmente i valori inseriti vengono considerati validi

    if(tipoCapelli < CORTI || tipoCapelli > ALTRO){
        check = false;
        return check;
    } else{
        return check;
    }
}

/* Funzione che controlla l'inserimento del valore necessario per stampare il corretto stato
 * del soggetto in base ai campi di un enumerazione.
 * Riceve in ingresso un intero e ritorna un valore booleano.*/
_Bool controlloStatoSoggetto(int statoSoggetto){

    _Bool check = true; //booleano per il controllo, inizialmente i valori inseriti vengono considerati validi

    if(statoSoggetto < LIBERO || statoSoggetto > EVASO){
        check = false;
        return check;
    } else{
        return check;
    }
}

/* Funzione che controlla se i caratteri inseriti rispettano i requisiti (valori alfanumerici,
 * 16 caratteri obbligatori). Riceve in ingresso un array di caratteri e ritorna
 * un valore booleano true o false*/
_Bool controlloChiaveImpronta(char chiaveImpronta[]){

    int i; //contatore del ciclo for
    _Bool check = true; //booleano per il controllo, inizialmente i caratteri inseriti vengono considerati validi
    _Bool flagCiclo = true; //booleano per il controllo del ciclo, inizialmente viene considerato valido

    /*se il primo carattere è uno spazio segnala l'errore e segnala che l'input è errato */
    if(chiaveImpronta[0] == ' '){
        check = false;
        printf("\nErrore. Il valore dell'impronta non puo\' iniziare con uno spazio.");
        return check;
    }

    //faccio un ciclo passando ogni elemento dell'array per vedere se rispetta i requisiti
    for(i = 0; i < DIM_CHIAVE_IMPRONTA && flagCiclo == true; i++){

        /*controllo se il carattere nell'indice i dell'array rispetta i requisiti (0-9 e a-z e A-Z) */
        if((chiaveImpronta[i] < '0' || chiaveImpronta[i] > '9') &&
            (chiaveImpronta[i] < 'a' || chiaveImpronta[i] > 'z') &&
            (chiaveImpronta[i] < 'A' || chiaveImpronta[i] > 'Z')){

            //se uno dei valori dell'array è il carattere null, allora mancano dei caratteri nell'inserimento
            if(chiaveImpronta[i] == '\0'){
                check = false;
                printf("\nErrore! Hai inserito un numero inferiore di caratteri. Riprova.");
                return check;
            }

            //se non rispetta i requisiti il booleano prende false
            check = false;

            //poi interrompi il ciclo e passa alla istruzione successiva
            flagCiclo = false;
        }
    }

    //ritorna il valore finale del booleano
    if(check == false){

        //se è false stampa un messaggio di errore
        printf("\nErrore! Hai inserito caratteri non validi. Riprova.");
        return check;
    } else {
        return check;
    }
}

/* Funzione che controlla se i caratteri inseriti rispettano i requisiti (max 511 caratteri).
 * Riceve in ingresso una stringa di caratteri e ritorna un valore booleano true o false.*/
_Bool controlloResidenza(char residenza[]){

    _Bool check = true; //booleano per il controllo, inizialmente i caratteri inseriti vengono considerati validi

    if (residenza[0] == ' '){
        check = false;
        printf("\nErrore! La residenza non puo\' iniziare con uno spazio. Riprova.");
        return check;
    } else {
        return check;
    }
}

/* Funzione che controlla se le coordinate di latitudine inserite rispettano i requisiti (valori tra -90 e 90).
 * Riceve in ingresso un double e ritorna un valore booleano.*/
_Bool controlloLatitudine(double latitudine){

    _Bool check = true;  //booleano per il controllo, inizialmente il valore inserito viene considerato valido

    if(latitudine < MIN_LATITUDINE || latitudine > MAX_LATITUDINE){

        check = false;
        printf("\nErrore! Coordinate inserite non valide. Riprova!");
        return check;

    } else {
        return check;
    }
}

/* Funzione che controlla se le coordinate di longitudine inserite rispettano i requisiti (valori tra -180 e 180).
 * Riceve in ingresso un double e ritorna un valore booleano.*/
_Bool controlloLongitudine(double longitudine){

    _Bool check = true;  //booleano per il controllo, inizialmente il valore inserito viene considerato valido

    if(longitudine < MIN_LONGITUDINE || longitudine > MAX_LONGIUDINE){

        check = false;
        printf("\nErrore! Coordinate inserite non valide. Riprova!");
        return check;

    } else {
        return check;
    }
}