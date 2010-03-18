/*
** $Id: extedit.h,v 1.1.1.1 1999-05-09 18:50:40 kingguppy Exp $
*/

APTR ee_add( char *filename, APTR obj, int async );
void ee_free( struct exteditinfonode *ee );
void ee_setobj( struct exteditinfonode *ee, APTR obj );
void ee_restart( struct exteditinfonode *ee );
