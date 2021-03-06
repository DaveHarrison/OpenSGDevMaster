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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREOBJREFCHUNKFIELDS_H_
#define _OSGTEXTUREOBJREFCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TextureObjRefChunk;

OSG_GEN_CONTAINERPTR(TextureObjRefChunk);

/*! \ingroup GrpStateAuxiliaryFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<TextureObjRefChunk *> :
    public FieldTraitsFCPtrBase<TextureObjRefChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TextureObjRefChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTextureObjRefChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTextureObjRefChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<TextureObjRefChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTextureObjRefChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateAuxiliaryFieldSFields */
typedef PointerSField<TextureObjRefChunk *,
                      RecordedRefCountPolicy  > SFRecTextureObjRefChunkPtr;
/*! \ingroup GrpStateAuxiliaryFieldSFields */
typedef PointerSField<TextureObjRefChunk *,
                      UnrecordedRefCountPolicy> SFUnrecTextureObjRefChunkPtr;
/*! \ingroup GrpStateAuxiliaryFieldSFields */
typedef PointerSField<TextureObjRefChunk *,
                      WeakRefCountPolicy      > SFWeakTextureObjRefChunkPtr;
/*! \ingroup GrpStateAuxiliaryFieldSFields */
typedef PointerSField<TextureObjRefChunk *,
                      NoRefCountPolicy        > SFUncountedTextureObjRefChunkPtr;


/*! \ingroup GrpStateAuxiliaryFieldMFields */
typedef PointerMField<TextureObjRefChunk *,
                      RecordedRefCountPolicy  > MFRecTextureObjRefChunkPtr;
/*! \ingroup GrpStateAuxiliaryFieldMFields */
typedef PointerMField<TextureObjRefChunk *,
                      UnrecordedRefCountPolicy> MFUnrecTextureObjRefChunkPtr;
/*! \ingroup GrpStateAuxiliaryFieldMFields */
typedef PointerMField<TextureObjRefChunk *,
                      WeakRefCountPolicy      > MFWeakTextureObjRefChunkPtr;
/*! \ingroup GrpStateAuxiliaryFieldMFields */
typedef PointerMField<TextureObjRefChunk *,
                      NoRefCountPolicy        > MFUncountedTextureObjRefChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateAuxiliaryFieldSFields \ingroup GrpLibOSGState */
struct SFRecTextureObjRefChunkPtr : 
    public PointerSField<TextureObjRefChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateAuxiliaryFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecTextureObjRefChunkPtr : 
    public PointerSField<TextureObjRefChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateAuxiliaryFieldSFields \ingroup GrpLibOSGState */
struct SFWeakTextureObjRefChunkPtr :
    public PointerSField<TextureObjRefChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateAuxiliaryFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedTextureObjRefChunkPtr :
    public PointerSField<TextureObjRefChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateAuxiliaryFieldMFields \ingroup GrpLibOSGState */
struct MFRecTextureObjRefChunkPtr :
    public PointerMField<TextureObjRefChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateAuxiliaryFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecTextureObjRefChunkPtr :
    public PointerMField<TextureObjRefChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateAuxiliaryFieldMFields \ingroup GrpLibOSGState */
struct MFWeakTextureObjRefChunkPtr :
    public PointerMField<TextureObjRefChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateAuxiliaryFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedTextureObjRefChunkPtr :
    public PointerMField<TextureObjRefChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTEXTUREOBJREFCHUNKFIELDS_H_ */
