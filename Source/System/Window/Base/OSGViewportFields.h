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


#ifndef _OSGVIEWPORTFIELDS_H_
#define _OSGVIEWPORTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Viewport;

OSG_GEN_CONTAINERPTR(Viewport);

/*! \ingroup GrpSystemWindowFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<Viewport *> :
    public FieldTraitsFCPtrBase<Viewport *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Viewport *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFViewportPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFViewportPtr"; }
};

template<> inline
const Char8 *FieldTraits<Viewport *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdViewportPtr"; 
}


/*! \ingroup GrpSystemWindowFieldTraits
 */
template <>
struct FieldTraits<Viewport *, 1> :
    public FieldTraitsFCPtrBase<Viewport *, 1>
{
  private:

  public:
    typedef FieldTraits<Viewport *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<Viewport *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<Viewport *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildViewportPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Viewport *,
                      RecordedRefCountPolicy  > SFRecViewportPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Viewport *,
                      UnrecordedRefCountPolicy> SFUnrecViewportPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Viewport *,
                      WeakRefCountPolicy      > SFWeakViewportPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Viewport *,
                      NoRefCountPolicy        > SFUncountedViewportPtr;


/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Viewport *,
                      RecordedRefCountPolicy  > MFRecViewportPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Viewport *,
                      UnrecordedRefCountPolicy> MFUnrecViewportPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Viewport *,
                      WeakRefCountPolicy      > MFWeakViewportPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Viewport *,
                      NoRefCountPolicy        > MFUncountedViewportPtr;



/*! \ingroup GrpSystemWindowFieldMFields */
typedef ChildPointerMField<
          Viewport *, 
          UnrecordedRefCountPolicy,
          1             > MFUnrecChildViewportPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecViewportPtr : 
    public PointerSField<Viewport *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecViewportPtr : 
    public PointerSField<Viewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakViewportPtr :
    public PointerSField<Viewport *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedViewportPtr :
    public PointerSField<Viewport *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecViewportPtr :
    public PointerMField<Viewport *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecViewportPtr :
    public PointerMField<Viewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakViewportPtr :
    public PointerMField<Viewport *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedViewportPtr :
    public PointerMField<Viewport *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecChildViewportPtr :
    public ChildPointerMField<
        Viewport *, 
        UnrecordedRefCountPolicy,
        1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGVIEWPORTFIELDS_H_ */
