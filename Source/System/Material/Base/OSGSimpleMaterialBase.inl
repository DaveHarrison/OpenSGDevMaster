/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class SimpleMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleMaterialBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SimpleMaterialBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SimpleMaterialBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleMaterial::_sfAmbient field.

inline
Color3f &SimpleMaterialBase::editAmbient(void)
{
    editSField(AmbientFieldMask);

    return _sfAmbient.getValue();
}

//! Get the value of the SimpleMaterial::_sfAmbient field.
inline
const Color3f &SimpleMaterialBase::getAmbient(void) const
{
    return _sfAmbient.getValue();
}

//! Set the value of the SimpleMaterial::_sfAmbient field.
inline
void SimpleMaterialBase::setAmbient(const Color3f &value)
{
    editSField(AmbientFieldMask);

    _sfAmbient.setValue(value);
}
//! Get the value of the SimpleMaterial::_sfDiffuse field.

inline
Color3f &SimpleMaterialBase::editDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return _sfDiffuse.getValue();
}

//! Get the value of the SimpleMaterial::_sfDiffuse field.
inline
const Color3f &SimpleMaterialBase::getDiffuse(void) const
{
    return _sfDiffuse.getValue();
}

//! Set the value of the SimpleMaterial::_sfDiffuse field.
inline
void SimpleMaterialBase::setDiffuse(const Color3f &value)
{
    editSField(DiffuseFieldMask);

    _sfDiffuse.setValue(value);
}
//! Get the value of the SimpleMaterial::_sfSpecular field.

inline
Color3f &SimpleMaterialBase::editSpecular(void)
{
    editSField(SpecularFieldMask);

    return _sfSpecular.getValue();
}

//! Get the value of the SimpleMaterial::_sfSpecular field.
inline
const Color3f &SimpleMaterialBase::getSpecular(void) const
{
    return _sfSpecular.getValue();
}

//! Set the value of the SimpleMaterial::_sfSpecular field.
inline
void SimpleMaterialBase::setSpecular(const Color3f &value)
{
    editSField(SpecularFieldMask);

    _sfSpecular.setValue(value);
}
//! Get the value of the SimpleMaterial::_sfShininess field.

inline
Real32 &SimpleMaterialBase::editShininess(void)
{
    editSField(ShininessFieldMask);

    return _sfShininess.getValue();
}

//! Get the value of the SimpleMaterial::_sfShininess field.
inline
      Real32  SimpleMaterialBase::getShininess(void) const
{
    return _sfShininess.getValue();
}

//! Set the value of the SimpleMaterial::_sfShininess field.
inline
void SimpleMaterialBase::setShininess(const Real32 value)
{
    editSField(ShininessFieldMask);

    _sfShininess.setValue(value);
}
//! Get the value of the SimpleMaterial::_sfEmission field.

inline
Color3f &SimpleMaterialBase::editEmission(void)
{
    editSField(EmissionFieldMask);

    return _sfEmission.getValue();
}

//! Get the value of the SimpleMaterial::_sfEmission field.
inline
const Color3f &SimpleMaterialBase::getEmission(void) const
{
    return _sfEmission.getValue();
}

//! Set the value of the SimpleMaterial::_sfEmission field.
inline
void SimpleMaterialBase::setEmission(const Color3f &value)
{
    editSField(EmissionFieldMask);

    _sfEmission.setValue(value);
}
//! Get the value of the SimpleMaterial::_sfTransparency field.

inline
Real32 &SimpleMaterialBase::editTransparency(void)
{
    editSField(TransparencyFieldMask);

    return _sfTransparency.getValue();
}

//! Get the value of the SimpleMaterial::_sfTransparency field.
inline
      Real32  SimpleMaterialBase::getTransparency(void) const
{
    return _sfTransparency.getValue();
}

//! Set the value of the SimpleMaterial::_sfTransparency field.
inline
void SimpleMaterialBase::setTransparency(const Real32 value)
{
    editSField(TransparencyFieldMask);

    _sfTransparency.setValue(value);
}
//! Get the value of the SimpleMaterial::_sfLit field.

inline
bool &SimpleMaterialBase::editLit(void)
{
    editSField(LitFieldMask);

    return _sfLit.getValue();
}

//! Get the value of the SimpleMaterial::_sfLit field.
inline
      bool  SimpleMaterialBase::getLit(void) const
{
    return _sfLit.getValue();
}

//! Set the value of the SimpleMaterial::_sfLit field.
inline
void SimpleMaterialBase::setLit(const bool value)
{
    editSField(LitFieldMask);

    _sfLit.setValue(value);
}
//! Get the value of the SimpleMaterial::_sfColorMaterial field.

inline
GLenum &SimpleMaterialBase::editColorMaterial(void)
{
    editSField(ColorMaterialFieldMask);

    return _sfColorMaterial.getValue();
}

//! Get the value of the SimpleMaterial::_sfColorMaterial field.
inline
const GLenum &SimpleMaterialBase::getColorMaterial(void) const
{
    return _sfColorMaterial.getValue();
}

//! Set the value of the SimpleMaterial::_sfColorMaterial field.
inline
void SimpleMaterialBase::setColorMaterial(const GLenum &value)
{
    editSField(ColorMaterialFieldMask);

    _sfColorMaterial.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleMaterialBase::execSync (      SimpleMaterialBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pFrom->_sfAmbient);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
        _sfDiffuse.syncWith(pFrom->_sfDiffuse);

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
        _sfSpecular.syncWith(pFrom->_sfSpecular);

    if(FieldBits::NoField != (ShininessFieldMask & whichField))
        _sfShininess.syncWith(pFrom->_sfShininess);

    if(FieldBits::NoField != (EmissionFieldMask & whichField))
        _sfEmission.syncWith(pFrom->_sfEmission);

    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
        _sfTransparency.syncWith(pFrom->_sfTransparency);

    if(FieldBits::NoField != (LitFieldMask & whichField))
        _sfLit.syncWith(pFrom->_sfLit);

    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
        _sfColorMaterial.syncWith(pFrom->_sfColorMaterial);
}
#endif


inline
const Char8 *SimpleMaterialBase::getClassname(void)
{
    return "SimpleMaterial";
}
OSG_GEN_CONTAINERPTR(SimpleMaterial);

OSG_END_NAMESPACE

