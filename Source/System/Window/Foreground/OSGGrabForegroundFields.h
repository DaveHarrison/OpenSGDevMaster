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


#ifndef _OSGGRABFOREGROUNDFIELDS_H_
#define _OSGGRABFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GrabForeground;

OSG_GEN_CONTAINERPTR(GrabForeground);

/*! \ingroup GrpWindowForegroundFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<GrabForeground *> :
    public FieldTraitsFCPtrBase<GrabForeground *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GrabForeground *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGrabForegroundPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGrabForegroundPtr"; }
};

template<> inline
const Char8 *FieldTraits<GrabForeground *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GrabForeground *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GrabForeground *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GrabForeground *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GrabForeground *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GrabForeground *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GrabForeground *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GrabForeground *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGrabForegroundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowForegroundFieldSFields */
typedef PointerSField<GrabForeground *,
                      RecordedRefCountPolicy  > SFRecGrabForegroundPtr;
/*! \ingroup GrpWindowForegroundFieldSFields */
typedef PointerSField<GrabForeground *,
                      UnrecordedRefCountPolicy> SFUnrecGrabForegroundPtr;
/*! \ingroup GrpWindowForegroundFieldSFields */
typedef PointerSField<GrabForeground *,
                      WeakRefCountPolicy      > SFWeakGrabForegroundPtr;
/*! \ingroup GrpWindowForegroundFieldSFields */
typedef PointerSField<GrabForeground *,
                      NoRefCountPolicy        > SFUncountedGrabForegroundPtr;


/*! \ingroup GrpWindowForegroundFieldMFields */
typedef PointerMField<GrabForeground *,
                      RecordedRefCountPolicy  > MFRecGrabForegroundPtr;
/*! \ingroup GrpWindowForegroundFieldMFields */
typedef PointerMField<GrabForeground *,
                      UnrecordedRefCountPolicy> MFUnrecGrabForegroundPtr;
/*! \ingroup GrpWindowForegroundFieldMFields */
typedef PointerMField<GrabForeground *,
                      WeakRefCountPolicy      > MFWeakGrabForegroundPtr;
/*! \ingroup GrpWindowForegroundFieldMFields */
typedef PointerMField<GrabForeground *,
                      NoRefCountPolicy        > MFUncountedGrabForegroundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowForegroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecGrabForegroundPtr : 
    public PointerSField<GrabForeground *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowForegroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecGrabForegroundPtr : 
    public PointerSField<GrabForeground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowForegroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakGrabForegroundPtr :
    public PointerSField<GrabForeground *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowForegroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedGrabForegroundPtr :
    public PointerSField<GrabForeground *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowForegroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecGrabForegroundPtr :
    public PointerMField<GrabForeground *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowForegroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecGrabForegroundPtr :
    public PointerMField<GrabForeground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowForegroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakGrabForegroundPtr :
    public PointerMField<GrabForeground *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowForegroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedGrabForegroundPtr :
    public PointerMField<GrabForeground *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGRABFOREGROUNDFIELDS_H_ */
