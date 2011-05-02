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


#ifndef _OSGTIMESENSORFIELDS_H_
#define _OSGTIMESENSORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TimeSensor;

OSG_GEN_CONTAINERPTR(TimeSensor);

/*! \ingroup GrpDynamicsAnimationFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<TimeSensor *> :
    public FieldTraitsFCPtrBase<TimeSensor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TimeSensor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTimeSensorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTimeSensorPtr"; }
};

template<> inline
const Char8 *FieldTraits<TimeSensor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TimeSensor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TimeSensor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TimeSensor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TimeSensor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TimeSensor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TimeSensor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTimeSensorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TimeSensor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTimeSensorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsAnimationFieldSFields */
typedef PointerSField<TimeSensor *,
                      RecordedRefCountPolicy  > SFRecTimeSensorPtr;
/*! \ingroup GrpDynamicsAnimationFieldSFields */
typedef PointerSField<TimeSensor *,
                      UnrecordedRefCountPolicy> SFUnrecTimeSensorPtr;
/*! \ingroup GrpDynamicsAnimationFieldSFields */
typedef PointerSField<TimeSensor *,
                      WeakRefCountPolicy      > SFWeakTimeSensorPtr;
/*! \ingroup GrpDynamicsAnimationFieldSFields */
typedef PointerSField<TimeSensor *,
                      NoRefCountPolicy        > SFUncountedTimeSensorPtr;


/*! \ingroup GrpDynamicsAnimationFieldMFields */
typedef PointerMField<TimeSensor *,
                      RecordedRefCountPolicy  > MFRecTimeSensorPtr;
/*! \ingroup GrpDynamicsAnimationFieldMFields */
typedef PointerMField<TimeSensor *,
                      UnrecordedRefCountPolicy> MFUnrecTimeSensorPtr;
/*! \ingroup GrpDynamicsAnimationFieldMFields */
typedef PointerMField<TimeSensor *,
                      WeakRefCountPolicy      > MFWeakTimeSensorPtr;
/*! \ingroup GrpDynamicsAnimationFieldMFields */
typedef PointerMField<TimeSensor *,
                      NoRefCountPolicy        > MFUncountedTimeSensorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsAnimationFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecTimeSensorPtr : 
    public PointerSField<TimeSensor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsAnimationFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecTimeSensorPtr : 
    public PointerSField<TimeSensor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsAnimationFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakTimeSensorPtr :
    public PointerSField<TimeSensor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsAnimationFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedTimeSensorPtr :
    public PointerSField<TimeSensor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsAnimationFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecTimeSensorPtr :
    public PointerMField<TimeSensor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsAnimationFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecTimeSensorPtr :
    public PointerMField<TimeSensor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsAnimationFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakTimeSensorPtr :
    public PointerMField<TimeSensor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsAnimationFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedTimeSensorPtr :
    public PointerMField<TimeSensor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTIMESENSORFIELDS_H_ */
