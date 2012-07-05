////////////////////////////////////////////////////
// Copyright (c) 2012 ICRL
// See the file LICENSE.txt for copying permission.
// 
// Original Author: Randy Gaul
// Date:   7/5/2012
// Contact: r.gaul@digipen.edu
////////////////////////////////////////////////////

#ifndef OBJECTFACTORYH
#define OBJECTFACTORYH

//
// The object factory allows easy handling of creation,
// deletion, updating, initializing, and drawing of all
// game objects. Simply include ObjectFactory.h to start
// creating your objects from a state file.
// Additional documentation on how object oriented C
// works: http://cecilsunkure.blogspot.com/2012/04/object-oriented-c-class-like-structures.html
//

#include "GameObject.h"

//
// AE_CreateObject
// Purpose: Creates a game object from an ID. This is useful since
//          the factory abstracts the necessity of including many
//          various object files in order to just create different
//          kinds of objects. The GAMEOBJECT_TYPE enumeration is
//          within GameObject.h.
//
GAMEOBJECT *AE_CreateObject( GAMEOBJECT_TYPE ID );

//
// AE_DeleteObject
// Purpose: Deletes an object from the object list and deallocates
//          its memory.
//
RETURN_TYPE AE_DeleteObject( GAMEOBJECT *toDelete );

//
// AE_UpdateObjects
// Purpose: Cycles the object list and calls their update functions.
//
RETURN_TYPE AE_UpdateObjects( void );

//
// AE_DrawObjects
// Purpose: Cycles the object list and calls their draw functions.
//
RETURN_TYPE AE_DrawObjects( void );

//
// AE_DestroyObjects
// Purpose: Cycles the object list and calls their destroy functions.
//
RETURN_TYPE AE_DestroyObjects( void );

//
// AE_InitObjects
// Purpose: Cycles the object list and calls their init functions.
//
RETURN_TYPE AE_InitObjects( void );

#endif  OBJECTFACTORYH