#ifndef FIFO_TABLICE
#define FIFO_TABLICE

#pragma once

typedef struct
{
	int nHead;		// g�owa
	int nTail;		// ogon
	int CurrentSize;       //zeby wiedziec ile elem jest obecnie 
	int MaxElement;       // maksymalna liczba elementow w kolejce
	int* Tab;           //tablica 
}QueueARRAY;

QueueARRAY* Create( int nSize );
int isEmpty( QueueARRAY* q );     						// Sprawdza, czy kolejka jest pusta
void EnQueue( QueueARRAY* q, int x );			    	// Wk�ada do kolejki
int DeQueue( QueueARRAY* q );					      	// Wyrzu� z kolejki
void Clear( QueueARRAY* q );                         	// Czy�ci wszystko, zostawia kolejk� jako struktur�
void Del( QueueARRAY** q );								// Usuni�cie ca�ej kolejki
void Print( QueueARRAY* q );

#endif