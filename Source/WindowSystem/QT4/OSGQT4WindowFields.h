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


#ifndef _OSGQT4WINDOWFIELDS_H_
#define _OSGQT4WINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowQT4Def.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class QT4Window;

OSG_GEN_CONTAINERPTR(QT4Window);

/*! \ingroup GrpWindowQt4FieldTraits
    \ingroup GrpLibOSGWindowQT4
 */
template <>
struct FieldTraits<QT4Window *> :
    public FieldTraitsFCPtrBase<QT4Window *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<QT4Window *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOWQT4_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFQT4WindowPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFQT4WindowPtr"; }
};

template<> inline
const Char8 *FieldTraits<QT4Window *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<QT4Window *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<QT4Window *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<QT4Window *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<QT4Window *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<QT4Window *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<QT4Window *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakQT4WindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<QT4Window *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdQT4WindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowQt4FieldSFields */
typedef PointerSField<QT4Window *,
                      RecordedRefCountPolicy  > SFRecQT4WindowPtr;
/*! \ingroup GrpWindowQt4FieldSFields */
typedef PointerSField<QT4Window *,
                      UnrecordedRefCountPolicy> SFUnrecQT4WindowPtr;
/*! \ingroup GrpWindowQt4FieldSFields */
typedef PointerSField<QT4Window *,
                      WeakRefCountPolicy      > SFWeakQT4WindowPtr;
/*! \ingroup GrpWindowQt4FieldSFields */
typedef PointerSField<QT4Window *,
                      NoRefCountPolicy        > SFUncountedQT4WindowPtr;


/*! \ingroup GrpWindowQt4FieldMFields */
typedef PointerMField<QT4Window *,
                      RecordedRefCountPolicy  > MFRecQT4WindowPtr;
/*! \ingroup GrpWindowQt4FieldMFields */
typedef PointerMField<QT4Window *,
                      UnrecordedRefCountPolicy> MFUnrecQT4WindowPtr;
/*! \ingroup GrpWindowQt4FieldMFields */
typedef PointerMField<QT4Window *,
                      WeakRefCountPolicy      > MFWeakQT4WindowPtr;
/*! \ingroup GrpWindowQt4FieldMFields */
typedef PointerMField<QT4Window *,
                      NoRefCountPolicy        > MFUncountedQT4WindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowQt4FieldSFields \ingroup GrpLibOSGWindowQT4 */
struct SFRecQT4WindowPtr : 
    public PointerSField<QT4Window *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowQt4FieldSFields \ingroup GrpLibOSGWindowQT4 */
struct SFUnrecQT4WindowPtr : 
    public PointerSField<QT4Window *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowQt4FieldSFields \ingroup GrpLibOSGWindowQT4 */
struct SFWeakQT4WindowPtr :
    public PointerSField<QT4Window *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowQt4FieldSFields \ingroup GrpLibOSGWindowQT4 */
struct SFUncountedQT4WindowPtr :
    public PointerSField<QT4Window *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowQt4FieldMFields \ingroup GrpLibOSGWindowQT4 */
struct MFRecQT4WindowPtr :
    public PointerMField<QT4Window *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowQt4FieldMFields \ingroup GrpLibOSGWindowQT4 */
struct MFUnrecQT4WindowPtr :
    public PointerMField<QT4Window *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowQt4FieldMFields \ingroup GrpLibOSGWindowQT4 */
struct MFWeakQT4WindowPtr :
    public PointerMField<QT4Window *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowQt4FieldMFields \ingroup GrpLibOSGWindowQT4 */
struct MFUncountedQT4WindowPtr :
    public PointerMField<QT4Window *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGQT4WINDOWFIELDS_H_ */
