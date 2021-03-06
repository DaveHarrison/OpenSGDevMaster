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
 **     class ProgramChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ProgramChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ProgramChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ProgramChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ProgramChunk::_sfProgram field.

inline
std::string &ProgramChunkBase::editProgram(void)
{
    editSField(ProgramFieldMask);

    return _sfProgram.getValue();
}

//! Get the value of the ProgramChunk::_sfProgram field.
inline
const std::string &ProgramChunkBase::getProgram(void) const
{
    return _sfProgram.getValue();
}

//! Set the value of the ProgramChunk::_sfProgram field.
inline
void ProgramChunkBase::setProgram(const std::string &value)
{
    editSField(ProgramFieldMask);

    _sfProgram.setValue(value);
}
//! Get the value of the ProgramChunk::_sfGLId field.

inline
UInt32 &ProgramChunkBase::editGLId(void)
{
    editSField(GLIdFieldMask);

    return _sfGLId.getValue();
}

//! Get the value of the ProgramChunk::_sfGLId field.
inline
      UInt32  ProgramChunkBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

//! Set the value of the ProgramChunk::_sfGLId field.
inline
void ProgramChunkBase::setGLId(const UInt32 value)
{
    editSField(GLIdFieldMask);

    _sfGLId.setValue(value);
}

//! Get the value of the \a index element the ProgramChunk::_mfParamValues field.
inline
const Vec4f &ProgramChunkBase::getParamValues(const UInt32 index) const
{
    return _mfParamValues[index];
}

inline
Vec4f &ProgramChunkBase::editParamValues(const UInt32 index)
{
    editMField(ParamValuesFieldMask, _mfParamValues);

    return _mfParamValues[index];
}


//! Get the value of the \a index element the ProgramChunk::_mfParamNames field.
inline
const std::string &ProgramChunkBase::getParamNames(const UInt32 index) const
{
    return _mfParamNames[index];
}

inline
std::string &ProgramChunkBase::editParamNames(const UInt32 index)
{
    editMField(ParamNamesFieldMask, _mfParamNames);

    return _mfParamNames[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void ProgramChunkBase::execSync (      ProgramChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ProgramFieldMask & whichField))
        _sfProgram.syncWith(pFrom->_sfProgram);

    if(FieldBits::NoField != (ParamValuesFieldMask & whichField))
        _mfParamValues.syncWith(pFrom->_mfParamValues,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ParamNamesFieldMask & whichField))
        _mfParamNames.syncWith(pFrom->_mfParamNames,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pFrom->_sfGLId);
}
#endif


inline
const Char8 *ProgramChunkBase::getClassname(void)
{
    return "ProgramChunk";
}
OSG_GEN_CONTAINERPTR(ProgramChunk);

OSG_END_NAMESPACE

