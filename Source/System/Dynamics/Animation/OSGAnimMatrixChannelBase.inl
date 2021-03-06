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
 **     class AnimMatrixChannel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AnimMatrixChannelBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AnimMatrixChannelBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 AnimMatrixChannelBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the AnimMatrixChannel::_sfData field.
inline
AnimMatrixDataSource * AnimMatrixChannelBase::getData(void) const
{
    return _sfData.getValue();
}

//! Set the value of the AnimMatrixChannel::_sfData field.
inline
void AnimMatrixChannelBase::setData(AnimMatrixDataSource * const value)
{
    editSField(DataFieldMask);

    _sfData.setValue(value);
}
//! Get the value of the AnimMatrixChannel::_sfOutValue field.

inline
Matrix &AnimMatrixChannelBase::editOutValue(void)
{
    editSField(OutValueFieldMask);

    return _sfOutValue.getValue();
}

//! Get the value of the AnimMatrixChannel::_sfOutValue field.
inline
const Matrix &AnimMatrixChannelBase::getOutValue(void) const
{
    return _sfOutValue.getValue();
}

//! Set the value of the AnimMatrixChannel::_sfOutValue field.
inline
void AnimMatrixChannelBase::setOutValue(const Matrix &value)
{
    editSField(OutValueFieldMask);

    _sfOutValue.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void AnimMatrixChannelBase::execSync (      AnimMatrixChannelBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DataFieldMask & whichField))
        _sfData.syncWith(pFrom->_sfData);

    if(FieldBits::NoField != (OutValueFieldMask & whichField))
        _sfOutValue.syncWith(pFrom->_sfOutValue);
}
#endif


inline
const Char8 *AnimMatrixChannelBase::getClassname(void)
{
    return "AnimMatrixChannel";
}
OSG_GEN_CONTAINERPTR(AnimMatrixChannel);

OSG_END_NAMESPACE

