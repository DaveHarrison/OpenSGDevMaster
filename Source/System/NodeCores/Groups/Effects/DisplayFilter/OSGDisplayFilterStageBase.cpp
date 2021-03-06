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
 **     class DisplayFilterStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGCalibrationPatternFilter.h" // CalibrationPatternFilter Class
#include "OSGResolutionDisplayFilter.h" // ResolutionFilter Class
#include "OSGColorDisplayFilter.h"      // ColorFilter Class
#include "OSGDistortionDisplayFilter.h" // DistortionFilter Class
#include "OSGDisplayFilterGroup.h"      // FilterGroups Class

#include "OSGDisplayFilterStageBase.h"
#include "OSGDisplayFilterStage.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DisplayFilterStage
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var CalibrationPatternFilter * DisplayFilterStageBase::_sfCalibrationPatternFilter
    
*/

/*! \var ResolutionDisplayFilter * DisplayFilterStageBase::_sfResolutionFilter
    
*/

/*! \var ColorDisplayFilter * DisplayFilterStageBase::_sfColorFilter
    
*/

/*! \var DistortionDisplayFilter * DisplayFilterStageBase::_sfDistortionFilter
    
*/

/*! \var DisplayFilterGroup * DisplayFilterStageBase::_mfFilterGroups
    
*/

/*! \var Int32           DisplayFilterStageBase::_sfActiveGroup
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DisplayFilterStage *>::_type("DisplayFilterStagePtr", "StagePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DisplayFilterStage *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DisplayFilterStage *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DisplayFilterStage *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DisplayFilterStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecCalibrationPatternFilterPtr::Description(
        SFUnrecCalibrationPatternFilterPtr::getClassType(),
        "calibrationPatternFilter",
        "",
        CalibrationPatternFilterFieldId, CalibrationPatternFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStage::editHandleCalibrationPatternFilter),
        static_cast<FieldGetMethodSig >(&DisplayFilterStage::getHandleCalibrationPatternFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecResolutionDisplayFilterPtr::Description(
        SFUnrecResolutionDisplayFilterPtr::getClassType(),
        "resolutionFilter",
        "",
        ResolutionFilterFieldId, ResolutionFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStage::editHandleResolutionFilter),
        static_cast<FieldGetMethodSig >(&DisplayFilterStage::getHandleResolutionFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecColorDisplayFilterPtr::Description(
        SFUnrecColorDisplayFilterPtr::getClassType(),
        "colorFilter",
        "",
        ColorFilterFieldId, ColorFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStage::editHandleColorFilter),
        static_cast<FieldGetMethodSig >(&DisplayFilterStage::getHandleColorFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecDistortionDisplayFilterPtr::Description(
        SFUnrecDistortionDisplayFilterPtr::getClassType(),
        "distortionFilter",
        "",
        DistortionFilterFieldId, DistortionFilterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStage::editHandleDistortionFilter),
        static_cast<FieldGetMethodSig >(&DisplayFilterStage::getHandleDistortionFilter));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecDisplayFilterGroupPtr::Description(
        MFUnrecDisplayFilterGroupPtr::getClassType(),
        "filterGroups",
        "",
        FilterGroupsFieldId, FilterGroupsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStage::editHandleFilterGroups),
        static_cast<FieldGetMethodSig >(&DisplayFilterStage::getHandleFilterGroups));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "activeGroup",
        "",
        ActiveGroupFieldId, ActiveGroupFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilterStage::editHandleActiveGroup),
        static_cast<FieldGetMethodSig >(&DisplayFilterStage::getHandleActiveGroup));

    oType.addInitialDesc(pDesc);
}


DisplayFilterStageBase::TypeObject DisplayFilterStageBase::_type(
    DisplayFilterStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DisplayFilterStageBase::createEmptyLocal),
    DisplayFilterStage::initMethod,
    DisplayFilterStage::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DisplayFilterStage::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"DisplayFilterStage\"\n"
    "   parent=\"Stage\"\n"
    "   library=\"EffectGroups\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpEffectsGroupsDisplayFilter\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"calibrationPatternFilter\"\n"
    "\t type=\"CalibrationPatternFilter\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "     defaultValue=\"NULL\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"resolutionFilter\"\n"
    "\t type=\"ResolutionDisplayFilter\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "     defaultValue=\"NULL\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorFilter\"\n"
    "\t type=\"ColorDisplayFilter\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "     defaultValue=\"NULL\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"distortionFilter\"\n"
    "\t type=\"DistortionDisplayFilter\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "     defaultValue=\"NULL\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"filterGroups\"\n"
    "\t type=\"DisplayFilterGroup\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"activeGroup\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"-1\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DisplayFilterStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &DisplayFilterStageBase::getType(void) const
{
    return _type;
}

UInt32 DisplayFilterStageBase::getContainerSize(void) const
{
    return sizeof(DisplayFilterStage);
}

/*------------------------- decorator get ------------------------------*/


//! Get the DisplayFilterStage::_sfCalibrationPatternFilter field.
const SFUnrecCalibrationPatternFilterPtr *DisplayFilterStageBase::getSFCalibrationPatternFilter(void) const
{
    return &_sfCalibrationPatternFilter;
}

SFUnrecCalibrationPatternFilterPtr *DisplayFilterStageBase::editSFCalibrationPatternFilter(void)
{
    editSField(CalibrationPatternFilterFieldMask);

    return &_sfCalibrationPatternFilter;
}

//! Get the DisplayFilterStage::_sfResolutionFilter field.
const SFUnrecResolutionDisplayFilterPtr *DisplayFilterStageBase::getSFResolutionFilter(void) const
{
    return &_sfResolutionFilter;
}

SFUnrecResolutionDisplayFilterPtr *DisplayFilterStageBase::editSFResolutionFilter(void)
{
    editSField(ResolutionFilterFieldMask);

    return &_sfResolutionFilter;
}

//! Get the DisplayFilterStage::_sfColorFilter field.
const SFUnrecColorDisplayFilterPtr *DisplayFilterStageBase::getSFColorFilter(void) const
{
    return &_sfColorFilter;
}

SFUnrecColorDisplayFilterPtr *DisplayFilterStageBase::editSFColorFilter    (void)
{
    editSField(ColorFilterFieldMask);

    return &_sfColorFilter;
}

//! Get the DisplayFilterStage::_sfDistortionFilter field.
const SFUnrecDistortionDisplayFilterPtr *DisplayFilterStageBase::getSFDistortionFilter(void) const
{
    return &_sfDistortionFilter;
}

SFUnrecDistortionDisplayFilterPtr *DisplayFilterStageBase::editSFDistortionFilter(void)
{
    editSField(DistortionFilterFieldMask);

    return &_sfDistortionFilter;
}

//! Get the DisplayFilterStage::_mfFilterGroups field.
const MFUnrecDisplayFilterGroupPtr *DisplayFilterStageBase::getMFFilterGroups(void) const
{
    return &_mfFilterGroups;
}

MFUnrecDisplayFilterGroupPtr *DisplayFilterStageBase::editMFFilterGroups   (void)
{
    editMField(FilterGroupsFieldMask, _mfFilterGroups);

    return &_mfFilterGroups;
}

SFInt32 *DisplayFilterStageBase::editSFActiveGroup(void)
{
    editSField(ActiveGroupFieldMask);

    return &_sfActiveGroup;
}

const SFInt32 *DisplayFilterStageBase::getSFActiveGroup(void) const
{
    return &_sfActiveGroup;
}




void DisplayFilterStageBase::pushToFilterGroups(DisplayFilterGroup * const value)
{
    editMField(FilterGroupsFieldMask, _mfFilterGroups);

    _mfFilterGroups.push_back(value);
}

void DisplayFilterStageBase::assignFilterGroups(const MFUnrecDisplayFilterGroupPtr &value)
{
    MFUnrecDisplayFilterGroupPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecDisplayFilterGroupPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<DisplayFilterStage *>(this)->clearFilterGroups();

    while(elemIt != elemEnd)
    {
        this->pushToFilterGroups(*elemIt);

        ++elemIt;
    }
}

void DisplayFilterStageBase::removeFromFilterGroups(UInt32 uiIndex)
{
    if(uiIndex < _mfFilterGroups.size())
    {
        editMField(FilterGroupsFieldMask, _mfFilterGroups);

        _mfFilterGroups.erase(uiIndex);
    }
}

void DisplayFilterStageBase::removeObjFromFilterGroups(DisplayFilterGroup * const value)
{
    Int32 iElemIdx = _mfFilterGroups.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(FilterGroupsFieldMask, _mfFilterGroups);

        _mfFilterGroups.erase(iElemIdx);
    }
}
void DisplayFilterStageBase::clearFilterGroups(void)
{
    editMField(FilterGroupsFieldMask, _mfFilterGroups);


    _mfFilterGroups.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 DisplayFilterStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CalibrationPatternFilterFieldMask & whichField))
    {
        returnValue += _sfCalibrationPatternFilter.getBinSize();
    }
    if(FieldBits::NoField != (ResolutionFilterFieldMask & whichField))
    {
        returnValue += _sfResolutionFilter.getBinSize();
    }
    if(FieldBits::NoField != (ColorFilterFieldMask & whichField))
    {
        returnValue += _sfColorFilter.getBinSize();
    }
    if(FieldBits::NoField != (DistortionFilterFieldMask & whichField))
    {
        returnValue += _sfDistortionFilter.getBinSize();
    }
    if(FieldBits::NoField != (FilterGroupsFieldMask & whichField))
    {
        returnValue += _mfFilterGroups.getBinSize();
    }
    if(FieldBits::NoField != (ActiveGroupFieldMask & whichField))
    {
        returnValue += _sfActiveGroup.getBinSize();
    }

    return returnValue;
}

void DisplayFilterStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CalibrationPatternFilterFieldMask & whichField))
    {
        _sfCalibrationPatternFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ResolutionFilterFieldMask & whichField))
    {
        _sfResolutionFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFilterFieldMask & whichField))
    {
        _sfColorFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DistortionFilterFieldMask & whichField))
    {
        _sfDistortionFilter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FilterGroupsFieldMask & whichField))
    {
        _mfFilterGroups.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActiveGroupFieldMask & whichField))
    {
        _sfActiveGroup.copyToBin(pMem);
    }
}

void DisplayFilterStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CalibrationPatternFilterFieldMask & whichField))
    {
        editSField(CalibrationPatternFilterFieldMask);
        _sfCalibrationPatternFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ResolutionFilterFieldMask & whichField))
    {
        editSField(ResolutionFilterFieldMask);
        _sfResolutionFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFilterFieldMask & whichField))
    {
        editSField(ColorFilterFieldMask);
        _sfColorFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DistortionFilterFieldMask & whichField))
    {
        editSField(DistortionFilterFieldMask);
        _sfDistortionFilter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FilterGroupsFieldMask & whichField))
    {
        editMField(FilterGroupsFieldMask, _mfFilterGroups);
        _mfFilterGroups.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActiveGroupFieldMask & whichField))
    {
        editSField(ActiveGroupFieldMask);
        _sfActiveGroup.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DisplayFilterStageTransitPtr DisplayFilterStageBase::createLocal(BitVector bFlags)
{
    DisplayFilterStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DisplayFilterStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DisplayFilterStageTransitPtr DisplayFilterStageBase::createDependent(BitVector bFlags)
{
    DisplayFilterStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DisplayFilterStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DisplayFilterStageTransitPtr DisplayFilterStageBase::create(void)
{
    DisplayFilterStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DisplayFilterStage>(tmpPtr);
    }

    return fc;
}

DisplayFilterStage *DisplayFilterStageBase::createEmptyLocal(BitVector bFlags)
{
    DisplayFilterStage *returnValue;

    newPtr<DisplayFilterStage>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DisplayFilterStage *DisplayFilterStageBase::createEmpty(void)
{
    DisplayFilterStage *returnValue;

    newPtr<DisplayFilterStage>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DisplayFilterStageBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DisplayFilterStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DisplayFilterStage *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DisplayFilterStageBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DisplayFilterStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DisplayFilterStage *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DisplayFilterStageBase::shallowCopy(void) const
{
    DisplayFilterStage *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DisplayFilterStage *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DisplayFilterStageBase::DisplayFilterStageBase(void) :
    Inherited(),
    _sfCalibrationPatternFilter(NULL),
    _sfResolutionFilter       (NULL),
    _sfColorFilter            (NULL),
    _sfDistortionFilter       (NULL),
    _mfFilterGroups           (),
    _sfActiveGroup            (Int32(-1))
{
}

DisplayFilterStageBase::DisplayFilterStageBase(const DisplayFilterStageBase &source) :
    Inherited(source),
    _sfCalibrationPatternFilter(NULL),
    _sfResolutionFilter       (NULL),
    _sfColorFilter            (NULL),
    _sfDistortionFilter       (NULL),
    _mfFilterGroups           (),
    _sfActiveGroup            (source._sfActiveGroup            )
{
}


/*-------------------------- destructors ----------------------------------*/

DisplayFilterStageBase::~DisplayFilterStageBase(void)
{
}

void DisplayFilterStageBase::onCreate(const DisplayFilterStage *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DisplayFilterStage *pThis = static_cast<DisplayFilterStage *>(this);

        pThis->setCalibrationPatternFilter(source->getCalibrationPatternFilter());

        pThis->setResolutionFilter(source->getResolutionFilter());

        pThis->setColorFilter(source->getColorFilter());

        pThis->setDistortionFilter(source->getDistortionFilter());

        MFUnrecDisplayFilterGroupPtr::const_iterator FilterGroupsIt  =
            source->_mfFilterGroups.begin();
        MFUnrecDisplayFilterGroupPtr::const_iterator FilterGroupsEnd =
            source->_mfFilterGroups.end  ();

        while(FilterGroupsIt != FilterGroupsEnd)
        {
            pThis->pushToFilterGroups(*FilterGroupsIt);

            ++FilterGroupsIt;
        }
    }
}

GetFieldHandlePtr DisplayFilterStageBase::getHandleCalibrationPatternFilter (void) const
{
    SFUnrecCalibrationPatternFilterPtr::GetHandlePtr returnValue(
        new  SFUnrecCalibrationPatternFilterPtr::GetHandle(
             &_sfCalibrationPatternFilter,
             this->getType().getFieldDesc(CalibrationPatternFilterFieldId),
             const_cast<DisplayFilterStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageBase::editHandleCalibrationPatternFilter(void)
{
    SFUnrecCalibrationPatternFilterPtr::EditHandlePtr returnValue(
        new  SFUnrecCalibrationPatternFilterPtr::EditHandle(
             &_sfCalibrationPatternFilter,
             this->getType().getFieldDesc(CalibrationPatternFilterFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterStage::setCalibrationPatternFilter,
                    static_cast<DisplayFilterStage *>(this), _1));

    editSField(CalibrationPatternFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageBase::getHandleResolutionFilter (void) const
{
    SFUnrecResolutionDisplayFilterPtr::GetHandlePtr returnValue(
        new  SFUnrecResolutionDisplayFilterPtr::GetHandle(
             &_sfResolutionFilter,
             this->getType().getFieldDesc(ResolutionFilterFieldId),
             const_cast<DisplayFilterStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageBase::editHandleResolutionFilter(void)
{
    SFUnrecResolutionDisplayFilterPtr::EditHandlePtr returnValue(
        new  SFUnrecResolutionDisplayFilterPtr::EditHandle(
             &_sfResolutionFilter,
             this->getType().getFieldDesc(ResolutionFilterFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterStage::setResolutionFilter,
                    static_cast<DisplayFilterStage *>(this), _1));

    editSField(ResolutionFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageBase::getHandleColorFilter     (void) const
{
    SFUnrecColorDisplayFilterPtr::GetHandlePtr returnValue(
        new  SFUnrecColorDisplayFilterPtr::GetHandle(
             &_sfColorFilter,
             this->getType().getFieldDesc(ColorFilterFieldId),
             const_cast<DisplayFilterStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageBase::editHandleColorFilter    (void)
{
    SFUnrecColorDisplayFilterPtr::EditHandlePtr returnValue(
        new  SFUnrecColorDisplayFilterPtr::EditHandle(
             &_sfColorFilter,
             this->getType().getFieldDesc(ColorFilterFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterStage::setColorFilter,
                    static_cast<DisplayFilterStage *>(this), _1));

    editSField(ColorFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageBase::getHandleDistortionFilter (void) const
{
    SFUnrecDistortionDisplayFilterPtr::GetHandlePtr returnValue(
        new  SFUnrecDistortionDisplayFilterPtr::GetHandle(
             &_sfDistortionFilter,
             this->getType().getFieldDesc(DistortionFilterFieldId),
             const_cast<DisplayFilterStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageBase::editHandleDistortionFilter(void)
{
    SFUnrecDistortionDisplayFilterPtr::EditHandlePtr returnValue(
        new  SFUnrecDistortionDisplayFilterPtr::EditHandle(
             &_sfDistortionFilter,
             this->getType().getFieldDesc(DistortionFilterFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DisplayFilterStage::setDistortionFilter,
                    static_cast<DisplayFilterStage *>(this), _1));

    editSField(DistortionFilterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageBase::getHandleFilterGroups    (void) const
{
    MFUnrecDisplayFilterGroupPtr::GetHandlePtr returnValue(
        new  MFUnrecDisplayFilterGroupPtr::GetHandle(
             &_mfFilterGroups,
             this->getType().getFieldDesc(FilterGroupsFieldId),
             const_cast<DisplayFilterStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageBase::editHandleFilterGroups   (void)
{
    MFUnrecDisplayFilterGroupPtr::EditHandlePtr returnValue(
        new  MFUnrecDisplayFilterGroupPtr::EditHandle(
             &_mfFilterGroups,
             this->getType().getFieldDesc(FilterGroupsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&DisplayFilterStage::pushToFilterGroups,
                    static_cast<DisplayFilterStage *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&DisplayFilterStage::removeFromFilterGroups,
                    static_cast<DisplayFilterStage *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&DisplayFilterStage::removeObjFromFilterGroups,
                    static_cast<DisplayFilterStage *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&DisplayFilterStage::clearFilterGroups,
                    static_cast<DisplayFilterStage *>(this)));

    editMField(FilterGroupsFieldMask, _mfFilterGroups);

    return returnValue;
}

GetFieldHandlePtr DisplayFilterStageBase::getHandleActiveGroup     (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfActiveGroup,
             this->getType().getFieldDesc(ActiveGroupFieldId),
             const_cast<DisplayFilterStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterStageBase::editHandleActiveGroup    (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfActiveGroup,
             this->getType().getFieldDesc(ActiveGroupFieldId),
             this));


    editSField(ActiveGroupFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DisplayFilterStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DisplayFilterStage *pThis = static_cast<DisplayFilterStage *>(this);

    pThis->execSync(static_cast<DisplayFilterStage *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DisplayFilterStageBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DisplayFilterStage *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DisplayFilterStage *>(pRefAspect),
                  dynamic_cast<const DisplayFilterStage *>(this));

    return returnValue;
}
#endif

void DisplayFilterStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DisplayFilterStage *>(this)->setCalibrationPatternFilter(NULL);

    static_cast<DisplayFilterStage *>(this)->setResolutionFilter(NULL);

    static_cast<DisplayFilterStage *>(this)->setColorFilter(NULL);

    static_cast<DisplayFilterStage *>(this)->setDistortionFilter(NULL);

    static_cast<DisplayFilterStage *>(this)->clearFilterGroups();


}


OSG_END_NAMESPACE
