/*
** $Id: extensions.h,v 1.1.1.1 1999-05-09 18:50:40 kingguppy Exp $
*/

void openrexxport( struct Data * );
ULONG disprexxport( struct Data * );
void closerexxport( struct Data * );
struct RexxMsg *sendrexxcmd( struct Data *, char *, char *, STRPTR, STRPTR, STRPTR );
void findurls( struct Data * );
void freeurls( struct Data * );
void freemisspells( struct Data * );
struct CMUser *cm_getentry( void );
BOOL ispell_run( void );
