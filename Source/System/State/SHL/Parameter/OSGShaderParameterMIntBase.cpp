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
 **     class ShaderParameterMInt!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERMINTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterMIntBase.h"
#include "OSGShaderParameterMInt.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterMInt
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Int32           ShaderParameterMIntBase::_mfValue
    parameter value
*/


void ShaderParameterMIntBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const MFInt32 *(ShaderParameterMIntBase::*GetMFValueF)(void) const;

    GetMFValueF GetMFValue = &ShaderParameterMIntBase::getMFValue;
#endif

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShaderParameterMIntBase::editMFValue),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFValue));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShaderParameterMIntBase::getMFValue));
#endif

    oType.addInitialDesc(pDesc);
}


ShaderParameterMIntBase::TypeObject ShaderParameterMIntBase::_type(
    ShaderParameterMIntBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterMIntBase::createEmpty,
    ShaderParameterMInt::initMethod,
    (InitalInsertDescFunc) &ShaderParameterMIntBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterMInt\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterMIntBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterMIntBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterMIntBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterMInt);
}

/*------------------------- decorator get ------------------------------*/


MFInt32 *ShaderParameterMIntBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFInt32 *ShaderParameterMIntBase::getMFValue(void) const
{
    return &_mfValue;
}

#ifdef OSG_1_GET_COMPAT
MFInt32             *ShaderParameterMIntBase::getMFValue          (void)
{
    return this->editMFValue          ();
}
#endif



/*********************************** Non-ptr code ********************************/
void ShaderParameterMIntBase::pushToValue(const Int32& value)
{
    editMField(ValueFieldMask, _mfValue);
    _mfValue.push_back(value);
}

void ShaderParameterMIntBase::insertIntoValue(UInt32                uiIndex,
                                                   const Int32& value   )
{
    editMField(ValueFieldMask, _mfValue);

    MFInt32::iterator fieldIt = _mfValue.begin();

    fieldIt += uiIndex;

    _mfValue.insert(fieldIt, value);
}

void ShaderParameterMIntBase::replaceInValue(UInt32                uiIndex,
                                                       const Int32& value   )
{
    if(uiIndex >= _mfValue.size())
        return;

    editMField(ValueFieldMask, _mfValue);

    _mfValue[uiIndex] = value;
}

void ShaderParameterMIntBase::replaceInValue(const Int32& pOldElem,
                                                        const Int32& pNewElem)
{
    Int32  elemIdx = _mfValue.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ValueFieldMask, _mfValue);

        MFInt32::iterator fieldIt = _mfValue.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ShaderParameterMIntBase::removeFromValue(UInt32 uiIndex)
{
    if(uiIndex < _mfValue.size())
    {
        editMField(ValueFieldMask, _mfValue);

        MFInt32::iterator fieldIt = _mfValue.begin();

        fieldIt += uiIndex;
        _mfValue.erase(fieldIt);
    }
}

void ShaderParameterMIntBase::removeFromValue(const Int32& value)
{
    Int32 iElemIdx = _mfValue.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ValueFieldMask, _mfValue);

        MFInt32::iterator fieldIt = _mfValue.begin();

        fieldIt += iElemIdx;

        _mfValue.erase(fieldIt);
    }
}

void ShaderParameterMIntBase::clearValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    _mfValue.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterMIntBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterMIntBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void ShaderParameterMIntBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterMIntPtr ShaderParameterMIntBase::create(void)
{
    ShaderParameterMIntPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<ShaderParameterMInt::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterMIntPtr ShaderParameterMIntBase::createEmpty(void)
{
    ShaderParameterMIntPtr returnValue;

    newPtr<ShaderParameterMInt>(returnValue);

    return returnValue;
}

FieldContainerPtr ShaderParameterMIntBase::shallowCopy(void) const
{
    ShaderParameterMIntPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ShaderParameterMInt *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterMIntBase::ShaderParameterMIntBase(void) :
    Inherited(),
    _mfValue                  ()
{
}

ShaderParameterMIntBase::ShaderParameterMIntBase(const ShaderParameterMIntBase &source) :
    Inherited(source),
    _mfValue                  (source._mfValue                  )
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterMIntBase::~ShaderParameterMIntBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ShaderParameterMIntBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ShaderParameterMIntBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterMIntBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterMIntBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ShaderParameterMIntBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterMIntBase::createAspectCopy(void) const
{
    ShaderParameterMIntPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterMInt *>(this));

    return returnValue;
}
#endif

void ShaderParameterMIntBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfValue.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterMIntPtr>::_type("ShaderParameterMIntPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterMIntPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ShaderParameterMIntPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ShaderParameterMIntPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE