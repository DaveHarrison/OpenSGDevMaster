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
 **     class DisplayFilterGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DisplayFilterGroupBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DisplayFilterGroupBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DisplayFilterGroupBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the DisplayFilterGroup::_sfCalibrationPatternFilter field.
inline
CalibrationPatternFilter * DisplayFilterGroupBase::getCalibrationPatternFilter(void) const
{
    return _sfCalibrationPatternFilter.getValue();
}

//! Set the value of the DisplayFilterGroup::_sfCalibrationPatternFilter field.
inline
void DisplayFilterGroupBase::setCalibrationPatternFilter(CalibrationPatternFilter * const value)
{
    editSField(CalibrationPatternFilterFieldMask);

    _sfCalibrationPatternFilter.setValue(value);
}

//! Get the value of the DisplayFilterGroup::_sfResolutionFilter field.
inline
ResolutionDisplayFilter * DisplayFilterGroupBase::getResolutionFilter(void) const
{
    return _sfResolutionFilter.getValue();
}

//! Set the value of the DisplayFilterGroup::_sfResolutionFilter field.
inline
void DisplayFilterGroupBase::setResolutionFilter(ResolutionDisplayFilter * const value)
{
    editSField(ResolutionFilterFieldMask);

    _sfResolutionFilter.setValue(value);
}

//! Get the value of the DisplayFilterGroup::_sfColorFilter field.
inline
ColorDisplayFilter * DisplayFilterGroupBase::getColorFilter(void) const
{
    return _sfColorFilter.getValue();
}

//! Set the value of the DisplayFilterGroup::_sfColorFilter field.
inline
void DisplayFilterGroupBase::setColorFilter(ColorDisplayFilter * const value)
{
    editSField(ColorFilterFieldMask);

    _sfColorFilter.setValue(value);
}

//! Get the value of the DisplayFilterGroup::_sfDistortionFilter field.
inline
DistortionDisplayFilter * DisplayFilterGroupBase::getDistortionFilter(void) const
{
    return _sfDistortionFilter.getValue();
}

//! Set the value of the DisplayFilterGroup::_sfDistortionFilter field.
inline
void DisplayFilterGroupBase::setDistortionFilter(DistortionDisplayFilter * const value)
{
    editSField(DistortionFilterFieldMask);

    _sfDistortionFilter.setValue(value);
}
//! Get the value of the DisplayFilterGroup::_sfDrawerId field.

inline
Int32 &DisplayFilterGroupBase::editDrawerId(void)
{
    editSField(DrawerIdFieldMask);

    return _sfDrawerId.getValue();
}

//! Get the value of the DisplayFilterGroup::_sfDrawerId field.
inline
      Int32  DisplayFilterGroupBase::getDrawerId(void) const
{
    return _sfDrawerId.getValue();
}

//! Set the value of the DisplayFilterGroup::_sfDrawerId field.
inline
void DisplayFilterGroupBase::setDrawerId(const Int32 value)
{
    editSField(DrawerIdFieldMask);

    _sfDrawerId.setValue(value);
}
//! Get the value of the DisplayFilterGroup::_sfDrawableId field.

inline
Int32 &DisplayFilterGroupBase::editDrawableId(void)
{
    editSField(DrawableIdFieldMask);

    return _sfDrawableId.getValue();
}

//! Get the value of the DisplayFilterGroup::_sfDrawableId field.
inline
      Int32  DisplayFilterGroupBase::getDrawableId(void) const
{
    return _sfDrawableId.getValue();
}

//! Set the value of the DisplayFilterGroup::_sfDrawableId field.
inline
void DisplayFilterGroupBase::setDrawableId(const Int32 value)
{
    editSField(DrawableIdFieldMask);

    _sfDrawableId.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DisplayFilterGroupBase::execSync (      DisplayFilterGroupBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CalibrationPatternFilterFieldMask & whichField))
        _sfCalibrationPatternFilter.syncWith(pFrom->_sfCalibrationPatternFilter);

    if(FieldBits::NoField != (ResolutionFilterFieldMask & whichField))
        _sfResolutionFilter.syncWith(pFrom->_sfResolutionFilter);

    if(FieldBits::NoField != (ColorFilterFieldMask & whichField))
        _sfColorFilter.syncWith(pFrom->_sfColorFilter);

    if(FieldBits::NoField != (DistortionFilterFieldMask & whichField))
        _sfDistortionFilter.syncWith(pFrom->_sfDistortionFilter);

    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
        _sfDrawerId.syncWith(pFrom->_sfDrawerId);

    if(FieldBits::NoField != (DrawableIdFieldMask & whichField))
        _sfDrawableId.syncWith(pFrom->_sfDrawableId);
}
#endif


inline
const Char8 *DisplayFilterGroupBase::getClassname(void)
{
    return "DisplayFilterGroup";
}
OSG_GEN_CONTAINERPTR(DisplayFilterGroup);

OSG_END_NAMESPACE

