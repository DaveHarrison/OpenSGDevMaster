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
 **     class SkinnedGeometry
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKINNEDGEOMETRYBASE_H_
#define _OSGSKINNEDGEOMETRYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGeometry.h" // Parent

#include "OSGSkeletonFields.h"          // Skeleton type
#include "OSGMathFields.h"              // BindShapeMatrix type
#include "OSGSysFields.h"               // JointIds type
#include "OSGSkinningAlgorithmFields.h" // SkinningAlgorithm type

#include "OSGSkinnedGeometryFields.h"

OSG_BEGIN_NAMESPACE

class SkinnedGeometry;

//! \brief SkinnedGeometry Base Class.

class OSG_DYNAMICS_DLLMAPPING SkinnedGeometryBase : public Geometry
{
  public:

    typedef Geometry Inherited;
    typedef Geometry ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SkinnedGeometry);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SkeletonFieldId = Inherited::NextFieldId,
        BindShapeMatrixFieldId = SkeletonFieldId + 1,
        JointIdsFieldId = BindShapeMatrixFieldId + 1,
        JointIndexPropertyFieldId = JointIdsFieldId + 1,
        JointWeightPropertyFieldId = JointIndexPropertyFieldId + 1,
        RenderModeFieldId = JointWeightPropertyFieldId + 1,
        SkinningAlgorithmFieldId = RenderModeFieldId + 1,
        NextFieldId = SkinningAlgorithmFieldId + 1
    };

    static const OSG::BitVector SkeletonFieldMask =
        (TypeTraits<BitVector>::One << SkeletonFieldId);
    static const OSG::BitVector BindShapeMatrixFieldMask =
        (TypeTraits<BitVector>::One << BindShapeMatrixFieldId);
    static const OSG::BitVector JointIdsFieldMask =
        (TypeTraits<BitVector>::One << JointIdsFieldId);
    static const OSG::BitVector JointIndexPropertyFieldMask =
        (TypeTraits<BitVector>::One << JointIndexPropertyFieldId);
    static const OSG::BitVector JointWeightPropertyFieldMask =
        (TypeTraits<BitVector>::One << JointWeightPropertyFieldId);
    static const OSG::BitVector RenderModeFieldMask =
        (TypeTraits<BitVector>::One << RenderModeFieldId);
    static const OSG::BitVector SkinningAlgorithmFieldMask =
        (TypeTraits<BitVector>::One << SkinningAlgorithmFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecSkeletonPtr SFSkeletonType;
    typedef SFMatrix          SFBindShapeMatrixType;
    typedef MFInt16           MFJointIdsType;
    typedef SFUInt16          SFJointIndexPropertyType;
    typedef SFUInt16          SFJointWeightPropertyType;
    typedef SFUInt32          SFRenderModeType;
    typedef SFUnrecChildSkinningAlgorithmPtr SFSkinningAlgorithmType;

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

            const SFUnrecSkeletonPtr  *getSFSkeleton       (void) const;
                  SFUnrecSkeletonPtr  *editSFSkeleton       (void);

                  SFMatrix            *editSFBindShapeMatrix(void);
            const SFMatrix            *getSFBindShapeMatrix (void) const;

                  MFInt16             *editMFJointIds       (void);
            const MFInt16             *getMFJointIds        (void) const;

                  SFUInt16            *editSFJointIndexProperty(void);
            const SFUInt16            *getSFJointIndexProperty (void) const;

                  SFUInt16            *editSFJointWeightProperty(void);
            const SFUInt16            *getSFJointWeightProperty (void) const;

                  SFUInt32            *editSFRenderMode     (void);
            const SFUInt32            *getSFRenderMode      (void) const;


                  Skeleton * getSkeleton       (void) const;

                  Matrix              &editBindShapeMatrix(void);
            const Matrix              &getBindShapeMatrix (void) const;

                  Int16               &editJointIds       (const UInt32 index);
                  Int16                getJointIds        (const UInt32 index) const;

                  UInt16              &editJointIndexProperty(void);
                  UInt16               getJointIndexProperty (void) const;

                  UInt16              &editJointWeightProperty(void);
                  UInt16               getJointWeightProperty (void) const;

                  UInt32              &editRenderMode     (void);
                  UInt32               getRenderMode      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSkeleton       (Skeleton * const value);
            void setBindShapeMatrix(const Matrix &value);
            void setJointIndexProperty(const UInt16 value);
            void setJointWeightProperty(const UInt16 value);
            void setRenderMode     (const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  SkinnedGeometryTransitPtr  create          (void);
    static  SkinnedGeometry           *createEmpty     (void);

    static  SkinnedGeometryTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SkinnedGeometry            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SkinnedGeometryTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecSkeletonPtr _sfSkeleton;
    SFMatrix          _sfBindShapeMatrix;
    MFInt16           _mfJointIds;
    SFUInt16          _sfJointIndexProperty;
    SFUInt16          _sfJointWeightProperty;
    SFUInt32          _sfRenderMode;
    SFUnrecChildSkinningAlgorithmPtr _sfSkinningAlgorithm;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkinnedGeometryBase(void);
    SkinnedGeometryBase(const SkinnedGeometryBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkinnedGeometryBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SkinnedGeometry *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleSkeleton        (void) const;
    EditFieldHandlePtr editHandleSkeleton       (void);
    GetFieldHandlePtr  getHandleBindShapeMatrix (void) const;
    EditFieldHandlePtr editHandleBindShapeMatrix(void);
    GetFieldHandlePtr  getHandleJointIds        (void) const;
    EditFieldHandlePtr editHandleJointIds       (void);
    GetFieldHandlePtr  getHandleJointIndexProperty (void) const;
    EditFieldHandlePtr editHandleJointIndexProperty(void);
    GetFieldHandlePtr  getHandleJointWeightProperty (void) const;
    EditFieldHandlePtr editHandleJointWeightProperty(void);
    GetFieldHandlePtr  getHandleRenderMode      (void) const;
    EditFieldHandlePtr editHandleRenderMode     (void);
    GetFieldHandlePtr  getHandleSkinningAlgorithm (void) const;
    EditFieldHandlePtr editHandleSkinningAlgorithm(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecChildSkinningAlgorithmPtr *getSFSkinningAlgorithm (void) const;
                  SFUnrecChildSkinningAlgorithmPtr *editSFSkinningAlgorithm(void);


                  SkinningAlgorithm * getSkinningAlgorithm(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSkinningAlgorithm(SkinningAlgorithm * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      SkinnedGeometryBase *pFrom,
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
    void operator =(const SkinnedGeometryBase &source);
};

typedef SkinnedGeometryBase *SkinnedGeometryBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSKINNEDGEOMETRYBASE_H_ */
