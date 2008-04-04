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
 **     class CubeMapGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECUBEMAPGENERATORINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // Root Class
#include <OSGNode.h> // Exclude Class
#include <OSGTextureObjChunk.h> // Texture Class
#include <OSGNode.h> // Beacon Class
#include <OSGBackground.h> // Background Class

#include "OSGCubeMapGeneratorBase.h"
#include "OSGCubeMapGenerator.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CubeMapGenerator
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var NodePtr         CubeMapGeneratorBase::_sfRoot
    
*/

/*! \var NodePtr         CubeMapGeneratorBase::_mfExclude
    
*/

/*! \var TextureObjChunkPtr CubeMapGeneratorBase::_sfTexture
    
*/

/*! \var Vec2s           CubeMapGeneratorBase::_sfTextureSize
    
*/

/*! \var GLenum          CubeMapGeneratorBase::_sfTextureFormat
    
*/

/*! \var NodePtr         CubeMapGeneratorBase::_sfBeacon
    
*/

/*! \var Pnt3f           CubeMapGeneratorBase::_sfOrigin
    
*/

/*! \var UInt32          CubeMapGeneratorBase::_sfOriginMode
    
*/

/*! \var UInt32          CubeMapGeneratorBase::_sfTexUnit
    
*/

/*! \var UInt32          CubeMapGeneratorBase::_sfSetupMode
    
*/

/*! \var BackgroundPtr   CubeMapGeneratorBase::_sfBackground
    
*/


void CubeMapGeneratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "root",
        "",
        RootFieldId, RootFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleRoot),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleRoot));

    oType.addInitialDesc(pDesc);

    pDesc = new MFNodePtr::Description(
        MFNodePtr::getClassType(),
        "exclude",
        "",
        ExcludeFieldId, ExcludeFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleExclude),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleExclude));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTextureObjChunkPtr::Description(
        SFTextureObjChunkPtr::getClassType(),
        "texture",
        "",
        TextureFieldId, TextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleTexture),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2s::Description(
        SFVec2s::getClassType(),
        "textureSize",
        "",
        TextureSizeFieldId, TextureSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleTextureSize),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleTextureSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "textureFormat",
        "",
        TextureFormatFieldId, TextureFormatFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleTextureFormat),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleTextureFormat));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "origin",
        "",
        OriginFieldId, OriginFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleOrigin),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleOrigin));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "originMode",
        "",
        OriginModeFieldId, OriginModeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleOriginMode),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleOriginMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "texUnit",
        "",
        TexUnitFieldId, TexUnitFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleTexUnit),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleTexUnit));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "setupMode",
        "",
        SetupModeFieldId, SetupModeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleSetupMode),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleSetupMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBackgroundPtr::Description(
        SFBackgroundPtr::getClassType(),
        "background",
        "",
        BackgroundFieldId, BackgroundFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeMapGeneratorBase::editHandleBackground),
        static_cast<FieldGetMethodSig >(&CubeMapGeneratorBase::getHandleBackground));

    oType.addInitialDesc(pDesc);
}


CubeMapGeneratorBase::TypeObject CubeMapGeneratorBase::_type(
    CubeMapGeneratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &CubeMapGeneratorBase::createEmpty,
    CubeMapGenerator::initMethod,
    CubeMapGenerator::exitMethod,
    (InitalInsertDescFunc) &CubeMapGeneratorBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CubeMapGenerator\"\n"
    "\tparent=\"DynamicStateGenerator\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"root\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"exclude\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texture\"\n"
    "\t\ttype=\"TextureObjChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"textureSize\"\n"
    "\t\ttype=\"Vec2s\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0, 0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"textureFormat\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"beacon\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"origin\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"originMode\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"CubeMapGenerator::UseCurrentVolumeCenter\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texUnit\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"setupMode\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"CubeMapGenerator::SetupAll\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"background\"\n"
    "\t\ttype=\"BackgroundPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CubeMapGeneratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &CubeMapGeneratorBase::getType(void) const
{
    return _type;
}

UInt32 CubeMapGeneratorBase::getContainerSize(void) const
{
    return sizeof(CubeMapGenerator);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CubeMapGenerator::_sfRoot field.
const SFNodePtr *CubeMapGeneratorBase::getSFRoot(void) const
{
    return &_sfRoot;
}

//! Get the CubeMapGenerator::_mfExclude field.
const MFNodePtr *CubeMapGeneratorBase::getMFExclude(void) const
{
    return &_mfExclude;
}

//! Get the CubeMapGenerator::_sfTexture field.
const SFTextureObjChunkPtr *CubeMapGeneratorBase::getSFTexture(void) const
{
    return &_sfTexture;
}

SFVec2s *CubeMapGeneratorBase::editSFTextureSize(void)
{
    editSField(TextureSizeFieldMask);

    return &_sfTextureSize;
}

const SFVec2s *CubeMapGeneratorBase::getSFTextureSize(void) const
{
    return &_sfTextureSize;
}

#ifdef OSG_1_GET_COMPAT
SFVec2s             *CubeMapGeneratorBase::getSFTextureSize    (void)
{
    return this->editSFTextureSize    ();
}
#endif

SFGLenum *CubeMapGeneratorBase::editSFTextureFormat(void)
{
    editSField(TextureFormatFieldMask);

    return &_sfTextureFormat;
}

const SFGLenum *CubeMapGeneratorBase::getSFTextureFormat(void) const
{
    return &_sfTextureFormat;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *CubeMapGeneratorBase::getSFTextureFormat  (void)
{
    return this->editSFTextureFormat  ();
}
#endif

//! Get the CubeMapGenerator::_sfBeacon field.
const SFNodePtr *CubeMapGeneratorBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFPnt3f *CubeMapGeneratorBase::editSFOrigin(void)
{
    editSField(OriginFieldMask);

    return &_sfOrigin;
}

const SFPnt3f *CubeMapGeneratorBase::getSFOrigin(void) const
{
    return &_sfOrigin;
}

#ifdef OSG_1_GET_COMPAT
SFPnt3f             *CubeMapGeneratorBase::getSFOrigin         (void)
{
    return this->editSFOrigin         ();
}
#endif

SFUInt32 *CubeMapGeneratorBase::editSFOriginMode(void)
{
    editSField(OriginModeFieldMask);

    return &_sfOriginMode;
}

const SFUInt32 *CubeMapGeneratorBase::getSFOriginMode(void) const
{
    return &_sfOriginMode;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *CubeMapGeneratorBase::getSFOriginMode     (void)
{
    return this->editSFOriginMode     ();
}
#endif

SFUInt32 *CubeMapGeneratorBase::editSFTexUnit(void)
{
    editSField(TexUnitFieldMask);

    return &_sfTexUnit;
}

const SFUInt32 *CubeMapGeneratorBase::getSFTexUnit(void) const
{
    return &_sfTexUnit;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *CubeMapGeneratorBase::getSFTexUnit        (void)
{
    return this->editSFTexUnit        ();
}
#endif

SFUInt32 *CubeMapGeneratorBase::editSFSetupMode(void)
{
    editSField(SetupModeFieldMask);

    return &_sfSetupMode;
}

const SFUInt32 *CubeMapGeneratorBase::getSFSetupMode(void) const
{
    return &_sfSetupMode;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *CubeMapGeneratorBase::getSFSetupMode      (void)
{
    return this->editSFSetupMode      ();
}
#endif

//! Get the CubeMapGenerator::_sfBackground field.
const SFBackgroundPtr *CubeMapGeneratorBase::getSFBackground(void) const
{
    return &_sfBackground;
}



void CubeMapGeneratorBase::pushToExclude(NodePtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ExcludeFieldMask, _mfExclude);

    //addRef(value);

    _mfExclude.push_back(value);
}

void CubeMapGeneratorBase::assignExclude  (const MFNodePtr         &value)
{
    MFNodePtr        ::const_iterator elemIt  =
        value.begin();
    MFNodePtr        ::const_iterator elemEnd =
        value.end  ();

    static_cast<CubeMapGenerator *>(this)->clearExclude();

    while(elemIt != elemEnd)
    {
        this->pushToExclude(*elemIt);

        ++elemIt;
    }
}

void CubeMapGeneratorBase::insertIntoExclude(UInt32                uiIndex,
                                                   NodePtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ExcludeFieldMask, _mfExclude);

    MFNodePtr::iterator fieldIt = _mfExclude.begin();

    //addRef(value);

    fieldIt += uiIndex;

    _mfExclude.insert(fieldIt, value);
}

void CubeMapGeneratorBase::replaceInExclude(UInt32                uiIndex,
                                                       NodePtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfExclude.size())
        return;

    editMField(ExcludeFieldMask, _mfExclude);


//    addRef(value);
//    subRef(_mfExclude[uiIndex]);

//    _mfExclude[uiIndex] = value;

      _mfExclude.replace(uiIndex, value);
}

void CubeMapGeneratorBase::replaceInExclude(NodePtrConstArg pOldElem,
                                                        NodePtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfExclude.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ExcludeFieldMask, _mfExclude);

//        MFNodePtr::iterator fieldIt = _mfExclude.begin();

//        fieldIt += elemIdx;
//        addRef(pNewElem);
//        subRef(pOldElem);

//        (*fieldIt) = pNewElem;
          _mfExclude.replace(elemIdx, pNewElem);
    }
}

void CubeMapGeneratorBase::removeFromExclude(UInt32 uiIndex)
{
    if(uiIndex < _mfExclude.size())
    {
        editMField(ExcludeFieldMask, _mfExclude);

        MFNodePtr::iterator fieldIt = _mfExclude.begin();

        fieldIt += uiIndex;

        //subRef(*fieldIt);

        _mfExclude.erase(fieldIt);
    }
}

void CubeMapGeneratorBase::removeFromExclude(NodePtrConstArg value)
{
    Int32 iElemIdx = _mfExclude.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ExcludeFieldMask, _mfExclude);

        MFNodePtr::iterator fieldIt = _mfExclude.begin();

        fieldIt += iElemIdx;

        //subRef(*fieldIt);

        _mfExclude.erase(fieldIt);
    }
}
void CubeMapGeneratorBase::clearExclude(void)
{
    editMField(ExcludeFieldMask, _mfExclude);

    MFNodePtr::iterator       fieldIt  = _mfExclude.begin();
    MFNodePtr::const_iterator fieldEnd = _mfExclude.end  ();

    while(fieldIt != fieldEnd)
    {
        //subRef(*fieldIt);

        ++fieldIt;
    }

    _mfExclude.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 CubeMapGeneratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }
    if(FieldBits::NoField != (ExcludeFieldMask & whichField))
    {
        returnValue += _mfExclude.getBinSize();
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }
    if(FieldBits::NoField != (TextureSizeFieldMask & whichField))
    {
        returnValue += _sfTextureSize.getBinSize();
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        returnValue += _sfTextureFormat.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }
    if(FieldBits::NoField != (OriginFieldMask & whichField))
    {
        returnValue += _sfOrigin.getBinSize();
    }
    if(FieldBits::NoField != (OriginModeFieldMask & whichField))
    {
        returnValue += _sfOriginMode.getBinSize();
    }
    if(FieldBits::NoField != (TexUnitFieldMask & whichField))
    {
        returnValue += _sfTexUnit.getBinSize();
    }
    if(FieldBits::NoField != (SetupModeFieldMask & whichField))
    {
        returnValue += _sfSetupMode.getBinSize();
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        returnValue += _sfBackground.getBinSize();
    }

    return returnValue;
}

void CubeMapGeneratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ExcludeFieldMask & whichField))
    {
        _mfExclude.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureSizeFieldMask & whichField))
    {
        _sfTextureSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        _sfTextureFormat.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OriginFieldMask & whichField))
    {
        _sfOrigin.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OriginModeFieldMask & whichField))
    {
        _sfOriginMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexUnitFieldMask & whichField))
    {
        _sfTexUnit.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SetupModeFieldMask & whichField))
    {
        _sfSetupMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyToBin(pMem);
    }
}

void CubeMapGeneratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ExcludeFieldMask & whichField))
    {
        _mfExclude.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureSizeFieldMask & whichField))
    {
        _sfTextureSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureFormatFieldMask & whichField))
    {
        _sfTextureFormat.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OriginFieldMask & whichField))
    {
        _sfOrigin.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OriginModeFieldMask & whichField))
    {
        _sfOriginMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexUnitFieldMask & whichField))
    {
        _sfTexUnit.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SetupModeFieldMask & whichField))
    {
        _sfSetupMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CubeMapGeneratorPtr CubeMapGeneratorBase::create(void)
{
    CubeMapGeneratorPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<CubeMapGenerator::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
CubeMapGeneratorPtr CubeMapGeneratorBase::createEmpty(void)
{
    CubeMapGeneratorPtr returnValue;

    newPtr<CubeMapGenerator>(returnValue);

    return returnValue;
}

FieldContainerPtr CubeMapGeneratorBase::shallowCopy(void) const
{
    CubeMapGeneratorPtr returnValue;

    newPtr(returnValue, dynamic_cast<const CubeMapGenerator *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

CubeMapGeneratorBase::CubeMapGeneratorBase(void) :
    Inherited(),
    _sfRoot                   (NodePtr(NullFC)),
    _mfExclude                (),
    _sfTexture                (TextureObjChunkPtr(NullFC)),
    _sfTextureSize            (Vec2s(0, 0)),
    _sfTextureFormat          (GLenum(GL_NONE)),
    _sfBeacon                 (NodePtr(NullFC)),
    _sfOrigin                 (Pnt3f(0.f,0.f,0.f)),
    _sfOriginMode             (UInt32(CubeMapGenerator::UseCurrentVolumeCenter)),
    _sfTexUnit                (UInt32(0)),
    _sfSetupMode              (UInt32(CubeMapGenerator::SetupAll)),
    _sfBackground             (BackgroundPtr(NullFC))
{
}

CubeMapGeneratorBase::CubeMapGeneratorBase(const CubeMapGeneratorBase &source) :
    Inherited(source),
    _sfRoot                   (NullFC),
    _mfExclude                (),
    _sfTexture                (NullFC),
    _sfTextureSize            (source._sfTextureSize            ),
    _sfTextureFormat          (source._sfTextureFormat          ),
    _sfBeacon                 (NullFC),
    _sfOrigin                 (source._sfOrigin                 ),
    _sfOriginMode             (source._sfOriginMode             ),
    _sfTexUnit                (source._sfTexUnit                ),
    _sfSetupMode              (source._sfSetupMode              ),
    _sfBackground             (NullFC)
{
}


/*-------------------------- destructors ----------------------------------*/

CubeMapGeneratorBase::~CubeMapGeneratorBase(void)
{
}

void CubeMapGeneratorBase::onCreate(const CubeMapGenerator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setRoot(source->getRoot());

        MFNodePtr::const_iterator ExcludeIt  =
            source->_mfExclude.begin();
        MFNodePtr::const_iterator ExcludeEnd =
            source->_mfExclude.end  ();

        while(ExcludeIt != ExcludeEnd)
        {
            this->pushToExclude(*ExcludeIt);

            ++ExcludeIt;
        }

        this->setTexture(source->getTexture());

        this->setBeacon(source->getBeacon());

        this->setBackground(source->getBackground());
    }
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleRoot            (void) const
{
    SFNodePtr::GetHandlePtr returnValue(
        new  SFNodePtr::GetHandle(
             &_sfRoot, 
             this->getType().getFieldDesc(RootFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleRoot           (void)
{
    SFNodePtr::EditHandlePtr returnValue(
        new  SFNodePtr::EditHandle(
             &_sfRoot, 
             this->getType().getFieldDesc(RootFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeMapGenerator::setRoot, 
                                          static_cast<CubeMapGenerator *>(this), _1));

    editSField(RootFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleExclude         (void) const
{
    MFNodePtr::GetHandlePtr returnValue(
        new  MFNodePtr::GetHandle(
             &_mfExclude, 
             this->getType().getFieldDesc(ExcludeFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleExclude        (void)
{
    MFNodePtr::EditHandlePtr returnValue(
        new  MFNodePtr::EditHandle(
             &_mfExclude, 
             this->getType().getFieldDesc(ExcludeFieldId)));

    returnValue->setAddMethod(boost::bind(&CubeMapGenerator::pushToExclude, 
                              static_cast<CubeMapGenerator *>(this), _1));

    editMField(ExcludeFieldMask, _mfExclude);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleTexture         (void) const
{
    SFTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFTextureObjChunkPtr::GetHandle(
             &_sfTexture, 
             this->getType().getFieldDesc(TextureFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleTexture        (void)
{
    SFTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFTextureObjChunkPtr::EditHandle(
             &_sfTexture, 
             this->getType().getFieldDesc(TextureFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeMapGenerator::setTexture, 
                                          static_cast<CubeMapGenerator *>(this), _1));

    editSField(TextureFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleTextureSize     (void) const
{
    SFVec2s::GetHandlePtr returnValue(
        new  SFVec2s::GetHandle(
             &_sfTextureSize, 
             this->getType().getFieldDesc(TextureSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleTextureSize    (void)
{
    SFVec2s::EditHandlePtr returnValue(
        new  SFVec2s::EditHandle(
             &_sfTextureSize, 
             this->getType().getFieldDesc(TextureSizeFieldId)));

    editSField(TextureSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleTextureFormat   (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfTextureFormat, 
             this->getType().getFieldDesc(TextureFormatFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleTextureFormat  (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfTextureFormat, 
             this->getType().getFieldDesc(TextureFormatFieldId)));

    editSField(TextureFormatFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleBeacon          (void) const
{
    SFNodePtr::GetHandlePtr returnValue(
        new  SFNodePtr::GetHandle(
             &_sfBeacon, 
             this->getType().getFieldDesc(BeaconFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleBeacon         (void)
{
    SFNodePtr::EditHandlePtr returnValue(
        new  SFNodePtr::EditHandle(
             &_sfBeacon, 
             this->getType().getFieldDesc(BeaconFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeMapGenerator::setBeacon, 
                                          static_cast<CubeMapGenerator *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleOrigin          (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfOrigin, 
             this->getType().getFieldDesc(OriginFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleOrigin         (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfOrigin, 
             this->getType().getFieldDesc(OriginFieldId)));

    editSField(OriginFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleOriginMode      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfOriginMode, 
             this->getType().getFieldDesc(OriginModeFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleOriginMode     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfOriginMode, 
             this->getType().getFieldDesc(OriginModeFieldId)));

    editSField(OriginModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleTexUnit         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTexUnit, 
             this->getType().getFieldDesc(TexUnitFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleTexUnit        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTexUnit, 
             this->getType().getFieldDesc(TexUnitFieldId)));

    editSField(TexUnitFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleSetupMode       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSetupMode, 
             this->getType().getFieldDesc(SetupModeFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleSetupMode      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSetupMode, 
             this->getType().getFieldDesc(SetupModeFieldId)));

    editSField(SetupModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeMapGeneratorBase::getHandleBackground      (void) const
{
    SFBackgroundPtr::GetHandlePtr returnValue(
        new  SFBackgroundPtr::GetHandle(
             &_sfBackground, 
             this->getType().getFieldDesc(BackgroundFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeMapGeneratorBase::editHandleBackground     (void)
{
    SFBackgroundPtr::EditHandlePtr returnValue(
        new  SFBackgroundPtr::EditHandle(
             &_sfBackground, 
             this->getType().getFieldDesc(BackgroundFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeMapGenerator::setBackground, 
                                          static_cast<CubeMapGenerator *>(this), _1));

    editSField(BackgroundFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CubeMapGeneratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CubeMapGeneratorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr CubeMapGeneratorBase::createAspectCopy(void) const
{
    CubeMapGeneratorPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CubeMapGenerator *>(this));

    return returnValue;
}
#endif

void CubeMapGeneratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CubeMapGenerator *>(this)->setRoot(NullFC);

    static_cast<CubeMapGenerator *>(this)->setTexture(NullFC);

    static_cast<CubeMapGenerator *>(this)->setBeacon(NullFC);

    static_cast<CubeMapGenerator *>(this)->setBackground(NullFC);


    static_cast<CubeMapGenerator *>(this)->clearExclude();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CubeMapGeneratorPtr>::_type("CubeMapGeneratorPtr", "DynamicStateGeneratorPtr");
#endif


OSG_END_NAMESPACE
