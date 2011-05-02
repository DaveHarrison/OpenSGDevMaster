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

#ifndef _OSGANIMBLENDER_H_
#define _OSGANIMBLENDER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGAnimBlenderBase.h"

OSG_BEGIN_NAMESPACE

// forward decl
class AnimChannel;

/*! \brief AnimBlender class. See \ref
           PageDynamicsAnimBlender for a description.
*/

class OSG_DYNAMICS_DLLMAPPING AnimBlender : public AnimBlenderBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef AnimBlenderBase Inherited;
    typedef AnimBlender     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Setup                                  */
    /*! \{                                                                 */

    virtual void addChannel(      AnimChannel         *channel   ) = 0;
    virtual void subChannel(      AnimChannel         *channel   ) = 0;

    virtual void connectTo (      AttachmentContainer *container,
                            const std::string         &fieldName ) = 0;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                  Frame Task Interface                        */
    /*! \{                                                                 */

    virtual Int32 getPriority(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in AnimBlenderBase.

    static Int32 _blendTaskPriority;

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    AnimBlender(void);
    AnimBlender(const AnimBlender &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AnimBlender(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class AnimBlenderBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const AnimBlender &source);
};

typedef AnimBlender *AnimBlenderP;

OSG_END_NAMESPACE

#include "OSGAnimBlenderBase.inl"
#include "OSGAnimBlender.inl"

#endif /* _OSGANIMBLENDER_H_ */
