/*
 * Arctic MMORPG Server Software
 * Copyright (c) 2008-2012 Arctic Server Team
 * See COPYING for license details.
 */

#ifndef _MANAGEDMODELCONTAINER_H
#define _MANAGEDMODELCONTAINER_H

#include "ModelContainer.h"

//=======================================================
/**
This is a ModelContainer with reference count information.
*/

namespace VMAP
{
    //=======================================================

    class ManagedModelContainer :
    public ModelContainer
    {
        private:
            int refCount;
        public:
            ManagedModelContainer(void) ;
            ~ManagedModelContainer(void);

            void incRefCount() { ++refCount; }
            void decRefCount() { --refCount; if(refCount < 0) refCount = 0; }
            int getRefCount() { return refCount; }
    };

    //=======================================================
}
#endif
