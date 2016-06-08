// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4Exception.cc,v 1.4 1999/06/21 09:11:16 allison Exp $
// GEANT4 tag $Name: geant4-00-01 $
//
// 
// ----------------------------------------------------------------------
// G4Exception
//
// Global error function prints string to G4cerr, and aborts
// program
//
// History:
// 30.06.95 P.Kent

#include "G4ios.hh"
#include <stdlib.h>

void G4Exception(const char* s)
{
    if (s)
	{
	    G4cerr << s << endl;
	}

   G4cerr << endl << "*** G4Exception: Aborting execution ***" << endl;
   abort();
}

#ifdef G4USE_STL
#include <string>
void G4Exception(string s)
{
  G4Exception(s.c_str());
}
// Other typedefs
#include <rw/cstring.h>
typedef RWCString G4String;

void G4Exception(G4String s)
{
  G4Exception(s.c_str());
}
#endif









