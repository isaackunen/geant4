// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G3MatTable.cc,v 1.6 1999/05/28 21:08:55 lockman Exp $
// GEANT4 tag $Name: geant4-00-01 $
//

#include "globals.hh"
#include "G3MatTable.hh"
#include "G4Material.hh"

G3MatTable::G3MatTable(){
  _Mat = new 
    RWTPtrOrderedVector<G4Material>;
};

G3MatTable::~G3MatTable(){
  _Mat->clear();
  G4cout << "Deleted G3MatTable..." << endl;
  delete _Mat;
};

G4Material*
G3MatTable::get(G4int MatID){
  return (*_Mat)[MatID-1];
};

void G3MatTable::put(G4int MatID, G4Material* MatPT){
  _Mat->insertAt(MatID-1, MatPT);
};