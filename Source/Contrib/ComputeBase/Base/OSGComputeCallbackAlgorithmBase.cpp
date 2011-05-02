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
 **     class ComputeCallbackAlgorithm!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGComputeCallbackAlgorithmBase.h"
#include "OSGComputeCallbackAlgorithm.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComputeCallbackAlgorithm
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ComputeFunctorCallback ComputeCallbackAlgorithmBase::_sfCallback
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ComputeCallbackAlgorithm *>::_type("ComputeCallbackAlgorithmPtr", "ComputeAlgorithmPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ComputeCallbackAlgorithm *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ComputeCallbackAlgorithm *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ComputeCallbackAlgorithm *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ComputeCallbackAlgorithmBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFComputeFunctorCallback::Description(
        SFComputeFunctorCallback::getClassType(),
        "callback",
        "",
        CallbackFieldId, CallbackFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ComputeCallbackAlgorithm::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ComputeCallbackAlgorithm::invalidGetField));

    oType.addInitialDesc(pDesc);
}


ComputeCallbackAlgorithmBase::TypeObject ComputeCallbackAlgorithmBase::_type(
    ComputeCallbackAlgorithmBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ComputeCallbackAlgorithmBase::createEmptyLocal),
    ComputeCallbackAlgorithm::initMethod,
    ComputeCallbackAlgorithm::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ComputeCallbackAlgorithm::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ComputeCallbackAlgorithm\"\n"
    "   parent=\"ComputeAlgorithm\"\n"
    "   library=\"ContribComputeBase\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"false\"\n"
    "   >\n"
    "  <Field\n"
    "     name=\"callback\"\n"
    "     type=\"ComputeFunctorCallback\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"none\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComputeCallbackAlgorithmBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComputeCallbackAlgorithmBase::getType(void) const
{
    return _type;
}

UInt32 ComputeCallbackAlgorithmBase::getContainerSize(void) const
{
    return sizeof(ComputeCallbackAlgorithm);
}

/*------------------------- decorator get ------------------------------*/







/*------------------------------ access -----------------------------------*/

UInt32 ComputeCallbackAlgorithmBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CallbackFieldMask & whichField))
    {
        returnValue += _sfCallback.getBinSize();
    }

    return returnValue;
}

void ComputeCallbackAlgorithmBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CallbackFieldMask & whichField))
    {
        _sfCallback.copyToBin(pMem);
    }
}

void ComputeCallbackAlgorithmBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CallbackFieldMask & whichField))
    {
        editSField(CallbackFieldMask);
        _sfCallback.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ComputeCallbackAlgorithmTransitPtr ComputeCallbackAlgorithmBase::createLocal(BitVector bFlags)
{
    ComputeCallbackAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComputeCallbackAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ComputeCallbackAlgorithmTransitPtr ComputeCallbackAlgorithmBase::createDependent(BitVector bFlags)
{
    ComputeCallbackAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ComputeCallbackAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComputeCallbackAlgorithmTransitPtr ComputeCallbackAlgorithmBase::create(void)
{
    ComputeCallbackAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ComputeCallbackAlgorithm>(tmpPtr);
    }

    return fc;
}

ComputeCallbackAlgorithm *ComputeCallbackAlgorithmBase::createEmptyLocal(BitVector bFlags)
{
    ComputeCallbackAlgorithm *returnValue;

    newPtr<ComputeCallbackAlgorithm>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComputeCallbackAlgorithm *ComputeCallbackAlgorithmBase::createEmpty(void)
{
    ComputeCallbackAlgorithm *returnValue;

    newPtr<ComputeCallbackAlgorithm>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ComputeCallbackAlgorithmBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComputeCallbackAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComputeCallbackAlgorithm *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComputeCallbackAlgorithmBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ComputeCallbackAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComputeCallbackAlgorithm *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComputeCallbackAlgorithmBase::shallowCopy(void) const
{
    ComputeCallbackAlgorithm *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ComputeCallbackAlgorithm *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ComputeCallbackAlgorithmBase::ComputeCallbackAlgorithmBase(void) :
    Inherited(),
    _sfCallback               ()
{
}

ComputeCallbackAlgorithmBase::ComputeCallbackAlgorithmBase(const ComputeCallbackAlgorithmBase &source) :
    Inherited(source),
    _sfCallback               (source._sfCallback               )
{
}


/*-------------------------- destructors ----------------------------------*/

ComputeCallbackAlgorithmBase::~ComputeCallbackAlgorithmBase(void)
{
}


GetFieldHandlePtr ComputeCallbackAlgorithmBase::getHandleCallback        (void) const
{
    SFComputeFunctorCallback::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ComputeCallbackAlgorithmBase::editHandleCallback       (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ComputeCallbackAlgorithmBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ComputeCallbackAlgorithm *pThis = static_cast<ComputeCallbackAlgorithm *>(this);

    pThis->execSync(static_cast<ComputeCallbackAlgorithm *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComputeCallbackAlgorithmBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ComputeCallbackAlgorithm *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComputeCallbackAlgorithm *>(pRefAspect),
                  dynamic_cast<const ComputeCallbackAlgorithm *>(this));

    return returnValue;
}
#endif

void ComputeCallbackAlgorithmBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
