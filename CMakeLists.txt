cmake_minimum_required(VERSION 3.17)
project(progetto_lrndnl C)

set(CMAKE_C_STANDARD 90)

add_executable(progetto_lrndnl main.c recordSoggetto.c recordSoggetto.h funzioniControllo.c funzioniControllo.h enumerazioni.c enumerazioni.h generazioneCasuale.c generazioneCasuale.h stampaRecord.c stampaRecord.h comparazioneRecord.c comparazioneRecord.h inserimentoRecord.c inserimentoRecord.h raccoltaLibrerie.c raccoltaLibrerie.h)