#ifndef FIFO_TABLICE
#define FIFO_TABLICE

#pragma once

typedef struct
{
	int nHead;		// g³owa
	int nTail;		// ogon
	int CurrentSize;       //zeby wiedziec ile elem jest obecnie 
	int MaxElement;       // maksymalna liczba elementow w kolejce
	int* Tab;           //tablica 
}QueueARRAY;

QueueARRAY* Create( int nSize );
int isEmpty( QueueARRAY* q );     						// Sprawdza, czy kolejka jest pusta
void EnQueue( QueueARRAY* q, int x );			    	// Wk³ada do kolejki
int DeQueue( QueueARRAY* q );					      	// Wyrzuæ z kolejki
void Clear( QueueARRAY* q );                         	// Czyœci wszystko, zostawia kolejkê jako strukturê
void Del( QueueARRAY** q );								// Usuniêcie ca³ej kolejki
void Print( QueueARRAY* q );

#endif