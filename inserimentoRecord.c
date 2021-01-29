#include "inserimentoRecord.h"

/* funzione che permettte di inserire i dati di un soggetto
 * riceve in ingresso un puntatore ad un record soggetto */
void inserisciRecord(RecordSoggetto *puntatore){

    inserisciNome(puntatore);
    inserisciCognome(puntatore);
    inserisciAltezza(puntatore);
    inserisciPeso(puntatore);
    inserisciColoreOcchi(puntatore);
    inserisciColoreCapelli(puntatore);
    inserisciTipoCapelli(puntatore);
    inserisciBarba(puntatore);
    inserisciCicatriceVolto(puntatore);
    inserisciChiaveImpronta(puntatore);
    inserisciResidenza(puntatore);
    inserisciCoordinateGps(puntatore);
    inserisciStatoSoggetto(puntatore);
}

/* Procedura che permette l'inserimento di un nome e controlla se rispetta
 * i requisiti (lettere e spazi). Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento. */
void inserisciNome(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    //ciclo per il controllo dell'input del nome
    do{

        //variabile temporanea da usare prima di passare il valore corretto al puntatore
        char tempString[DIM_NOME_COGNOME];

        printf("\nInserire il nome del soggetto, poi premere invio: ");
        scanf("%" STR(DIM_NOME_COGNOME) "[^\n]s", tempString);

        //controllo se è stato scartato qualche carattere
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore. Hai inserito troppi caratteri. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else

            //funzione che controlla se il nome inserito rispetta i requisiti (vedi controlloNome)
            if(controlloNome(tempString) == true){

                //se la validita viene confermata
                validita = true;

                //copio il contenuto dalla stringa temporanea alla variabile del puntatore
                strcpy(puntatore->nome, tempString);
            } else {
                validita = false;
            }
    }while (validita != true);
}

/* Procedura che permette l'inserimento di un cognome e controlla se rispetta
 * i requisiti (lettere e spazi). Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciCognome(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input del cognome */
    do{

        //variabile temporanea da usare prima di passare il valore corretto al puntatore
        char tempString[DIM_NOME_COGNOME];

        printf("\nInserire il cognome del soggetto, poi premere invio: ");
        scanf("%" STR(DIM_NOME_COGNOME) "[^\n]s", tempString);

        //controllo se è stato scartato qualche carattere
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore. Hai inserito troppi caratteri. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else

            //funzione che controlla se il cognome inserito rispetta i requisiti (vedi controlloCognome)
            if(controlloCognome(tempString) == true){

                //se la validita viene confermata
                validita = true;

                //copio il contenuto dalla stringa temporanea alla variabile del puntatore
                strcpy(puntatore->cognome, tempString);
            } else {
                validita = false;
            }
    }while (validita != true);
}

/* Procedura che permette l'inserimento di un altezza e se l'altezza inserita
 * rispetta i requisiti ( 0 < altezza < 250, numero intero). Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciAltezza(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input della altezza */
    do{

        //variabile temporanea da usare prima di passare il valore corretto al puntatore
        int tempAltezza;

        printf("\nInserire altezza del soggeto in cm (0-250), poi premere invio: ");
        scanf("%d", &tempAltezza);

        //controllo se è stato scartato qualche valore
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore! Puoi inserire solo numeri interi. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzione che controlla se l'altezza inserita rispetta i requisiti (vedi controlloAltezza)
            if(controlloAltezza(tempAltezza) == true){

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto dalla variabile temporanea alla variabile del puntatore
                puntatore->altezza = tempAltezza;
            }
            else {
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che permette l'inserimento di un peso e se esso
 * rispetta i requisiti ( 0 < peso < 200). Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciPeso(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input del peso */
    do{

        //variabile temporanea da usare prima di passare il valore corretto al puntatore
        float tempPeso;

        printf("\nInserire peso del soggeto in Kg (0-200), poi premere invio: ");
        scanf("%f", &tempPeso);

        //controllo se è stato scartato qualche valore
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore! Puoi inserire solo cifre. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzione che controlla se il peso inserito rispetta i requisiti (vedi controlloPeso)
            if(controlloPeso(tempPeso) == true){

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto dalla variabile temporanea alla variabile del puntatore
                puntatore->peso = tempPeso;
            }
            else {
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che permette l'inserimento di un colore per gli occhi e controlla se
 * rispetta i requisiti ( esadecimali 0-9 e A-F). Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciColoreOcchi(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input del colore degli occhi */
    do{

        //variabile temporanea da usare prima di passare il valore corretto al puntatore
        char tempColoreOcchi[DIM_COLORE_OCCHI_CAPELLI];

        printf("\nInserire il colore degli occhi usando il sistema esadecimale (0-9 e A-F), poi premere invio: ");
        scanf("%" STR(DIM_COLORE_OCCHI_CAPELLI) "[^\n]s", tempColoreOcchi);

        //controllo se è stato scartato qualche carattere
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore! Hai inserito troppi caratteri. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzione che controlla se il colore inserito rispetta i requisiti (vedi controlloColoreOcchi)
            if(controlloColoreOcchi(tempColoreOcchi) == true){

                //contatore ciclo for
                int i;

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto di ogni cella della variabile temporanea alla cella dell'array coloreOcchi
                for(i = 0; i < DIM_COLORE_OCCHI_CAPELLI; i++){
                    puntatore->coloreOcchi[i] = tempColoreOcchi[i];
                }
            }
            else {
                validita = false;
            }
        }
    } while(validita != true);
}

/* Procedura che permette l'inserimento di un colore per i capelli e controlla se
 * rispetta i requisiti (esadecimali 0-9 e A-F). Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciColoreCapelli(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input del colore dei capelli */
    do{

        //variabile temporanea da controllare prima di passare il valore corretto al puntatore
        char tempColoreCapelli[DIM_COLORE_OCCHI_CAPELLI];

        printf("\nInserire il colore dei capelli usando il sistema esadecimale (0-9 e A-F), poi premere invio: ");
        scanf("%6[^\n]s", tempColoreCapelli);

        //controllo se è stato scartato qualche carattere
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore! Hai inserito troppi caratteri. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzione che controlla se il colore inserito rispetta i requisiti (vedi controlloColoreCapelli)
            if(controlloColoreCapelli(tempColoreCapelli) == true){

                //contatore ciclo for
                int i;

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto di ogni cella della variabile temporanea alla cella dell'array coloreOcchi
                for(i = 0; i < DIM_COLORE_OCCHI_CAPELLI; i++){
                    puntatore->coloreCapelli[i] = tempColoreCapelli[i];
                }
            }
            else {
                validita = false;
            }
        }
    } while(validita != true);
}

/* Procedura che consente l'inserimento del tipo di capelli del soggetto scegliendo in base a dei valori
 * preimpostati e controlla che il valore scelto sia corretto. Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciTipoCapelli(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input del tipo dei capelli */
    do{

        //variabile temporanea da usare prima di passare il valore corretto al puntatore
        int tempTipoCapelli;

        printf("\nInserire il tipo di capelli del soggetto. Premere uno dei valori a schermo.");
        printf("\nCapelli CORTI = 0");
        printf("\nCapelli MEDI = 1");
        printf("\nCapelli LUNGHI = 2");
        printf("\nCapelli ALTRO = 3");
        printf("\nSelezione: ");
        scanf("%d", &tempTipoCapelli);

        //controllo se è stato scartato qualche valore
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore. Hai inserito valori non validi. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzine che controlla se il valore selezionato è corretto (vedi controlloTipoCapelli)
            if(controlloTipoCapelli(tempTipoCapelli) == true){

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto della variabile temporanea alla variabile del puntatore
                puntatore->tipoCapelli = tempTipoCapelli;
            }
            else {
                printf("\nErrore. Inserito un valore non valido.");
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che permette l'inserimento della presenza della barba
 * controlla poi se il valore inserito sia corretto. Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciBarba(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input sulla presenza della barba */
    do {

        //variabile temporanea per il controllo dell'input
        char barbaSiNo;

        printf("\nInserire presenza della barba (s/n):");
        scanf("%" STR(DIM_BARBA_CICATRICE) "c", &barbaSiNo);

        //controllo se è stato scartato qualche valore
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER) {
            printf("\nErrore. Hai inserito troppi caratteri. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {
            if(barbaSiNo == 's'){
                puntatore->barba = true;
                validita = true;
            } else
            if(barbaSiNo == 'n') {
                puntatore->barba = false;
                validita = true;
            } else {
                printf("\nErrore. Hai inserito valori non validi.");
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che permette l'inserimento della presenza di una cicatrice sull volto,
 * controlla poi se il valore inserito sia corretto. Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciCicatriceVolto(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input sulla presenza di cicatrici */
    do {

        //variabile temporanea per il controllo dell'input
        char cicatriceSiNo;

        printf("\nInserire presenza di una cicatrice sul volto (s/n):");
        scanf("%" STR(DIM_BARBA_CICATRICE) "c", &cicatriceSiNo);

        //controllo se è stato scartato qualche valore
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER) {
            printf("\nErrore. Hai inserito troppi caratteri. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {
            if(cicatriceSiNo == 's'){
                puntatore->cicatriceVolto = true;
                validita = true;
            } else
            if(cicatriceSiNo == 'n') {
                puntatore->cicatriceVolto = false;
                validita = true;
            } else {
                printf("\nErrore. Hai inserito valori non validi.");
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che consente l'inserimento della chiave della impronta digitale e ne controlla la correttezza.
 * Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciChiaveImpronta(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input dell'impronta digitale */
    do{

        //variabile temporanea per il controllo dell'input
        char tempChiaveImpronta[DIM_CHIAVE_IMPRONTA];

        printf("\nInserire impronta digitale (16 caratteri alfanumerici), poi premere invio:");
        scanf("%" STR(DIM_CHIAVE_IMPRONTA) "[^\n]s", tempChiaveImpronta);

        //controllo se è stato scartato qualche carattere
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore. Hai inserito troppi caratteri. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzine che controlla se i valori inseriti sono corretti (vedi controlloChiaveImpronta)
            if(controlloChiaveImpronta(tempChiaveImpronta) == true){

                //contatore ciclo for
                int i;

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto di ogni cella della variabile temporanea alla cella dell'array coloreOcchi
                for(i = 0; i < DIM_CHIAVE_IMPRONTA; i++){
                    puntatore->chiaveImprontaDigitale[i] = tempChiaveImpronta[i];
                }
            }
            else {
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che consente l'inserimento della residenza del soggetto. Riceve in ingresso un puntatore
 * ad un RecordSoggetto. Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciResidenza(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input della residenza */
    do{
        //variabile temporanea per il controllo dell'input
        char tempResidenza[DIM_RESIDENZA];

        printf("\nInserire la residenza del soggetto, poi premere invio:");
        scanf("%" STR(DIM_RESIDENZA) "[^\n]s", tempResidenza);

        //controllo se è stato scartato qualche carattere
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore. Hai inserito troppi caratteri. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {
            if(controlloResidenza(tempResidenza) == true){

                //se la validita viene confermata
                validita = true;

                //copio il contenuto della variabile temporanea alla variabile della struttura
                strcpy(puntatore->residenza, tempResidenza);
            }
            else {
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che consente l'inserimento della posizione del soggetto tramite le coordinate gps. Riceve
 * in ingresso un puntatore ad un RecordSoggetto. Se il valore inserito è corretto,
 * lo assegna alla variabile della struttura, altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciCoordinateGps(RecordSoggetto *puntatore){

    printf("\nInserire l'ultima posizione GPS nota del soggetto.");

    inserisciLatitudine(puntatore);
    inserisciLongitudine(puntatore);
}

/* Procedura che consente l'inserimento della latitudine e ne controlla la validita. Riceve
 * in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla rispettiva variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciLatitudine(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input della latitudine */
    do {

        //variabili temporanee per il controllo dell'input
        double tempLatitudine;

        printf("\nLatitudine (-90 / 90) = ");
        scanf("%lf", &tempLatitudine);

        //controllo se è stato scartato qualche valore
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore! Puoi inserire solo cifre. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzione che controlla se la latitudine inserita rispetta i requisiti (vedi controlloLatitudine)
            if(controlloLatitudine(tempLatitudine) == true){

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto dalla variabile temporanea alla variabile della struttura
                puntatore->ultimaPosizioneNota.latitudine = tempLatitudine;
            }
            else {
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che consente l'inserimento della longitudine e ne controlla la validità. Riceve
 * in ingresso un puntatore ad un RecordSoggetto. Se il valore inserito è corretto,
 * lo assegna alla rispettiva variabile della struttura, altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciLongitudine(RecordSoggetto *puntatore) {

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input della longitudine */
    do {

        //variabili temporanee per il controllo dell'input
        double tempLongitudine;

        printf("\nLongitudine (-180 / 180) = ");
        scanf("%lf", &tempLongitudine);

        //controllo se è stato scartato qualche valore
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore! Puoi inserire solo cifre. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzione che controlla se la longitudine inserita rispetta i requisiti (vedi controlloLongitudine)
            if(controlloLongitudine(tempLongitudine) == true){

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto dalla variabile temporanea alla variabile della struttura
                puntatore->ultimaPosizioneNota.longitudine = tempLongitudine;
            }
            else {
                validita = false;
            }
        }
    }while(validita != true);
}

/* Procedura che consente l'inserimento dello stato del soggetto scegliendo in base a dei valori
 * preimpostati e controlla che il valore scelto sia corretto. Riceve in ingresso un puntatore ad un RecordSoggetto.
 * Se il valore inserito è corretto, lo assegna alla variabile della struttura,
 * altrimenti segnala l'errore e richiede l'inserimento.*/
void inserisciStatoSoggetto(RecordSoggetto *puntatore){

    //variabile booleana per il controllo dell' input sul nome
    _Bool validita;

    /*ciclo per il controllo dell'input dello stato del soggetto */
    do{

        //variabile temporanea da usare prima di passare il valore corretto al puntatore
        int tempStatoSoggetto;

        printf("\nInserire lo stato attuale del soggetto. Premere uno dei valori a schermo.");
        printf("\nLIBERO = 0");
        printf("\nRICERCATO = 1");
        printf("\nIN_ARRESTO = 2");
        printf("\nEVASO = 3");
        printf("\nSelezione: ");
        scanf("%d", &tempStatoSoggetto);

        //controllo se è stato scartato qualche valore
        if(svuotaBuffer() > VALORE_CONTROLLO_BUFFER){
            printf("\nErrore! Hai inserito valori non validi. Riprova.");

            //se si, c'è stato un errore nell'inserimento
            validita = false;
        } else {

            //funzine che controlla se il valore selezionato è corretto (vedi controlloStatoSoggetto)
            if(controlloStatoSoggetto(tempStatoSoggetto) == true){

                //se la validita viene confermata
                validita = true;

                //assegno il contenuto della variabile temporanea alla variabile della struttura
                puntatore->statoDelSoggetto = tempStatoSoggetto;
            }
            else {
                printf("\nErrore! Inserito un valore non valido.");
                validita = false;
            }
        }
    }while(validita != true);
}