/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                Copyright (C) 2010 by the OpenSG Forum                     *
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

#ifndef _OSGOGRESKELETONREADER_H_
#define _OSGOGRESKELETONREADER_H_
#ifdef __sgi
#pragma once
#endif

/*! \file OSGOgreSkeletonReader.h
    \ingroup GrpLoader
 */

#include "OSGConfig.h"
#include "OSGFileIODef.h"
#include "OSGOgreChunkReader.h"
#include "OSGOgreOptions.h"

#include "OSGAnimMatrixDataSource.h"
#include "OSGAnimQuaternionDataSource.h"
#include "OSGAnimVec3fDataSource.h"
#include "OSGAnimTemplate.h"
#include "OSGGlobalsAttachment.h"
#include "OSGNode.h"
#include "OSGSkeleton.h"

OSG_BEGIN_NAMESPACE

class OSG_FILEIO_DLLMAPPING OgreSkeletonReader : public OgreChunkReader
{
    /*==========================  PUBLIC  =================================*/
  public:
    /*---------------------------------------------------------------------*/
    /*! \name Types                                                        */
    /*! \{                                                                 */

    typedef OgreChunkReader  Inherited;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Constructors/Destructor                                      */
    /*! \{                                                                 */

    explicit  OgreSkeletonReader(      std::istream &is,
                                 const OgreOptions  &options);
    virtual  ~OgreSkeletonReader(void                       );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Read                                                         */
    /*! \{                                                                 */

    void read(void);

    Skeleton*          getSkeleton(void);
    GlobalsAttachment* getGlobals (void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:
    enum ChunkIds
    {
        CHUNK_HEADER                   = 0x1000,
        CHUNK_BONE                     = 0x2000,
        CHUNK_BONE_PARENT              = 0x3000,

        CHUNK_ANIMATION                = 0x4000,
        CHUNK_ANIMATION_TRACK          = 0x4100,
        CHUNK_ANIMATION_TRACK_KEYFRAME = 0x4110,
        CHUNK_ANIMATION_LINK           = 0x5000
    };

    typedef std::vector<NodeUnrecPtr> JointNodeStore;

    static const std::string _versionString;
    static const std::size_t _boneLengthNoScale;
    static const std::size_t _keyFrameLengthNoScale;

    void readContent               (void);
    void readBone                  (JointNodeStore       &joints  );
    void readBoneParent            (JointNodeStore       &joints  );
    void readAnimation             (JointNodeStore       &joints  );
    void readAnimationTrack        (JointNodeStore       &joints,
                                    AnimTemplate         *animTmpl);
    // void readAnimationTrackKeyFrame(AnimMatrixDataSource *dataSrc );
    void readAnimationTrackKeyFrame(AnimVec3fDataSource      *translateSrc,
                                    AnimVec3fDataSource      *scaleSrc,
                                    AnimQuaternionDataSource *rotateSrc    );
    void readAnimationLink         (void);

    void calcInvBindMatrices(JointNodeStore &joints          );
    void calcInvBindMatrix  (Node           *node,
                             Vec3f           parentTranslate,
                             Vec3f           parentScale,
                             Quaternion      parentRotate    );

    const OgreOptions         &_options;

    SkeletonUnrecPtr           _skel;
    GlobalsAttachmentUnrecPtr  _globals;
};

OSG_END_NAMESPACE

#endif // _OSGOGRESKELETONREADER_H_
