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
 **     class SortFirstWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGSortFirstWindowBase.h"
#include "OSGSortFirstWindow.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SortFirstWindow
    Cluster rendering configuration for sort first image composition
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     SortFirstWindowBase::_sfCompression
    
*/

/*! \var UInt32          SortFirstWindowBase::_sfSubtileSize
    
*/

/*! \var bool            SortFirstWindowBase::_sfCompose
    Transmit rendered image to cleint
*/

/*! \var UInt32          SortFirstWindowBase::_mfRegion
    left,right,bottom,top for each viewport
*/

/*! \var bool            SortFirstWindowBase::_sfUseFaceDistribution
    Enabe, disable analysation of face distribution
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SortFirstWindow *>::_type("SortFirstWindowPtr", "ClusterWindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SortFirstWindow *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SortFirstWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "compression",
        "",
        CompressionFieldId, CompressionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SortFirstWindow::editHandleCompression),
        static_cast<FieldGetMethodSig >(&SortFirstWindow::getHandleCompression));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "subtileSize",
        "",
        SubtileSizeFieldId, SubtileSizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SortFirstWindow::editHandleSubtileSize),
        static_cast<FieldGetMethodSig >(&SortFirstWindow::getHandleSubtileSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "compose",
        "Transmit rendered image to cleint\n",
        ComposeFieldId, ComposeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SortFirstWindow::editHandleCompose),
        static_cast<FieldGetMethodSig >(&SortFirstWindow::getHandleCompose));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "region",
        "left,right,bottom,top for each viewport\n",
        RegionFieldId, RegionFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SortFirstWindow::editHandleRegion),
        static_cast<FieldGetMethodSig >(&SortFirstWindow::getHandleRegion));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "useFaceDistribution",
        "Enabe, disable analysation of face distribution\n",
        UseFaceDistributionFieldId, UseFaceDistributionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SortFirstWindow::editHandleUseFaceDistribution),
        static_cast<FieldGetMethodSig >(&SortFirstWindow::getHandleUseFaceDistribution));

    oType.addInitialDesc(pDesc);
}


SortFirstWindowBase::TypeObject SortFirstWindowBase::_type(
    SortFirstWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SortFirstWindowBase::createEmptyLocal),
    SortFirstWindow::initMethod,
    SortFirstWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SortFirstWindow::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SortFirstWindow\"\n"
    "   parent=\"ClusterWindow\"\n"
    "   library=\"Cluster\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpClusterWindow\"\n"
    "   >\n"
    "  Cluster rendering configuration for sort first image composition\n"
    "  <Field\n"
    "\t name=\"compression\"\n"
    "\t type=\"std::string\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"subtileSize\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"32\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"compose\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tTransmit rendered image to cleint\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"region\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tleft,right,bottom,top for each viewport\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"useFaceDistribution\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"false\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tEnabe, disable analysation of face distribution\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Cluster rendering configuration for sort first image composition\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SortFirstWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &SortFirstWindowBase::getType(void) const
{
    return _type;
}

UInt32 SortFirstWindowBase::getContainerSize(void) const
{
    return sizeof(SortFirstWindow);
}

/*------------------------- decorator get ------------------------------*/


SFString *SortFirstWindowBase::editSFCompression(void)
{
    editSField(CompressionFieldMask);

    return &_sfCompression;
}

const SFString *SortFirstWindowBase::getSFCompression(void) const
{
    return &_sfCompression;
}


SFUInt32 *SortFirstWindowBase::editSFSubtileSize(void)
{
    editSField(SubtileSizeFieldMask);

    return &_sfSubtileSize;
}

const SFUInt32 *SortFirstWindowBase::getSFSubtileSize(void) const
{
    return &_sfSubtileSize;
}


SFBool *SortFirstWindowBase::editSFCompose(void)
{
    editSField(ComposeFieldMask);

    return &_sfCompose;
}

const SFBool *SortFirstWindowBase::getSFCompose(void) const
{
    return &_sfCompose;
}


MFUInt32 *SortFirstWindowBase::editMFRegion(void)
{
    editMField(RegionFieldMask, _mfRegion);

    return &_mfRegion;
}

const MFUInt32 *SortFirstWindowBase::getMFRegion(void) const
{
    return &_mfRegion;
}


SFBool *SortFirstWindowBase::editSFUseFaceDistribution(void)
{
    editSField(UseFaceDistributionFieldMask);

    return &_sfUseFaceDistribution;
}

const SFBool *SortFirstWindowBase::getSFUseFaceDistribution(void) const
{
    return &_sfUseFaceDistribution;
}






/*------------------------------ access -----------------------------------*/

UInt32 SortFirstWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
    {
        returnValue += _sfCompression.getBinSize();
    }
    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
    {
        returnValue += _sfSubtileSize.getBinSize();
    }
    if(FieldBits::NoField != (ComposeFieldMask & whichField))
    {
        returnValue += _sfCompose.getBinSize();
    }
    if(FieldBits::NoField != (RegionFieldMask & whichField))
    {
        returnValue += _mfRegion.getBinSize();
    }
    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
    {
        returnValue += _sfUseFaceDistribution.getBinSize();
    }

    return returnValue;
}

void SortFirstWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
    {
        _sfCompression.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
    {
        _sfSubtileSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ComposeFieldMask & whichField))
    {
        _sfCompose.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RegionFieldMask & whichField))
    {
        _mfRegion.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
    {
        _sfUseFaceDistribution.copyToBin(pMem);
    }
}

void SortFirstWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CompressionFieldMask & whichField))
    {
        editSField(CompressionFieldMask);
        _sfCompression.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SubtileSizeFieldMask & whichField))
    {
        editSField(SubtileSizeFieldMask);
        _sfSubtileSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ComposeFieldMask & whichField))
    {
        editSField(ComposeFieldMask);
        _sfCompose.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RegionFieldMask & whichField))
    {
        editMField(RegionFieldMask, _mfRegion);
        _mfRegion.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UseFaceDistributionFieldMask & whichField))
    {
        editSField(UseFaceDistributionFieldMask);
        _sfUseFaceDistribution.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SortFirstWindowTransitPtr SortFirstWindowBase::createLocal(BitVector bFlags)
{
    SortFirstWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SortFirstWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SortFirstWindowTransitPtr SortFirstWindowBase::createDependent(BitVector bFlags)
{
    SortFirstWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SortFirstWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SortFirstWindowTransitPtr SortFirstWindowBase::create(void)
{
    SortFirstWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SortFirstWindow>(tmpPtr);
    }

    return fc;
}

SortFirstWindow *SortFirstWindowBase::createEmptyLocal(BitVector bFlags)
{
    SortFirstWindow *returnValue;

    newPtr<SortFirstWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SortFirstWindow *SortFirstWindowBase::createEmpty(void)
{
    SortFirstWindow *returnValue;

    newPtr<SortFirstWindow>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SortFirstWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SortFirstWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SortFirstWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SortFirstWindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SortFirstWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SortFirstWindow *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SortFirstWindowBase::shallowCopy(void) const
{
    SortFirstWindow *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SortFirstWindow *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SortFirstWindowBase::SortFirstWindowBase(void) :
    Inherited(),
    _sfCompression            (),
    _sfSubtileSize            (UInt32(32)),
    _sfCompose                (bool(true)),
    _mfRegion                 (),
    _sfUseFaceDistribution    (bool(false))
{
}

SortFirstWindowBase::SortFirstWindowBase(const SortFirstWindowBase &source) :
    Inherited(source),
    _sfCompression            (source._sfCompression            ),
    _sfSubtileSize            (source._sfSubtileSize            ),
    _sfCompose                (source._sfCompose                ),
    _mfRegion                 (source._mfRegion                 ),
    _sfUseFaceDistribution    (source._sfUseFaceDistribution    )
{
}


/*-------------------------- destructors ----------------------------------*/

SortFirstWindowBase::~SortFirstWindowBase(void)
{
}


GetFieldHandlePtr SortFirstWindowBase::getHandleCompression     (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfCompression,
             this->getType().getFieldDesc(CompressionFieldId),
             const_cast<SortFirstWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SortFirstWindowBase::editHandleCompression    (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfCompression,
             this->getType().getFieldDesc(CompressionFieldId),
             this));


    editSField(CompressionFieldMask);

    return returnValue;
}

GetFieldHandlePtr SortFirstWindowBase::getHandleSubtileSize     (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSubtileSize,
             this->getType().getFieldDesc(SubtileSizeFieldId),
             const_cast<SortFirstWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SortFirstWindowBase::editHandleSubtileSize    (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSubtileSize,
             this->getType().getFieldDesc(SubtileSizeFieldId),
             this));


    editSField(SubtileSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr SortFirstWindowBase::getHandleCompose         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfCompose,
             this->getType().getFieldDesc(ComposeFieldId),
             const_cast<SortFirstWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SortFirstWindowBase::editHandleCompose        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfCompose,
             this->getType().getFieldDesc(ComposeFieldId),
             this));


    editSField(ComposeFieldMask);

    return returnValue;
}

GetFieldHandlePtr SortFirstWindowBase::getHandleRegion          (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfRegion,
             this->getType().getFieldDesc(RegionFieldId),
             const_cast<SortFirstWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SortFirstWindowBase::editHandleRegion         (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfRegion,
             this->getType().getFieldDesc(RegionFieldId),
             this));


    editMField(RegionFieldMask, _mfRegion);

    return returnValue;
}

GetFieldHandlePtr SortFirstWindowBase::getHandleUseFaceDistribution (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseFaceDistribution,
             this->getType().getFieldDesc(UseFaceDistributionFieldId),
             const_cast<SortFirstWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SortFirstWindowBase::editHandleUseFaceDistribution(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseFaceDistribution,
             this->getType().getFieldDesc(UseFaceDistributionFieldId),
             this));


    editSField(UseFaceDistributionFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SortFirstWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SortFirstWindow *pThis = static_cast<SortFirstWindow *>(this);

    pThis->execSync(static_cast<SortFirstWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SortFirstWindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SortFirstWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SortFirstWindow *>(pRefAspect),
                  dynamic_cast<const SortFirstWindow *>(this));

    return returnValue;
}
#endif

void SortFirstWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfRegion.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
