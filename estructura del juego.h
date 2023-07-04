#ifndef BLACKJACK_H_INCLUDED
#define BLACKJACK_H_INCLUDED

#define MAX 100
#define MAX_JUGADORES 4

struct jugador{
    char nombre[MAX];
    int puntos;
};

struct jugador jugadores [MAX_JUGADORES];

#endif

