// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4UIcmdWithADouble.hh,v 1.1 1999/01/07 16:09:21 gunter Exp $
// GEANT4 tag $Name: geant4-00-01 $
//
//

#ifndef G4UIcmdWithADouble_H
#define G4UIcmdWithADouble_H 1

#include "G4UIcommand.hh"

class G4UIcmdWithADouble : public G4UIcommand
{
  public:
    G4UIcmdWithADouble
    (const char * theCommandPath,G4UImessenger * theMessenger);
    
    G4double GetNewDoubleValue(G4String paramString);
    G4String ConvertToString(G4double dblValue);
    void SetParameterName(const char * theName,G4bool omittable,
                          G4bool currentAsDefault=false);
    void SetDefaultValue(G4double defVal);
};

#endif