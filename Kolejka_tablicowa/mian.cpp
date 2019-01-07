// Kolejka_tablicowa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FIFO_tablice.h"
//#include <stdio.h>

int main()
{
	QueueARRAY* pHead = Create( 5 );

	EnQueue( pHead, 1 );
	EnQueue( pHead, 2 );
	EnQueue( pHead, 3 );
	EnQueue( pHead, 4 );
	EnQueue( pHead, 5 );
	Print ( pHead );
	DeQueue( pHead );
	
	EnQueue( pHead, 7 );
	DeQueue( pHead );
	EnQueue ( pHead, 8 );
	Print ( pHead );

	EnQueue( pHead, 10 ); //kolejka ma byc pelna
	Clear( pHead );
	Print( pHead );
	EnQueue ( pHead, 8 );
	Print ( pHead );
    return 0;
}

