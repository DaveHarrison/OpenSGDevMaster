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


#ifndef _OSGCOCOAWINDOWFIELDS_H_
#define _OSGCOCOAWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowCocoaDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CocoaWindow;

OSG_GEN_CONTAINERPTR(CocoaWindow);

/*! \ingroup GrpWindowCocaoFieldTraits
    \ingroup GrpLibOSGWindowCocoa
 */
template <>
struct FieldTraits<CocoaWindow *> :
    public FieldTraitsFCPtrBase<CocoaWindow *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CocoaWindow *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOWCOCOA_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCocoaWindowPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCocoaWindowPtr"; }
};

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCocoaWindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowCocaoFieldSFields */
typedef PointerSField<CocoaWindow *,
                      RecordedRefCountPolicy  > SFRecCocoaWindowPtr;
/*! \ingroup GrpWindowCocaoFieldSFields */
typedef PointerSField<CocoaWindow *,
                      UnrecordedRefCountPolicy> SFUnrecCocoaWindowPtr;
/*! \ingroup GrpWindowCocaoFieldSFields */
typedef PointerSField<CocoaWindow *,
                      WeakRefCountPolicy      > SFWeakCocoaWindowPtr;
/*! \ingroup GrpWindowCocaoFieldSFields */
typedef PointerSField<CocoaWindow *,
                      NoRefCountPolicy        > SFUncountedCocoaWindowPtr;


/*! \ingroup GrpWindowCocaoFieldMFields */
typedef PointerMField<CocoaWindow *,
                      RecordedRefCountPolicy  > MFRecCocoaWindowPtr;
/*! \ingroup GrpWindowCocaoFieldMFields */
typedef PointerMField<CocoaWindow *,
                      UnrecordedRefCountPolicy> MFUnrecCocoaWindowPtr;
/*! \ingroup GrpWindowCocaoFieldMFields */
typedef PointerMField<CocoaWindow *,
                      WeakRefCountPolicy      > MFWeakCocoaWindowPtr;
/*! \ingroup GrpWindowCocaoFieldMFields */
typedef PointerMField<CocoaWindow *,
                      NoRefCountPolicy        > MFUncountedCocoaWindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowCocaoFieldSFields \ingroup GrpLibOSGWindowCocoa */
struct SFRecCocoaWindowPtr : 
    public PointerSField<CocoaWindow *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCocaoFieldSFields \ingroup GrpLibOSGWindowCocoa */
struct SFUnrecCocoaWindowPtr : 
    public PointerSField<CocoaWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCocaoFieldSFields \ingroup GrpLibOSGWindowCocoa */
struct SFWeakCocoaWindowPtr :
    public PointerSField<CocoaWindow *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowCocaoFieldSFields \ingroup GrpLibOSGWindowCocoa */
struct SFUncountedCocoaWindowPtr :
    public PointerSField<CocoaWindow *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowCocaoFieldMFields \ingroup GrpLibOSGWindowCocoa */
struct MFRecCocoaWindowPtr :
    public PointerMField<CocoaWindow *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowCocaoFieldMFields \ingroup GrpLibOSGWindowCocoa */
struct MFUnrecCocoaWindowPtr :
    public PointerMField<CocoaWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCocaoFieldMFields \ingroup GrpLibOSGWindowCocoa */
struct MFWeakCocoaWindowPtr :
    public PointerMField<CocoaWindow *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowCocaoFieldMFields \ingroup GrpLibOSGWindowCocoa */
struct MFUncountedCocoaWindowPtr :
    public PointerMField<CocoaWindow *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOCOAWINDOWFIELDS_H_ */
