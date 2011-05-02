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
 **     Do not change this file, changes should be done in the derived      **
 **     class ComponentTransform
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOMPONENTTRANSFORMBASE_H_
#define _OSGCOMPONENTTRANSFORMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGTransform.h" // Parent

#include "OSGVecFields.h"               // Center type
#include "OSGMathFields.h"              // Rotation type

#include "OSGComponentTransformFields.h"

OSG_BEGIN_NAMESPACE

class ComponentTransform;

//! \brief ComponentTransform Base Class.

class OSG_GROUP_DLLMAPPING ComponentTransformBase : public Transform
{
  public:

    typedef Transform Inherited;
    typedef Transform ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ComponentTransform);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CenterFieldId = Inherited::NextFieldId,
        RotationFieldId = CenterFieldId + 1,
        ScaleFieldId = RotationFieldId + 1,
        ScaleOrientationFieldId = ScaleFieldId + 1,
        TranslationFieldId = ScaleOrientationFieldId + 1,
        NextFieldId = TranslationFieldId + 1
    };

    static const OSG::BitVector CenterFieldMask =
        (TypeTraits<BitVector>::One << CenterFieldId);
    static const OSG::BitVector RotationFieldMask =
        (TypeTraits<BitVector>::One << RotationFieldId);
    static const OSG::BitVector ScaleFieldMask =
        (TypeTraits<BitVector>::One << ScaleFieldId);
    static const OSG::BitVector ScaleOrientationFieldMask =
        (TypeTraits<BitVector>::One << ScaleOrientationFieldId);
    static const OSG::BitVector TranslationFieldMask =
        (TypeTraits<BitVector>::One << TranslationFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFVec3f           SFCenterType;
    typedef SFQuaternion      SFRotationType;
    typedef SFVec3f           SFScaleType;
    typedef SFQuaternion      SFScaleOrientationType;
    typedef SFVec3f           SFTranslationType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFVec3f             *editSFCenter         (void);
            const SFVec3f             *getSFCenter          (void) const;

                  SFQuaternion        *editSFRotation       (void);
            const SFQuaternion        *getSFRotation        (void) const;

                  SFVec3f             *editSFScale          (void);
            const SFVec3f             *getSFScale           (void) const;

                  SFQuaternion        *editSFScaleOrientation(void);
            const SFQuaternion        *getSFScaleOrientation (void) const;

                  SFVec3f             *editSFTranslation    (void);
            const SFVec3f             *getSFTranslation     (void) const;


                  Vec3f               &editCenter         (void);
            const Vec3f               &getCenter          (void) const;

                  Quaternion          &editRotation       (void);
            const Quaternion          &getRotation        (void) const;

                  Vec3f               &editScale          (void);
            const Vec3f               &getScale           (void) const;

                  Quaternion          &editScaleOrientation(void);
            const Quaternion          &getScaleOrientation (void) const;

                  Vec3f               &editTranslation    (void);
            const Vec3f               &getTranslation     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCenter         (const Vec3f &value);
            void setRotation       (const Quaternion &value);
            void setScale          (const Vec3f &value);
            void setScaleOrientation(const Quaternion &value);
            void setTranslation    (const Vec3f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ComponentTransformTransitPtr  create          (void);
    static  ComponentTransform           *createEmpty     (void);

    static  ComponentTransformTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ComponentTransform            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ComponentTransformTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFVec3f           _sfCenter;
    SFQuaternion      _sfRotation;
    SFVec3f           _sfScale;
    SFQuaternion      _sfScaleOrientation;
    SFVec3f           _sfTranslation;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ComponentTransformBase(void);
    ComponentTransformBase(const ComponentTransformBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ComponentTransformBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleCenter          (void) const;
    EditFieldHandlePtr editHandleCenter         (void);
    GetFieldHandlePtr  getHandleRotation        (void) const;
    EditFieldHandlePtr editHandleRotation       (void);
    GetFieldHandlePtr  getHandleScale           (void) const;
    EditFieldHandlePtr editHandleScale          (void);
    GetFieldHandlePtr  getHandleScaleOrientation (void) const;
    EditFieldHandlePtr editHandleScaleOrientation(void);
    GetFieldHandlePtr  getHandleTranslation     (void) const;
    EditFieldHandlePtr editHandleTranslation    (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      ComponentTransformBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ComponentTransformBase &source);
};

typedef ComponentTransformBase *ComponentTransformBaseP;

typedef CoredNodeRefPtr  <ComponentTransform> ComponentTransformNodeRefPtr;
typedef CoredNodeMTRefPtr<ComponentTransform> ComponentTransformNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGCOMPONENTTRANSFORMBASE_H_ */
