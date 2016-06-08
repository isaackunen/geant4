// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4OpenGLStoredWin32.cc,v 1.3 1999/01/11 00:47:47 allison Exp $
// GEANT4 tag $Name: geant4-00-01 $
//
// 
// OpenGLStoredWin32 graphics system factory.


#ifdef G4VIS_BUILD_OPENGLWIN32_DRIVER

#include <GL/gl.h>
#include <GL/glx.h>
#include <GL/glu.h>

#include "G4VisFeaturesOfOpenGL.hh"
#include "G4VSceneHandler.hh"
#include "G4OpenGLSceneHandler.hh"
#include "G4OpenGLViewer.hh"
#include "G4OpenGLStoredWin32.hh"
#include "G4OpenGLStoredWin32Viewer.hh"

G4OpenGLStoredWin32::G4OpenGLStoredWin32 ():
  G4VGraphicsSystem ("OpenGLStoredWin32",
		     "OGLSWin32",
		     G4VisFeaturesOfOpenGLSWin32 (),
		     G4VGraphicsSystem::threeD) {}

G4VSceneHandler* G4OpenGLStoredWin32::CreateSceneHandler () {
  G4VSceneHandler* pScene = new G4OpenGLStoredSceneHandler (*this);
  G4cout << G4OpenGLStoredSceneHandler::GetSceneCount ()
       << ' ' << fName << " scenes extanct." << endl;
  return    pScene;
}

G4VViewer* G4OpenGLStoredWin32::CreateViewer (G4VSceneHandler& scene) {
  G4VViewer* pView =
    new G4OpenGLStoredWin32Viewer ((G4OpenGLStoredSceneHandler&) scene);
  if (pView) {
    if (pView -> GetViewId () < 0) {
      delete pView;
      pView = 0;
      G4cerr << "G4OpenGLStoredWin32::CreateViewer: error flagged by"
	" negative view id in G4OpenGLStoredWin32Viewer creation."
	"\n Destroying view and returning null pointer." << endl;
    }
  }
  else {
    G4cerr << "G4OpenGLStoredWin32::CreateViewer: null pointer on"
      " new G4OpenGLStoredWin32Viewer." << endl;
  }
  return pView;
}

#endif
