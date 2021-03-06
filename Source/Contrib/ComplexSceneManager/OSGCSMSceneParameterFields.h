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


#ifndef _OSGCSMSCENEPARAMETERFIELDS_H_
#define _OSGCSMSCENEPARAMETERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CSMSceneParameter;

OSG_GEN_CONTAINERPTR(CSMSceneParameter);

/*! \ingroup GrpContribCSMFieldTraits
    \ingroup GrpLibOSGContribCSM
 */
template <>
struct FieldTraits<CSMSceneParameter *> :
    public FieldTraitsFCPtrBase<CSMSceneParameter *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CSMSceneParameter *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCSMSceneParameterPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCSMSceneParameterPtr"; }
};

template<> inline
const Char8 *FieldTraits<CSMSceneParameter *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCSMSceneParameterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMSceneParameter *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCSMSceneParameterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMSceneParameter *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCSMSceneParameterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMSceneParameter *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCSMSceneParameterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMSceneParameter *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCSMSceneParameterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMSceneParameter *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCSMSceneParameterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMSceneParameter *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCSMSceneParameterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMSceneParameter *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCSMSceneParameterPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMSceneParameter *,
                      RecordedRefCountPolicy  > SFRecCSMSceneParameterPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMSceneParameter *,
                      UnrecordedRefCountPolicy> SFUnrecCSMSceneParameterPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMSceneParameter *,
                      WeakRefCountPolicy      > SFWeakCSMSceneParameterPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMSceneParameter *,
                      NoRefCountPolicy        > SFUncountedCSMSceneParameterPtr;


/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMSceneParameter *,
                      RecordedRefCountPolicy  > MFRecCSMSceneParameterPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMSceneParameter *,
                      UnrecordedRefCountPolicy> MFUnrecCSMSceneParameterPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMSceneParameter *,
                      WeakRefCountPolicy      > MFWeakCSMSceneParameterPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMSceneParameter *,
                      NoRefCountPolicy        > MFUncountedCSMSceneParameterPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFRecCSMSceneParameterPtr : 
    public PointerSField<CSMSceneParameter *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUnrecCSMSceneParameterPtr : 
    public PointerSField<CSMSceneParameter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFWeakCSMSceneParameterPtr :
    public PointerSField<CSMSceneParameter *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUncountedCSMSceneParameterPtr :
    public PointerSField<CSMSceneParameter *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFRecCSMSceneParameterPtr :
    public PointerMField<CSMSceneParameter *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUnrecCSMSceneParameterPtr :
    public PointerMField<CSMSceneParameter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFWeakCSMSceneParameterPtr :
    public PointerMField<CSMSceneParameter *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUncountedCSMSceneParameterPtr :
    public PointerMField<CSMSceneParameter *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCSMSCENEPARAMETERFIELDS_H_ */
