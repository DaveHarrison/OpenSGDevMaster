/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
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

#ifndef _OSGFIELDCONTAINERFACTORY_H_
#define _OSGFIELDCONTAINERFACTORY_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBaseTypes.h"
#include "OSGSingletonHolder.h"
#include "OSGContainerForwards.h"
#include "OSGContainerFactory.h"
#include "OSGAspectStore.h"
#include "OSGContainerIdMapper.h"

//#include "OSGFieldContainer.h"

#include <deque>

OSG_BEGIN_NAMESPACE

struct FieldContainerFactoryDesc
{
    typedef FieldContainerType        ContainerType;
    typedef FieldContainer           *ContainerPtr;
    typedef FieldContainerTransitPtr  ContainerTransitPtr;

    static const Char8 *getContainerFactoryLockName(void)
    {
        return "ContainerFactory::cflock";
    }
};


/*! \brief FieldContainerFactoryBase is the central class in OpenSG for 
  accessing, allocating, and mapping field containers allocated in the system.
    \ingroup GrpSystemFieldContainer
 */
class OSG_BASE_DLLMAPPING FieldContainerFactoryBase :
    public ContainerFactory<FieldContainerFactoryDesc>
{
    /*==========================  PUBLIC  =================================*/

  public:

    typedef FieldContainer                *ContainerPtr;
#ifdef OSG_MT_CPTR_ASPECT
    typedef AspectStoreP                   ContainerHandlerP;
#else
    typedef FieldContainer                *ContainerHandlerP;
#endif

    typedef std::deque<ContainerHandlerP>  ContainerStore;
    typedef ContainerStore::iterator       ContainerStoreIt;

    /*---------------------------------------------------------------------*/
    /*! \name                      dcast                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name        General Fieldcontainer Declaration                    */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Helper                                    */
    /*! \{                                                                 */

    void setMapper(ContainerIdMapper *pMapper);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Get                                     */
    /*! \{                                                                 */

    UInt32            getNumContainers   (void                ) const;
    ContainerPtr      getContainer       (UInt32 uiContainerId) const;
    ContainerHandlerP getContainerHandler(UInt32 uiContainerId) const;

    ContainerPtr      getMappedContainer (UInt32 uiContainerId) const;

    Int32             findContainer      (ContainerPtr ptr    ) const;
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Get                                     */
    /*! \{                                                                 */

    UInt32 registerContainer  (const ContainerPtr &pContainer   );
    bool   deregisterContainer(const UInt32        uiContainerId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Set                                     */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   your_category                              */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 Container Access                             */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   your_operators                             */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Assignment                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Comparison                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                        Dump                                  */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                  Type information                            */
    /*! \{                                                                 */

    template <class SingletonT>
    friend class SingletonHolder;

    friend class FactoryControllerBase;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

#ifndef OSG_EMBEDDED
    Lock              *_pStoreLock;
#endif

    ContainerStore     _vContainerStore;

    /*! Currently active field container mapper. */
    ContainerIdMapper *_pMapper;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

    FieldContainerFactoryBase(void);
    FieldContainerFactoryBase(const Char8 *szFactoryName);

    virtual ~FieldContainerFactoryBase(void);

    virtual bool initialize           (void);
    virtual bool terminate            (void);

    virtual bool initializeFactoryPost(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Changed                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   MT Destruction                             */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    typedef ContainerFactory<FieldContainerFactoryDesc> Inherited;


    /*!\brief prohibit default function (move to 'public' if needed) */
    FieldContainerFactoryBase(const FieldContainerFactoryBase &source);
    /*!\brief prohibit default function (move to 'public' if needed) */
    void operator =(const FieldContainerFactoryBase &source);
};

#if defined(WIN32)
#    if !defined(OSG_COMPILE_FIELDCONTAINERFACTORY)
//OSG_SYSTEM_EXPIMP_TMPL
//template
//class OSG_SYSTEM_DLLMAPPING SingletonHolder<FieldContainerFactoryBase>;
#    endif
#endif

typedef SingletonHolder<FieldContainerFactoryBase> FieldContainerFactory;

OSG_END_NAMESPACE

#include "OSGFieldContainerFactory.inl"

#endif /* _OSGFIELDCONTAINERFACTORY_H_ */