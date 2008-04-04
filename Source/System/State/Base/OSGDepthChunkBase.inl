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
 **     class DepthChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DepthChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DepthChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DepthChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DepthChunk::_sfEnable field.

inline
bool &DepthChunkBase::editEnable(void)
{
    editSField(EnableFieldMask);

    return _sfEnable.getValue();
}

//! Get the value of the DepthChunk::_sfEnable field.
inline
const bool &DepthChunkBase::getEnable(void) const
{
    return _sfEnable.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DepthChunkBase::getEnable         (void)
{
    return this->editEnable         ();
}
#endif

//! Set the value of the DepthChunk::_sfEnable field.
inline
void DepthChunkBase::setEnable(const bool &value)
{
    editSField(EnableFieldMask);

    _sfEnable.setValue(value);
}
//! Get the value of the DepthChunk::_sfFunc field.

inline
GLenum &DepthChunkBase::editFunc(void)
{
    editSField(FuncFieldMask);

    return _sfFunc.getValue();
}

//! Get the value of the DepthChunk::_sfFunc field.
inline
const GLenum &DepthChunkBase::getFunc(void) const
{
    return _sfFunc.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
GLenum              &DepthChunkBase::getFunc           (void)
{
    return this->editFunc           ();
}
#endif

//! Set the value of the DepthChunk::_sfFunc field.
inline
void DepthChunkBase::setFunc(const GLenum &value)
{
    editSField(FuncFieldMask);

    _sfFunc.setValue(value);
}
//! Get the value of the DepthChunk::_sfNear field.

inline
Real32 &DepthChunkBase::editNear(void)
{
    editSField(NearFieldMask);

    return _sfNear.getValue();
}

//! Get the value of the DepthChunk::_sfNear field.
inline
const Real32 &DepthChunkBase::getNear(void) const
{
    return _sfNear.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &DepthChunkBase::getNear           (void)
{
    return this->editNear           ();
}
#endif

//! Set the value of the DepthChunk::_sfNear field.
inline
void DepthChunkBase::setNear(const Real32 &value)
{
    editSField(NearFieldMask);

    _sfNear.setValue(value);
}
//! Get the value of the DepthChunk::_sfFar field.

inline
Real32 &DepthChunkBase::editFar(void)
{
    editSField(FarFieldMask);

    return _sfFar.getValue();
}

//! Get the value of the DepthChunk::_sfFar field.
inline
const Real32 &DepthChunkBase::getFar(void) const
{
    return _sfFar.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &DepthChunkBase::getFar            (void)
{
    return this->editFar            ();
}
#endif

//! Set the value of the DepthChunk::_sfFar field.
inline
void DepthChunkBase::setFar(const Real32 &value)
{
    editSField(FarFieldMask);

    _sfFar.setValue(value);
}
//! Get the value of the DepthChunk::_sfReadOnly field.

inline
bool &DepthChunkBase::editReadOnly(void)
{
    editSField(ReadOnlyFieldMask);

    return _sfReadOnly.getValue();
}

//! Get the value of the DepthChunk::_sfReadOnly field.
inline
const bool &DepthChunkBase::getReadOnly(void) const
{
    return _sfReadOnly.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DepthChunkBase::getReadOnly       (void)
{
    return this->editReadOnly       ();
}
#endif

//! Set the value of the DepthChunk::_sfReadOnly field.
inline
void DepthChunkBase::setReadOnly(const bool &value)
{
    editSField(ReadOnlyFieldMask);

    _sfReadOnly.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DepthChunkBase::execSync (      DepthChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (EnableFieldMask & whichField))
        _sfEnable.syncWith(pFrom->_sfEnable);

    if(FieldBits::NoField != (FuncFieldMask & whichField))
        _sfFunc.syncWith(pFrom->_sfFunc);

    if(FieldBits::NoField != (NearFieldMask & whichField))
        _sfNear.syncWith(pFrom->_sfNear);

    if(FieldBits::NoField != (FarFieldMask & whichField))
        _sfFar.syncWith(pFrom->_sfFar);

    if(FieldBits::NoField != (ReadOnlyFieldMask & whichField))
        _sfReadOnly.syncWith(pFrom->_sfReadOnly);
}
#endif


inline
Char8 *DepthChunkBase::getClassname(void)
{
    return "DepthChunk";
}
OSG_GEN_CONTAINERPTR(DepthChunk);

OSG_END_NAMESPACE
