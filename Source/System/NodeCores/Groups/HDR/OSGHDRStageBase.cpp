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
 **     class HDRStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEHDRSTAGEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGLEXT.h>                     // BufferFormat default header


#include "OSGHDRStageBase.h"
#include "OSGHDRStage.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::HDRStage
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          HDRStageBase::_sfExposure
    
*/

/*! \var Real32          HDRStageBase::_sfBlurWidth
    
*/

/*! \var Real32          HDRStageBase::_sfBlurAmount
    
*/

/*! \var Real32          HDRStageBase::_sfEffectAmount
    
*/

/*! \var Real32          HDRStageBase::_sfGamma
    
*/

/*! \var GLenum          HDRStageBase::_sfBufferFormat
    
*/


void HDRStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(HDRStageBase::*GetSFExposureF)(void) const;

    GetSFExposureF GetSFExposure = &HDRStageBase::getSFExposure;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "exposure",
        "",
        ExposureFieldId, ExposureFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&HDRStageBase::editSFExposure),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFExposure));
#else
        reinterpret_cast<FieldGetMethodSig >(&HDRStageBase::getSFExposure));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(HDRStageBase::*GetSFBlurWidthF)(void) const;

    GetSFBlurWidthF GetSFBlurWidth = &HDRStageBase::getSFBlurWidth;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "blurWidth",
        "",
        BlurWidthFieldId, BlurWidthFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&HDRStageBase::editSFBlurWidth),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBlurWidth));
#else
        reinterpret_cast<FieldGetMethodSig >(&HDRStageBase::getSFBlurWidth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(HDRStageBase::*GetSFBlurAmountF)(void) const;

    GetSFBlurAmountF GetSFBlurAmount = &HDRStageBase::getSFBlurAmount;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "blurAmount",
        "",
        BlurAmountFieldId, BlurAmountFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&HDRStageBase::editSFBlurAmount),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBlurAmount));
#else
        reinterpret_cast<FieldGetMethodSig >(&HDRStageBase::getSFBlurAmount));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(HDRStageBase::*GetSFEffectAmountF)(void) const;

    GetSFEffectAmountF GetSFEffectAmount = &HDRStageBase::getSFEffectAmount;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "effectAmount",
        "",
        EffectAmountFieldId, EffectAmountFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&HDRStageBase::editSFEffectAmount),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFEffectAmount));
#else
        reinterpret_cast<FieldGetMethodSig >(&HDRStageBase::getSFEffectAmount));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(HDRStageBase::*GetSFGammaF)(void) const;

    GetSFGammaF GetSFGamma = &HDRStageBase::getSFGamma;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "gamma",
        "",
        GammaFieldId, GammaFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&HDRStageBase::editSFGamma),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGamma));
#else
        reinterpret_cast<FieldGetMethodSig >(&HDRStageBase::getSFGamma));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFGLenum *(HDRStageBase::*GetSFBufferFormatF)(void) const;

    GetSFBufferFormatF GetSFBufferFormat = &HDRStageBase::getSFBufferFormat;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "bufferFormat",
        "",
        BufferFormatFieldId, BufferFormatFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&HDRStageBase::editSFBufferFormat),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBufferFormat));
#else
        reinterpret_cast<FieldGetMethodSig >(&HDRStageBase::getSFBufferFormat));
#endif

    oType.addInitialDesc(pDesc);
}


HDRStageBase::TypeObject HDRStageBase::_type(
    HDRStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &HDRStageBase::createEmpty,
    HDRStage::initMethod,
    (InitalInsertDescFunc) &HDRStageBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"HDRStage\"\n"
    "\tparent=\"Stage\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "    <Field\n"
    "\t\tname=\"exposure\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"8.f\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "\t\tname=\"blurWidth\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"3.0f\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "\t\tname=\"blurAmount\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.5f\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "\t\tname=\"effectAmount\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.2f\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "\t\tname=\"gamma\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.5f\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"bufferFormat\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_RGBA16F_ARB\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGLEXT.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &HDRStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &HDRStageBase::getType(void) const
{
    return _type;
}

UInt32 HDRStageBase::getContainerSize(void) const
{
    return sizeof(HDRStage);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *HDRStageBase::editSFExposure(void)
{
    editSField(ExposureFieldMask);

    return &_sfExposure;
}

const SFReal32 *HDRStageBase::getSFExposure(void) const
{
    return &_sfExposure;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *HDRStageBase::getSFExposure       (void)
{
    return this->editSFExposure       ();
}
#endif

SFReal32 *HDRStageBase::editSFBlurWidth(void)
{
    editSField(BlurWidthFieldMask);

    return &_sfBlurWidth;
}

const SFReal32 *HDRStageBase::getSFBlurWidth(void) const
{
    return &_sfBlurWidth;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *HDRStageBase::getSFBlurWidth      (void)
{
    return this->editSFBlurWidth      ();
}
#endif

SFReal32 *HDRStageBase::editSFBlurAmount(void)
{
    editSField(BlurAmountFieldMask);

    return &_sfBlurAmount;
}

const SFReal32 *HDRStageBase::getSFBlurAmount(void) const
{
    return &_sfBlurAmount;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *HDRStageBase::getSFBlurAmount     (void)
{
    return this->editSFBlurAmount     ();
}
#endif

SFReal32 *HDRStageBase::editSFEffectAmount(void)
{
    editSField(EffectAmountFieldMask);

    return &_sfEffectAmount;
}

const SFReal32 *HDRStageBase::getSFEffectAmount(void) const
{
    return &_sfEffectAmount;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *HDRStageBase::getSFEffectAmount   (void)
{
    return this->editSFEffectAmount   ();
}
#endif

SFReal32 *HDRStageBase::editSFGamma(void)
{
    editSField(GammaFieldMask);

    return &_sfGamma;
}

const SFReal32 *HDRStageBase::getSFGamma(void) const
{
    return &_sfGamma;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *HDRStageBase::getSFGamma          (void)
{
    return this->editSFGamma          ();
}
#endif

SFGLenum *HDRStageBase::editSFBufferFormat(void)
{
    editSField(BufferFormatFieldMask);

    return &_sfBufferFormat;
}

const SFGLenum *HDRStageBase::getSFBufferFormat(void) const
{
    return &_sfBufferFormat;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *HDRStageBase::getSFBufferFormat   (void)
{
    return this->editSFBufferFormat   ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 HDRStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ExposureFieldMask & whichField))
    {
        returnValue += _sfExposure.getBinSize();
    }
    if(FieldBits::NoField != (BlurWidthFieldMask & whichField))
    {
        returnValue += _sfBlurWidth.getBinSize();
    }
    if(FieldBits::NoField != (BlurAmountFieldMask & whichField))
    {
        returnValue += _sfBlurAmount.getBinSize();
    }
    if(FieldBits::NoField != (EffectAmountFieldMask & whichField))
    {
        returnValue += _sfEffectAmount.getBinSize();
    }
    if(FieldBits::NoField != (GammaFieldMask & whichField))
    {
        returnValue += _sfGamma.getBinSize();
    }
    if(FieldBits::NoField != (BufferFormatFieldMask & whichField))
    {
        returnValue += _sfBufferFormat.getBinSize();
    }

    return returnValue;
}

void HDRStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ExposureFieldMask & whichField))
    {
        _sfExposure.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlurWidthFieldMask & whichField))
    {
        _sfBlurWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlurAmountFieldMask & whichField))
    {
        _sfBlurAmount.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EffectAmountFieldMask & whichField))
    {
        _sfEffectAmount.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GammaFieldMask & whichField))
    {
        _sfGamma.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BufferFormatFieldMask & whichField))
    {
        _sfBufferFormat.copyToBin(pMem);
    }
}

void HDRStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ExposureFieldMask & whichField))
    {
        _sfExposure.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlurWidthFieldMask & whichField))
    {
        _sfBlurWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlurAmountFieldMask & whichField))
    {
        _sfBlurAmount.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EffectAmountFieldMask & whichField))
    {
        _sfEffectAmount.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GammaFieldMask & whichField))
    {
        _sfGamma.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BufferFormatFieldMask & whichField))
    {
        _sfBufferFormat.copyFromBin(pMem);
    }
}

//! create a new instance of the class
HDRStagePtr HDRStageBase::create(void)
{
    HDRStagePtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<HDRStage::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
HDRStagePtr HDRStageBase::createEmpty(void)
{
    HDRStagePtr returnValue;

    newPtr<HDRStage>(returnValue);

    return returnValue;
}

FieldContainerPtr HDRStageBase::shallowCopy(void) const
{
    HDRStagePtr returnValue;

    newPtr(returnValue, dynamic_cast<const HDRStage *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

HDRStageBase::HDRStageBase(void) :
    Inherited(),
    _sfExposure               (Real32(8.f)),
    _sfBlurWidth              (Real32(3.0f)),
    _sfBlurAmount             (Real32(0.5f)),
    _sfEffectAmount           (Real32(0.2f)),
    _sfGamma                  (Real32(0.5f)),
    _sfBufferFormat           (GLenum(GL_RGBA16F_ARB))
{
}

HDRStageBase::HDRStageBase(const HDRStageBase &source) :
    Inherited(source),
    _sfExposure               (source._sfExposure               ),
    _sfBlurWidth              (source._sfBlurWidth              ),
    _sfBlurAmount             (source._sfBlurAmount             ),
    _sfEffectAmount           (source._sfEffectAmount           ),
    _sfGamma                  (source._sfGamma                  ),
    _sfBufferFormat           (source._sfBufferFormat           )
{
}

/*-------------------------- destructors ----------------------------------*/

HDRStageBase::~HDRStageBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void HDRStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<HDRStageBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void HDRStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<HDRStageBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void HDRStageBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr HDRStageBase::createAspectCopy(void) const
{
    HDRStagePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const HDRStage *>(this));

    return returnValue;
}
#endif

void HDRStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<HDRStagePtr>::_type("HDRStagePtr", "StagePtr");
#endif


OSG_END_NAMESPACE