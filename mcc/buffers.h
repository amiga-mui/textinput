/*
** $Id: buffers.h,v 1.1 1999-08-24 01:01:18 kingguppy Exp $
*/

int dobuffersize( struct Data *, int );
void freeaction( struct Data *, struct actionnode * );
char *doaction( struct Data *, ULONG, char *, int, char *, int );
char *undoaction( struct Data *, struct actionnode * );
