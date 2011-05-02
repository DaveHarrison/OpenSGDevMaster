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
 **     class Light!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGNode.h"                    // Beacon Class
#include "OSGLightEngine.h"             // LightEngine Class

#include "OSGLightBase.h"
#include "OSGLight.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Light
    Light is the base class for all the light source nodes.
    It contains the field for the general light source attributes
    (AmbientColor, DiffuseColor, SpecularColor, Beacon). The Beacon
    defines the reference coordinate system for the lightsource, while
    the position in the graph defines the objects that are lit.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Color4f         LightBase::_sfAmbient
    The light's ambient component.
*/

/*! \var Color4f         LightBase::_sfDiffuse
    The light's diffuse color.
*/

/*! \var Color4f         LightBase::_sfSpecular
    The light's specular color.
*/

/*! \var Node *          LightBase::_sfBeacon
    
*/

/*! \var bool            LightBase::_sfOn
    
*/

/*! \var Real32          LightBase::_sfConstantAttenuation
    The light's constant attenuation.
*/

/*! \var Real32          LightBase::_sfLinearAttenuation
    The light's linear attenuation.
*/

/*! \var Real32          LightBase::_sfQuadraticAttenuation
    The light's quadratic attenuation.
*/

/*! \var LightEngine *   LightBase::_sfLightEngine
    
*/

/*! \var Real32          LightBase::_sfShadowIntensity
    
*/

/*! \var UInt32          LightBase::_sfShadowMode
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Light *>::_type("LightPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Light *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Light *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Light *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void LightBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "ambient",
        "The light's ambient component.\n",
        AmbientFieldId, AmbientFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleAmbient),
        static_cast<FieldGetMethodSig >(&Light::getHandleAmbient));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "diffuse",
        "The light's diffuse color.\n",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleDiffuse),
        static_cast<FieldGetMethodSig >(&Light::getHandleDiffuse));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "specular",
        "The light's specular color.\n",
        SpecularFieldId, SpecularFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleSpecular),
        static_cast<FieldGetMethodSig >(&Light::getHandleSpecular));

    oType.addInitialDesc(pDesc);

    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&Light::getHandleBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "on",
        "",
        OnFieldId, OnFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleOn),
        static_cast<FieldGetMethodSig >(&Light::getHandleOn));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "constantAttenuation",
        "The light's constant attenuation.\n",
        ConstantAttenuationFieldId, ConstantAttenuationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleConstantAttenuation),
        static_cast<FieldGetMethodSig >(&Light::getHandleConstantAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "linearAttenuation",
        "The light's linear attenuation.\n",
        LinearAttenuationFieldId, LinearAttenuationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleLinearAttenuation),
        static_cast<FieldGetMethodSig >(&Light::getHandleLinearAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "quadraticAttenuation",
        "The light's quadratic attenuation.\n",
        QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleQuadraticAttenuation),
        static_cast<FieldGetMethodSig >(&Light::getHandleQuadraticAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecLightEnginePtr::Description(
        SFUnrecLightEnginePtr::getClassType(),
        "lightEngine",
        "",
        LightEngineFieldId, LightEngineFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleLightEngine),
        static_cast<FieldGetMethodSig >(&Light::getHandleLightEngine));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "shadowIntensity",
        "",
        ShadowIntensityFieldId, ShadowIntensityFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleShadowIntensity),
        static_cast<FieldGetMethodSig >(&Light::getHandleShadowIntensity));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "shadowMode",
        "",
        ShadowModeFieldId, ShadowModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Light::editHandleShadowMode),
        static_cast<FieldGetMethodSig >(&Light::getHandleShadowMode));

    oType.addInitialDesc(pDesc);
}


LightBase::TypeObject LightBase::_type(
    LightBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Light::initMethod,
    Light::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Light::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"Light\"\n"
    "   parent=\"Group\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemNodeCoreGroups\"\n"
    "   >\n"
    "\n"
    "  Light is the base class for all the light source nodes.\n"
    "  It contains the field for the general light source attributes\n"
    "  (AmbientColor, DiffuseColor, SpecularColor, Beacon). The Beacon\n"
    "  defines the reference coordinate system for the lightsource, while\n"
    "  the position in the graph defines the objects that are lit.\n"
    "\n"
    "  <Field\n"
    "\t name=\"ambient\"\n"
    "\t type=\"Color4f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f,0.f,0.f,1.f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe light's ambient component.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"diffuse\"\n"
    "\t type=\"Color4f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1.f,1.f,1.f,1.f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe light's diffuse color.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"specular\"\n"
    "\t type=\"Color4f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1.f,1.f,1.f,1.f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe light's specular color.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"beacon\"\n"
    "\t type=\"Node\"\n"
    "     category=\"weakpointer\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"on\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"constantAttenuation\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1.f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe light's constant attenuation.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"linearAttenuation\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe light's linear attenuation.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"quadraticAttenuation\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tThe light's quadratic attenuation.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"lightEngine\"\n"
    "\t type=\"LightEnginePtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "\n"
    "  <Field\n"
    "\t name=\"shadowIntensity\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"shadowMode\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "\n"
    "</FieldContainer>\n",
    "Light is the base class for all the light source nodes.\n"
    "It contains the field for the general light source attributes\n"
    "(AmbientColor, DiffuseColor, SpecularColor, Beacon). The Beacon\n"
    "defines the reference coordinate system for the lightsource, while\n"
    "the position in the graph defines the objects that are lit.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LightBase::getType(void)
{
    return _type;
}

const FieldContainerType &LightBase::getType(void) const
{
    return _type;
}

UInt32 LightBase::getContainerSize(void) const
{
    return sizeof(Light);
}

/*------------------------- decorator get ------------------------------*/


SFColor4f *LightBase::editSFAmbient(void)
{
    editSField(AmbientFieldMask);

    return &_sfAmbient;
}

const SFColor4f *LightBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}


SFColor4f *LightBase::editSFDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return &_sfDiffuse;
}

const SFColor4f *LightBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}


SFColor4f *LightBase::editSFSpecular(void)
{
    editSField(SpecularFieldMask);

    return &_sfSpecular;
}

const SFColor4f *LightBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}


//! Get the Light::_sfBeacon field.
const SFWeakNodePtr *LightBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFWeakNodePtr       *LightBase::editSFBeacon         (void)
{
    editSField(BeaconFieldMask);

    return &_sfBeacon;
}

SFBool *LightBase::editSFOn(void)
{
    editSField(OnFieldMask);

    return &_sfOn;
}

const SFBool *LightBase::getSFOn(void) const
{
    return &_sfOn;
}


SFReal32 *LightBase::editSFConstantAttenuation(void)
{
    editSField(ConstantAttenuationFieldMask);

    return &_sfConstantAttenuation;
}

const SFReal32 *LightBase::getSFConstantAttenuation(void) const
{
    return &_sfConstantAttenuation;
}


SFReal32 *LightBase::editSFLinearAttenuation(void)
{
    editSField(LinearAttenuationFieldMask);

    return &_sfLinearAttenuation;
}

const SFReal32 *LightBase::getSFLinearAttenuation(void) const
{
    return &_sfLinearAttenuation;
}


SFReal32 *LightBase::editSFQuadraticAttenuation(void)
{
    editSField(QuadraticAttenuationFieldMask);

    return &_sfQuadraticAttenuation;
}

const SFReal32 *LightBase::getSFQuadraticAttenuation(void) const
{
    return &_sfQuadraticAttenuation;
}


//! Get the Light::_sfLightEngine field.
const SFUnrecLightEnginePtr *LightBase::getSFLightEngine(void) const
{
    return &_sfLightEngine;
}

SFUnrecLightEnginePtr *LightBase::editSFLightEngine    (void)
{
    editSField(LightEngineFieldMask);

    return &_sfLightEngine;
}

SFReal32 *LightBase::editSFShadowIntensity(void)
{
    editSField(ShadowIntensityFieldMask);

    return &_sfShadowIntensity;
}

const SFReal32 *LightBase::getSFShadowIntensity(void) const
{
    return &_sfShadowIntensity;
}


SFUInt32 *LightBase::editSFShadowMode(void)
{
    editSField(ShadowModeFieldMask);

    return &_sfShadowMode;
}

const SFUInt32 *LightBase::getSFShadowMode(void) const
{
    return &_sfShadowMode;
}






/*------------------------------ access -----------------------------------*/

UInt32 LightBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }
    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        returnValue += _sfOn.getBinSize();
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        returnValue += _sfConstantAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        returnValue += _sfLinearAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        returnValue += _sfQuadraticAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (LightEngineFieldMask & whichField))
    {
        returnValue += _sfLightEngine.getBinSize();
    }
    if(FieldBits::NoField != (ShadowIntensityFieldMask & whichField))
    {
        returnValue += _sfShadowIntensity.getBinSize();
    }
    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
    {
        returnValue += _sfShadowMode.getBinSize();
    }

    return returnValue;
}

void LightBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        _sfOn.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        _sfConstantAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        _sfLinearAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        _sfQuadraticAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LightEngineFieldMask & whichField))
    {
        _sfLightEngine.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowIntensityFieldMask & whichField))
    {
        _sfShadowIntensity.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
    {
        _sfShadowMode.copyToBin(pMem);
    }
}

void LightBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        editSField(AmbientFieldMask);
        _sfAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        editSField(DiffuseFieldMask);
        _sfDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        editSField(SpecularFieldMask);
        _sfSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        editSField(BeaconFieldMask);
        _sfBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        editSField(OnFieldMask);
        _sfOn.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        editSField(ConstantAttenuationFieldMask);
        _sfConstantAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        editSField(LinearAttenuationFieldMask);
        _sfLinearAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        editSField(QuadraticAttenuationFieldMask);
        _sfQuadraticAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LightEngineFieldMask & whichField))
    {
        editSField(LightEngineFieldMask);
        _sfLightEngine.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowIntensityFieldMask & whichField))
    {
        editSField(ShadowIntensityFieldMask);
        _sfShadowIntensity.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShadowModeFieldMask & whichField))
    {
        editSField(ShadowModeFieldMask);
        _sfShadowMode.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

LightBase::LightBase(void) :
    Inherited(),
    _sfAmbient                (Color4f(0.f,0.f,0.f,1.f)),
    _sfDiffuse                (Color4f(1.f,1.f,1.f,1.f)),
    _sfSpecular               (Color4f(1.f,1.f,1.f,1.f)),
    _sfBeacon                 (NULL),
    _sfOn                     (bool(true)),
    _sfConstantAttenuation    (Real32(1.f)),
    _sfLinearAttenuation      (Real32(0.f)),
    _sfQuadraticAttenuation   (Real32(0.f)),
    _sfLightEngine            (NULL),
    _sfShadowIntensity        (Real32(0.f)),
    _sfShadowMode             (UInt32(0))
{
}

LightBase::LightBase(const LightBase &source) :
    Inherited(source),
    _sfAmbient                (source._sfAmbient                ),
    _sfDiffuse                (source._sfDiffuse                ),
    _sfSpecular               (source._sfSpecular               ),
    _sfBeacon                 (NULL),
    _sfOn                     (source._sfOn                     ),
    _sfConstantAttenuation    (source._sfConstantAttenuation    ),
    _sfLinearAttenuation      (source._sfLinearAttenuation      ),
    _sfQuadraticAttenuation   (source._sfQuadraticAttenuation   ),
    _sfLightEngine            (NULL),
    _sfShadowIntensity        (source._sfShadowIntensity        ),
    _sfShadowMode             (source._sfShadowMode             )
{
}


/*-------------------------- destructors ----------------------------------*/

LightBase::~LightBase(void)
{
}

void LightBase::onCreate(const Light *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Light *pThis = static_cast<Light *>(this);

        pThis->setBeacon(source->getBeacon());

        pThis->setLightEngine(source->getLightEngine());
    }
}

GetFieldHandlePtr LightBase::getHandleAmbient         (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfAmbient,
             this->getType().getFieldDesc(AmbientFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleAmbient        (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfAmbient,
             this->getType().getFieldDesc(AmbientFieldId),
             this));


    editSField(AmbientFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleDiffuse         (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfDiffuse,
             this->getType().getFieldDesc(DiffuseFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleDiffuse        (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfDiffuse,
             this->getType().getFieldDesc(DiffuseFieldId),
             this));


    editSField(DiffuseFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleSpecular        (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfSpecular,
             this->getType().getFieldDesc(SpecularFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleSpecular       (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfSpecular,
             this->getType().getFieldDesc(SpecularFieldId),
             this));


    editSField(SpecularFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&Light::setBeacon,
                    static_cast<Light *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleOn              (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfOn,
             this->getType().getFieldDesc(OnFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleOn             (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfOn,
             this->getType().getFieldDesc(OnFieldId),
             this));


    editSField(OnFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleConstantAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfConstantAttenuation,
             this->getType().getFieldDesc(ConstantAttenuationFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleConstantAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfConstantAttenuation,
             this->getType().getFieldDesc(ConstantAttenuationFieldId),
             this));


    editSField(ConstantAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleLinearAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfLinearAttenuation,
             this->getType().getFieldDesc(LinearAttenuationFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleLinearAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfLinearAttenuation,
             this->getType().getFieldDesc(LinearAttenuationFieldId),
             this));


    editSField(LinearAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleQuadraticAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfQuadraticAttenuation,
             this->getType().getFieldDesc(QuadraticAttenuationFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleQuadraticAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfQuadraticAttenuation,
             this->getType().getFieldDesc(QuadraticAttenuationFieldId),
             this));


    editSField(QuadraticAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleLightEngine     (void) const
{
    SFUnrecLightEnginePtr::GetHandlePtr returnValue(
        new  SFUnrecLightEnginePtr::GetHandle(
             &_sfLightEngine,
             this->getType().getFieldDesc(LightEngineFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleLightEngine    (void)
{
    SFUnrecLightEnginePtr::EditHandlePtr returnValue(
        new  SFUnrecLightEnginePtr::EditHandle(
             &_sfLightEngine,
             this->getType().getFieldDesc(LightEngineFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&Light::setLightEngine,
                    static_cast<Light *>(this), _1));

    editSField(LightEngineFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleShadowIntensity (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfShadowIntensity,
             this->getType().getFieldDesc(ShadowIntensityFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleShadowIntensity(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfShadowIntensity,
             this->getType().getFieldDesc(ShadowIntensityFieldId),
             this));


    editSField(ShadowIntensityFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleShadowMode      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfShadowMode,
             this->getType().getFieldDesc(ShadowModeFieldId),
             const_cast<LightBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleShadowMode     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfShadowMode,
             this->getType().getFieldDesc(ShadowModeFieldId),
             this));


    editSField(ShadowModeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Light *pThis = static_cast<Light *>(this);

    pThis->execSync(static_cast<Light *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void LightBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Light *>(this)->setBeacon(NULL);

    static_cast<Light *>(this)->setLightEngine(NULL);


}


OSG_END_NAMESPACE
