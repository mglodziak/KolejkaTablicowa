#include "FIFO_tablice.h"
#include "stdio.h"
#include <stdlib.h>



QueueARRAY* Create( int nSize )
{
	QueueARRAY* p = ( QueueARRAY* )calloc( 1, sizeof( QueueARRAY ) );
	//!!!!!
	if( !p )
	{
		perror( "Error creating queue struct!!" );
		return NULL;
	}
	p->Tab = ( int* )calloc( nSize, sizeof( int ) );
	if( !(p->Tab) )
	{
		perror( "Error creating queue Tab!!" );
		return NULL;
	}

	p->MaxElement = nSize;

	return p;
}
//----------
int isEmpty( QueueARRAY* q )
{
	return !( q->CurrentSize );
}
//----------
void EnQueue( QueueARRAY* q, int x )
{
	if ( q->CurrentSize == q->MaxElement )
	{
		printf( "Kolejka jest pelna\n" );
		return;
	}
	q->Tab[q->nTail] = x;
	q->nTail = ( q->nTail + 1 ) % q->MaxElement;

	q->CurrentSize++;
}
//----------
int DeQueue( QueueARRAY* q )
{
	if ( isEmpty( q ) )
	{
		printf( "Kolejka jest pusta!!" );
		return 0;
	}

	int x = q->Tab[q->nHead];
	q->nHead = ( q->nHead + 1 ) % q->MaxElement;

	q->CurrentSize--;

	return x;
}
//----------
void Clear( QueueARRAY* q )
{
	q->nHead = q->nTail = q->CurrentSize = 0;
}
//----------
void Del( QueueARRAY** q )
{
	free( ( *q )->Tab );
	free( *q );
	*q = NULL;
}
//----------
void Print( QueueARRAY* q )
{
	for ( int i = 0; i < q->CurrentSize; i++ )
	{
	

		int x = q->Tab[q->nHead]; 
		printf ( "%d ", x );
		q->nHead++;
		if ( q->nHead >= q->MaxElement )
		{
			q->nHead = 0;
		}

	}
	printf ( "\n" );
}

