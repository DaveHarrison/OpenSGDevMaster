/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ScreenLOD!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESCREENLODINST

#include <stdlib.h>
#include <stdio.h>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGScreenLODBase.h"
#include "OSGScreenLOD.h"

OSG_USING_NAMESPACE


ScreenLODBase::TypeObject ScreenLODBase::_type(true,
    ScreenLODBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ScreenLODBase::createEmpty,
    ScreenLOD::initMethod,
    NULL,
    false,
    "<?xml version=\"1.0\"?>\n"
"\n"
"<FieldContainer\n"
"	name=\"ScreenLOD\"\n"
"	parent=\"Group\"\n"
"	library=\"RenderTrav\"\n"
"	pointerfieldtypes=\"none\"\n"
"	structure=\"concrete\"\n"
"	systemcomponent=\"true\"\n"
"	parentsystemcomponent=\"true\"\n"
"    isNodeCore=\"true\"\n"
">\n"
"</FieldContainer>\n"
,
    "" 
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScreenLODBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ScreenLODBase::getType(void) const 
{
    return _type;
} 

UInt32 ScreenLODBase::getContainerSize(void) const 
{ 
    return sizeof(ScreenLOD); 
}

/*------------------------- decorator get ------------------------------*/




/*------------------------------ access -----------------------------------*/

UInt32 ScreenLODBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void ScreenLODBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void ScreenLODBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create an empty new instance of the class, do not copy the prototype
ScreenLODPtr ScreenLODBase::createEmpty(void) 
{ 
    ScreenLODPtr returnValue; 
    
    newPtr<ScreenLOD>(returnValue); 

    return returnValue; 
}

FieldContainerPtr ScreenLODBase::shallowCopy(void) const 
{ 
    ScreenLODPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ScreenLOD *>(this)); 

    return returnValue; 
}



/*------------------------- constructors ----------------------------------*/

ScreenLODBase::ScreenLODBase(void) :
    Inherited()
{
}

ScreenLODBase::ScreenLODBase(const ScreenLODBase &source) :
    Inherited(source)
{
}

/*-------------------------- destructors ----------------------------------*/

ScreenLODBase::~ScreenLODBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ScreenLODBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ScreenLODBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ScreenLODBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ScreenLODBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ScreenLODBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ScreenLODBase::createAspectCopy(void) const
{
    ScreenLODPtr returnValue; 

    newAspectCopy(returnValue, 
                  dynamic_cast<const ScreenLOD *>(this)); 

    return returnValue; 
}
#endif

void ScreenLODBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ScreenLODPtr>::_type("ScreenLODPtr", "GroupPtr");
#endif


OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h 313 2006-10-18 22:54:24Z allenb $";
    static Char8 cvsid_hpp       [] = OSGSCREENLODBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSCREENLODBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSCREENLODFIELDS_HEADER_CVSID;
}
