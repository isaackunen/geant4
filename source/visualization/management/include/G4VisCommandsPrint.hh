// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4VisCommandsPrint.hh,v 1.2 1999/01/09 16:31:00 allison Exp $
// GEANT4 tag $Name: geant4-00-01 $
//
// 
// /vis~/print/ commands
// John Allison  7th September 1997

#ifndef G4VISCOMMANDSPRINT_HH
#define G4VISCOMMANDSPRINT_HH

#include "globals.hh"

////////////////////////////////////////////////////  /vis~/print/...  ////
//vis \hline
//vis /vis~/print/ &&
//vis ...menu of printing possibilities, also controlled by ``Verbose''
//vis parameter. \\%
class G4VisCommandPrint {
public:
  G4String GetCommandName () const {return "/vis~/print/";}
  G4String GetGuidance () const {
    return "...menu of printing possibilities, also controlled by \"Verbose\" "
      "parameter.";
  }
};

#endif