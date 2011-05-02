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


#ifndef _OSGGPUSKINNINGDATAATTACHMENTFIELDS_H_
#define _OSGGPUSKINNINGDATAATTACHMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GPUSkinningDataAttachment;

OSG_GEN_CONTAINERPTR(GPUSkinningDataAttachment);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<GPUSkinningDataAttachment *> :
    public FieldTraitsFCPtrBase<GPUSkinningDataAttachment *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GPUSkinningDataAttachment *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGPUSkinningDataAttachmentPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGPUSkinningDataAttachmentPtr"; }
};

template<> inline
const Char8 *FieldTraits<GPUSkinningDataAttachment *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGPUSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GPUSkinningDataAttachment *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGPUSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GPUSkinningDataAttachment *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGPUSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GPUSkinningDataAttachment *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGPUSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GPUSkinningDataAttachment *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGPUSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GPUSkinningDataAttachment *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGPUSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GPUSkinningDataAttachment *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGPUSkinningDataAttachmentPtr"; 
}

template<> inline
const Char8 *FieldTraits<GPUSkinningDataAttachment *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGPUSkinningDataAttachmentPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<GPUSkinningDataAttachment *,
                      RecordedRefCountPolicy  > SFRecGPUSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<GPUSkinningDataAttachment *,
                      UnrecordedRefCountPolicy> SFUnrecGPUSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<GPUSkinningDataAttachment *,
                      WeakRefCountPolicy      > SFWeakGPUSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<GPUSkinningDataAttachment *,
                      NoRefCountPolicy        > SFUncountedGPUSkinningDataAttachmentPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<GPUSkinningDataAttachment *,
                      RecordedRefCountPolicy  > MFRecGPUSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<GPUSkinningDataAttachment *,
                      UnrecordedRefCountPolicy> MFUnrecGPUSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<GPUSkinningDataAttachment *,
                      WeakRefCountPolicy      > MFWeakGPUSkinningDataAttachmentPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<GPUSkinningDataAttachment *,
                      NoRefCountPolicy        > MFUncountedGPUSkinningDataAttachmentPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecGPUSkinningDataAttachmentPtr : 
    public PointerSField<GPUSkinningDataAttachment *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecGPUSkinningDataAttachmentPtr : 
    public PointerSField<GPUSkinningDataAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakGPUSkinningDataAttachmentPtr :
    public PointerSField<GPUSkinningDataAttachment *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedGPUSkinningDataAttachmentPtr :
    public PointerSField<GPUSkinningDataAttachment *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecGPUSkinningDataAttachmentPtr :
    public PointerMField<GPUSkinningDataAttachment *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecGPUSkinningDataAttachmentPtr :
    public PointerMField<GPUSkinningDataAttachment *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakGPUSkinningDataAttachmentPtr :
    public PointerMField<GPUSkinningDataAttachment *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedGPUSkinningDataAttachmentPtr :
    public PointerMField<GPUSkinningDataAttachment *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGPUSKINNINGDATAATTACHMENTFIELDS_H_ */
