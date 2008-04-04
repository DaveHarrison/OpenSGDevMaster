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
 **     class GeoVectorProperty!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOVECTORPROPERTYINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGGeoVectorPropertyBase.h"
#include "OSGGeoVectorProperty.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoVectorProperty
    Abstract base class for all vector-valued GeoProperties.
    Provides a uniform interface for accessing all vector data in geometry using
    automatic conversion methods.
 */


GeoVectorPropertyBase::TypeObject GeoVectorPropertyBase::_type(
    GeoVectorPropertyBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    GeoVectorProperty::initMethod,
    GeoVectorProperty::exitMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GeoVectorProperty\"\n"
    "\tparent=\"GeoProperty\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "Abstract base class for all vector-valued GeoProperties.\n"
    "Provides a uniform interface for accessing all vector data in geometry using\n"
    "automatic conversion methods.\n"
    "</FieldContainer>\n",
    "Abstract base class for all vector-valued GeoProperties.\n"
    "Provides a uniform interface for accessing all vector data in geometry using\n"
    "automatic conversion methods.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoVectorPropertyBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoVectorPropertyBase::getType(void) const
{
    return _type;
}

UInt32 GeoVectorPropertyBase::getContainerSize(void) const
{
    return sizeof(GeoVectorProperty);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 GeoVectorPropertyBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GeoVectorPropertyBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GeoVectorPropertyBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

GeoVectorPropertyBase::GeoVectorPropertyBase(void) :
    Inherited()
{
}

GeoVectorPropertyBase::GeoVectorPropertyBase(const GeoVectorPropertyBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GeoVectorPropertyBase::~GeoVectorPropertyBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GeoVectorPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeoVectorPropertyBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void GeoVectorPropertyBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoVectorPropertyPtr>::_type("GeoVectorPropertyPtr", "GeoPropertyPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoVectorPropertyPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    GeoVectorPropertyPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         GeoVectorPropertyPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, GeoVectorPropertyPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, GeoVectorPropertyPtr, 0);

OSG_END_NAMESPACE
