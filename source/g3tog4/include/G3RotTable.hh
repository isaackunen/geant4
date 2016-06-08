#ifndef _G3ROTTABLE_
#define _G3ROTTABLE_ 1

// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G3RotTable.hh,v 1.5 1999/05/26 03:46:29 lockman Exp $
// GEANT4 tag $Name: geant4-00-01 $
//
//
// G3 materials table.
// Maps G3 material indices to their G4 material object counterparts.
// Maintains a linked List of G3 material index/G4 material pointer pairs.

#include <rw/tpordvec.h>
#include "G3toG4RotationMatrix.hh"

class G3RotTable {
private:
  RWTPtrOrderedVector<G3toG4RotationMatrix>* _Rot;
public:
  G3RotTable();
  ~G3RotTable();
  G3toG4RotationMatrix* Get(G4int rotid);
  void Put(G4int rotid, G3toG4RotationMatrix* rotpt);
};

extern G3RotTable G3Rot;
#endif