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
 **     class Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEWINDOWINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGViewport.h> // Port Class

#include "OSGWindowBase.h"
#include "OSGWindow.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Window
    \ingroup GrpSystemWindow

    Window is the base class for all window management classes.  See \ref
    PageSystemWindowWindow for a description.

    \ext

    To create a new Window the methods that have to be overridden are 
    init(void), activate(void), deactivate(void) and swap(void).

    \endext
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt16          WindowBase::_sfWidth
    
*/

/*! \var UInt16          WindowBase::_sfHeight
    
*/

/*! \var ViewportPtr     WindowBase::_mfPort
    
*/

/*! \var bool            WindowBase::_sfResizePending
    
*/

/*! \var UInt32          WindowBase::_sfGlObjectEventCounter
    Counter for GL object events. Needed for multi-aspect updates.
    Is used in glObjectLastRefresh and glObjectLastReinitialize.
*/

/*! \var UInt32          WindowBase::_mfGlObjectLastRefresh
    Indicates the last refresh for the GL object.
*/

/*! \var UInt32          WindowBase::_mfGlObjectLastReinitialize
    Indicates the last reinit for the GL object.
*/

/*! \var UInt32          WindowBase::_sfDrawerId
    DrawerId to select window dependent elements (e.g. Distortion filter).
    For cluster window this values equals the clusterId (shl chunk)
*/


void WindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&WindowBase::editHandleWidth),
        static_cast<FieldGetMethodSig >(&WindowBase::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&WindowBase::editHandleHeight),
        static_cast<FieldGetMethodSig >(&WindowBase::getHandleHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new MFViewportPtr::Description(
        MFViewportPtr::getClassType(),
        "port",
        "",
        PortFieldId, PortFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&WindowBase::editHandlePort),
        static_cast<FieldGetMethodSig >(&WindowBase::getHandlePort));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "resizePending",
        "",
        ResizePendingFieldId, ResizePendingFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&WindowBase::editHandleResizePending),
        static_cast<FieldGetMethodSig >(&WindowBase::getHandleResizePending));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "glObjectEventCounter",
        "Counter for GL object events. Needed for multi-aspect updates.\n"
        "Is used in glObjectLastRefresh and glObjectLastReinitialize.\n",
        GlObjectEventCounterFieldId, GlObjectEventCounterFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&WindowBase::editHandleGlObjectEventCounter),
        static_cast<FieldGetMethodSig >(&WindowBase::getHandleGlObjectEventCounter));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "glObjectLastRefresh",
        "Indicates the last refresh for the GL object.\n",
        GlObjectLastRefreshFieldId, GlObjectLastRefreshFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&WindowBase::editHandleGlObjectLastRefresh),
        static_cast<FieldGetMethodSig >(&WindowBase::getHandleGlObjectLastRefresh));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "glObjectLastReinitialize",
        "Indicates the last reinit for the GL object.\n",
        GlObjectLastReinitializeFieldId, GlObjectLastReinitializeFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&WindowBase::editHandleGlObjectLastReinitialize),
        static_cast<FieldGetMethodSig >(&WindowBase::getHandleGlObjectLastReinitialize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "drawerId",
        "DrawerId to select window dependent elements (e.g. Distortion filter).\n"
        "For cluster window this values equals the clusterId (shl chunk)\n",
        DrawerIdFieldId, DrawerIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&WindowBase::editHandleDrawerId),
        static_cast<FieldGetMethodSig >(&WindowBase::getHandleDrawerId));

    oType.addInitialDesc(pDesc);
}


WindowBase::TypeObject WindowBase::_type(
    WindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Window::initMethod,
    Window::exitMethod,
    (InitalInsertDescFunc) &WindowBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Window\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindow\n"
    "\n"
    "Window is the base class for all window management classes.  See \\ref\n"
    "PageSystemWindowWindow for a description.\n"
    "\n"
    "\\ext\n"
    "\n"
    "To create a new Window the methods that have to be overridden are \n"
    "init(void), activate(void), deactivate(void) and swap(void).\n"
    "\n"
    "\\endext\n"
    "\t<Field\n"
    "\t\tname=\"width\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"height\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"port\"\n"
    "\t\ttype=\"ViewportPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "                pushToFieldAs=\"addPort\"\n"
    "                insertIntoMFieldAs=\"insertPort\"\n"
    "                replaceInMFieldIndexAs=\"replacePort\"\n"
    "                replaceInMFieldObjectAs=\"replacePortBy\"\n"
    "                removeFromMFieldIndexAs=\"subPort\"\n"
    "                removeFromMFieldObjectAs=\"subPort\"\n"
    "                clearFieldAs=\"clearPorts\"        \n"
    "                linkSParent=\"true\"\n"
    "                checkNilPtr=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"resizePending\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"glObjectEventCounter\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"protected\"\n"
    "                fieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tCounter for GL object events. Needed for multi-aspect updates.\n"
    "        Is used in glObjectLastRefresh and glObjectLastReinitialize.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"glObjectLastRefresh\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "                fieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tIndicates the last refresh for the GL object.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"glObjectLastReinitialize\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "                fieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tIndicates the last reinit for the GL object.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"drawerId\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        fieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "    DrawerId to select window dependent elements (e.g. Distortion filter).\n"
    "    For cluster window this values equals the clusterId (shl chunk)\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindow\n"
    "\n"
    "Window is the base class for all window management classes.  See \\ref\n"
    "PageSystemWindowWindow for a description.\n"
    "\n"
    "\\ext\n"
    "\n"
    "To create a new Window the methods that have to be overridden are \n"
    "init(void), activate(void), deactivate(void) and swap(void).\n"
    "\n"
    "\\endext\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &WindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &WindowBase::getType(void) const
{
    return _type;
}

UInt32 WindowBase::getContainerSize(void) const
{
    return sizeof(Window);
}

/*------------------------- decorator get ------------------------------*/


SFUInt16 *WindowBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt16 *WindowBase::getSFWidth(void) const
{
    return &_sfWidth;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *WindowBase::getSFWidth          (void)
{
    return this->editSFWidth          ();
}
#endif

SFUInt16 *WindowBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt16 *WindowBase::getSFHeight(void) const
{
    return &_sfHeight;
}

#ifdef OSG_1_GET_COMPAT
SFUInt16            *WindowBase::getSFHeight         (void)
{
    return this->editSFHeight         ();
}
#endif

//! Get the Window::_mfPort field.
const MFViewportPtr *WindowBase::getMFPort(void) const
{
    return &_mfPort;
}

SFBool *WindowBase::editSFResizePending(void)
{
    editSField(ResizePendingFieldMask);

    return &_sfResizePending;
}

const SFBool *WindowBase::getSFResizePending(void) const
{
    return &_sfResizePending;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *WindowBase::getSFResizePending  (void)
{
    return this->editSFResizePending  ();
}
#endif

SFUInt32 *WindowBase::editSFGlObjectEventCounter(void)
{
    editSField(GlObjectEventCounterFieldMask);

    return &_sfGlObjectEventCounter;
}

const SFUInt32 *WindowBase::getSFGlObjectEventCounter(void) const
{
    return &_sfGlObjectEventCounter;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *WindowBase::getSFGlObjectEventCounter(void)
{
    return this->editSFGlObjectEventCounter();
}
#endif

MFUInt32 *WindowBase::editMFGlObjectLastRefresh(void)
{
    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

    return &_mfGlObjectLastRefresh;
}

const MFUInt32 *WindowBase::getMFGlObjectLastRefresh(void) const
{
    return &_mfGlObjectLastRefresh;
}

#ifdef OSG_1_GET_COMPAT
MFUInt32            *WindowBase::getMFGlObjectLastRefresh(void)
{
    return this->editMFGlObjectLastRefresh();
}
#endif

MFUInt32 *WindowBase::editMFGlObjectLastReinitialize(void)
{
    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

    return &_mfGlObjectLastReinitialize;
}

const MFUInt32 *WindowBase::getMFGlObjectLastReinitialize(void) const
{
    return &_mfGlObjectLastReinitialize;
}

#ifdef OSG_1_GET_COMPAT
MFUInt32            *WindowBase::getMFGlObjectLastReinitialize(void)
{
    return this->editMFGlObjectLastReinitialize();
}
#endif

SFUInt32 *WindowBase::editSFDrawerId(void)
{
    editSField(DrawerIdFieldMask);

    return &_sfDrawerId;
}

const SFUInt32 *WindowBase::getSFDrawerId(void) const
{
    return &_sfDrawerId;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *WindowBase::getSFDrawerId       (void)
{
    return this->editSFDrawerId       ();
}
#endif



void WindowBase::addPort(ViewportPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(PortFieldMask, _mfPort);

    //addRef(value);

    _mfPort.push_back(value);

    value->setParent(this, PortFieldMask);
}

void WindowBase::assignPort     (const MFViewportPtr     &value)
{
    MFViewportPtr    ::const_iterator elemIt  =
        value.begin();
    MFViewportPtr    ::const_iterator elemEnd =
        value.end  ();

    static_cast<Window *>(this)->clearPorts();

    while(elemIt != elemEnd)
    {
        this->addPort(*elemIt);

        ++elemIt;
    }
}

void WindowBase::insertPort(UInt32                uiIndex,
                                                   ViewportPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(PortFieldMask, _mfPort);

    MFViewportPtr::iterator fieldIt = _mfPort.begin();

    //addRef(value);

    fieldIt += uiIndex;

    _mfPort.insert(fieldIt, value);

    value->setParent(this, PortFieldMask);
}

void WindowBase::replacePort(UInt32                uiIndex,
                                                       ViewportPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfPort.size())
        return;

    editMField(PortFieldMask, _mfPort);


    if(_mfPort[uiIndex] != NullFC)
    {
        _mfPort[uiIndex]->setParent(this, PortFieldMask);
    }

//    addRef(value);
//    subRef(_mfPort[uiIndex]);

//    _mfPort[uiIndex] = value;

      _mfPort.replace(uiIndex, value);

    value->setParent(this, PortFieldMask);
}

void WindowBase::replacePortBy(ViewportPtrConstArg pOldElem,
                                                        ViewportPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfPort.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(PortFieldMask, _mfPort);

        if(pOldElem != NullFC)
        {
            pOldElem->setParent(NullFC, PortFieldMask);
        }

        if(pNewElem != NullFC)
        {
            pNewElem->setParent(this, PortFieldMask);
        }

//        MFViewportPtr::iterator fieldIt = _mfPort.begin();

//        fieldIt += elemIdx;
//        addRef(pNewElem);
//        subRef(pOldElem);

//        (*fieldIt) = pNewElem;
          _mfPort.replace(elemIdx, pNewElem);
    }
}

void WindowBase::subPort(UInt32 uiIndex)
{
    if(uiIndex < _mfPort.size())
    {
        editMField(PortFieldMask, _mfPort);

        MFViewportPtr::iterator fieldIt = _mfPort.begin();

        fieldIt += uiIndex;

        if(*fieldIt != NullFC)
        {
            (*fieldIt)->setParent(NullFC, PortFieldMask);
        }

        //subRef(*fieldIt);

        _mfPort.erase(fieldIt);
    }
}

void WindowBase::subPort(ViewportPtrConstArg value)
{
    Int32 iElemIdx = _mfPort.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(PortFieldMask, _mfPort);

        MFViewportPtr::iterator fieldIt = _mfPort.begin();

        fieldIt += iElemIdx;

        if(*fieldIt != NullFC)
        {
            (*fieldIt)->setParent(NullFC, PortFieldMask);
        }

        //subRef(*fieldIt);

        _mfPort.erase(fieldIt);
    }
}
void WindowBase::clearPorts(void)
{
    editMField(PortFieldMask, _mfPort);

    MFViewportPtr::iterator       fieldIt  = _mfPort.begin();
    MFViewportPtr::const_iterator fieldEnd = _mfPort.end  ();

    while(fieldIt != fieldEnd)
    {
        if(*fieldIt != NullFC)
        {
            (*fieldIt)->setParent(NullFC, PortFieldMask);
        }

        //subRef(*fieldIt);

        ++fieldIt;
    }

    _mfPort.clear();
}

/*********************************** Non-ptr code ********************************/
void WindowBase::pushToGlObjectLastRefresh(const UInt32& value)
{
    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);
    _mfGlObjectLastRefresh.push_back(value);
}

void WindowBase::insertIntoGlObjectLastRefresh(UInt32                uiIndex,
                                                   const UInt32& value   )
{
    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

    MFUInt32::iterator fieldIt = _mfGlObjectLastRefresh.begin();

    fieldIt += uiIndex;

    _mfGlObjectLastRefresh.insert(fieldIt, value);
}

void WindowBase::replaceInGlObjectLastRefresh(UInt32                uiIndex,
                                                       const UInt32& value   )
{
    if(uiIndex >= _mfGlObjectLastRefresh.size())
        return;

    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

    _mfGlObjectLastRefresh[uiIndex] = value;
}

void WindowBase::replaceInGlObjectLastRefresh(const UInt32& pOldElem,
                                                        const UInt32& pNewElem)
{
    Int32  elemIdx = _mfGlObjectLastRefresh.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

        MFUInt32::iterator fieldIt = _mfGlObjectLastRefresh.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void WindowBase::removeFromGlObjectLastRefresh(UInt32 uiIndex)
{
    if(uiIndex < _mfGlObjectLastRefresh.size())
    {
        editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

        MFUInt32::iterator fieldIt = _mfGlObjectLastRefresh.begin();

        fieldIt += uiIndex;
        _mfGlObjectLastRefresh.erase(fieldIt);
    }
}

void WindowBase::removeFromGlObjectLastRefresh(const UInt32& value)
{
    Int32 iElemIdx = _mfGlObjectLastRefresh.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

        MFUInt32::iterator fieldIt = _mfGlObjectLastRefresh.begin();

        fieldIt += iElemIdx;

        _mfGlObjectLastRefresh.erase(fieldIt);
    }
}

void WindowBase::clearGlObjectLastRefresh(void)
{
    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

    _mfGlObjectLastRefresh.clear();
}
/*********************************** Non-ptr code ********************************/
void WindowBase::pushToGlObjectLastReinitialize(const UInt32& value)
{
    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);
    _mfGlObjectLastReinitialize.push_back(value);
}

void WindowBase::insertIntoGlObjectLastReinitialize(UInt32                uiIndex,
                                                   const UInt32& value   )
{
    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

    MFUInt32::iterator fieldIt = _mfGlObjectLastReinitialize.begin();

    fieldIt += uiIndex;

    _mfGlObjectLastReinitialize.insert(fieldIt, value);
}

void WindowBase::replaceInGlObjectLastReinitialize(UInt32                uiIndex,
                                                       const UInt32& value   )
{
    if(uiIndex >= _mfGlObjectLastReinitialize.size())
        return;

    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

    _mfGlObjectLastReinitialize[uiIndex] = value;
}

void WindowBase::replaceInGlObjectLastReinitialize(const UInt32& pOldElem,
                                                        const UInt32& pNewElem)
{
    Int32  elemIdx = _mfGlObjectLastReinitialize.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

        MFUInt32::iterator fieldIt = _mfGlObjectLastReinitialize.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void WindowBase::removeFromGlObjectLastReinitialize(UInt32 uiIndex)
{
    if(uiIndex < _mfGlObjectLastReinitialize.size())
    {
        editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

        MFUInt32::iterator fieldIt = _mfGlObjectLastReinitialize.begin();

        fieldIt += uiIndex;
        _mfGlObjectLastReinitialize.erase(fieldIt);
    }
}

void WindowBase::removeFromGlObjectLastReinitialize(const UInt32& value)
{
    Int32 iElemIdx = _mfGlObjectLastReinitialize.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

        MFUInt32::iterator fieldIt = _mfGlObjectLastReinitialize.begin();

        fieldIt += iElemIdx;

        _mfGlObjectLastReinitialize.erase(fieldIt);
    }
}

void WindowBase::clearGlObjectLastReinitialize(void)
{
    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

    _mfGlObjectLastReinitialize.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 WindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (PortFieldMask & whichField))
    {
        returnValue += _mfPort.getBinSize();
    }
    if(FieldBits::NoField != (ResizePendingFieldMask & whichField))
    {
        returnValue += _sfResizePending.getBinSize();
    }
    if(FieldBits::NoField != (GlObjectEventCounterFieldMask & whichField))
    {
        returnValue += _sfGlObjectEventCounter.getBinSize();
    }
    if(FieldBits::NoField != (GlObjectLastRefreshFieldMask & whichField))
    {
        returnValue += _mfGlObjectLastRefresh.getBinSize();
    }
    if(FieldBits::NoField != (GlObjectLastReinitializeFieldMask & whichField))
    {
        returnValue += _mfGlObjectLastReinitialize.getBinSize();
    }
    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
    {
        returnValue += _sfDrawerId.getBinSize();
    }

    return returnValue;
}

void WindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PortFieldMask & whichField))
    {
        _mfPort.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ResizePendingFieldMask & whichField))
    {
        _sfResizePending.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GlObjectEventCounterFieldMask & whichField))
    {
        _sfGlObjectEventCounter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GlObjectLastRefreshFieldMask & whichField))
    {
        _mfGlObjectLastRefresh.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GlObjectLastReinitializeFieldMask & whichField))
    {
        _mfGlObjectLastReinitialize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
    {
        _sfDrawerId.copyToBin(pMem);
    }
}

void WindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PortFieldMask & whichField))
    {
        _mfPort.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ResizePendingFieldMask & whichField))
    {
        _sfResizePending.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GlObjectEventCounterFieldMask & whichField))
    {
        _sfGlObjectEventCounter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GlObjectLastRefreshFieldMask & whichField))
    {
        _mfGlObjectLastRefresh.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GlObjectLastReinitializeFieldMask & whichField))
    {
        _mfGlObjectLastReinitialize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
    {
        _sfDrawerId.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

WindowBase::WindowBase(void) :
    Inherited(),
    _sfWidth                  (),
    _sfHeight                 (),
    _mfPort                   (),
    _sfResizePending          (),
    _sfGlObjectEventCounter   (UInt32(1)),
    _mfGlObjectLastRefresh    (),
    _mfGlObjectLastReinitialize(),
    _sfDrawerId               ()
{
}

WindowBase::WindowBase(const WindowBase &source) :
    Inherited(source),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _mfPort                   (),
    _sfResizePending          (source._sfResizePending          ),
    _sfGlObjectEventCounter   (source._sfGlObjectEventCounter   ),
    _mfGlObjectLastRefresh    (source._mfGlObjectLastRefresh    ),
    _mfGlObjectLastReinitialize(source._mfGlObjectLastReinitialize),
    _sfDrawerId               (source._sfDrawerId               )
{
}


/*-------------------------- destructors ----------------------------------*/

WindowBase::~WindowBase(void)
{
}

void WindowBase::onCreate(const Window *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFViewportPtr::const_iterator PortIt  =
            source->_mfPort.begin();
        MFViewportPtr::const_iterator PortEnd =
            source->_mfPort.end  ();

        while(PortIt != PortEnd)
        {
            this->addPort(*PortIt);

            ++PortIt;
        }
    }
}

GetFieldHandlePtr WindowBase::getHandleWidth           (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfWidth, 
             this->getType().getFieldDesc(WidthFieldId)));

    return returnValue;
}

EditFieldHandlePtr WindowBase::editHandleWidth          (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfWidth, 
             this->getType().getFieldDesc(WidthFieldId)));

    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr WindowBase::getHandleHeight          (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfHeight, 
             this->getType().getFieldDesc(HeightFieldId)));

    return returnValue;
}

EditFieldHandlePtr WindowBase::editHandleHeight         (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfHeight, 
             this->getType().getFieldDesc(HeightFieldId)));

    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr WindowBase::getHandlePort            (void) const
{
    MFViewportPtr::GetHandlePtr returnValue(
        new  MFViewportPtr::GetHandle(
             &_mfPort, 
             this->getType().getFieldDesc(PortFieldId)));

    return returnValue;
}

EditFieldHandlePtr WindowBase::editHandlePort           (void)
{
    MFViewportPtr::EditHandlePtr returnValue(
        new  MFViewportPtr::EditHandle(
             &_mfPort, 
             this->getType().getFieldDesc(PortFieldId)));

    returnValue->setAddMethod(boost::bind(&Window::addPort, 
                              static_cast<Window *>(this), _1));

    editMField(PortFieldMask, _mfPort);

    return returnValue;
}

GetFieldHandlePtr WindowBase::getHandleResizePending   (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfResizePending, 
             this->getType().getFieldDesc(ResizePendingFieldId)));

    return returnValue;
}

EditFieldHandlePtr WindowBase::editHandleResizePending  (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfResizePending, 
             this->getType().getFieldDesc(ResizePendingFieldId)));

    editSField(ResizePendingFieldMask);

    return returnValue;
}

GetFieldHandlePtr WindowBase::getHandleGlObjectEventCounter (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGlObjectEventCounter, 
             this->getType().getFieldDesc(GlObjectEventCounterFieldId)));

    return returnValue;
}

EditFieldHandlePtr WindowBase::editHandleGlObjectEventCounter(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGlObjectEventCounter, 
             this->getType().getFieldDesc(GlObjectEventCounterFieldId)));

    editSField(GlObjectEventCounterFieldMask);

    return returnValue;
}

GetFieldHandlePtr WindowBase::getHandleGlObjectLastRefresh (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfGlObjectLastRefresh, 
             this->getType().getFieldDesc(GlObjectLastRefreshFieldId)));

    return returnValue;
}

EditFieldHandlePtr WindowBase::editHandleGlObjectLastRefresh(void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfGlObjectLastRefresh, 
             this->getType().getFieldDesc(GlObjectLastRefreshFieldId)));

    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

    return returnValue;
}

GetFieldHandlePtr WindowBase::getHandleGlObjectLastReinitialize (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfGlObjectLastReinitialize, 
             this->getType().getFieldDesc(GlObjectLastReinitializeFieldId)));

    return returnValue;
}

EditFieldHandlePtr WindowBase::editHandleGlObjectLastReinitialize(void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfGlObjectLastReinitialize, 
             this->getType().getFieldDesc(GlObjectLastReinitializeFieldId)));

    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

    return returnValue;
}

GetFieldHandlePtr WindowBase::getHandleDrawerId        (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfDrawerId, 
             this->getType().getFieldDesc(DrawerIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr WindowBase::editHandleDrawerId       (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfDrawerId, 
             this->getType().getFieldDesc(DrawerIdFieldId)));

    editSField(DrawerIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void WindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<WindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void WindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

    static_cast<Window *>(this)->clearPorts();
#ifdef OSG_MT_CPTR_ASPECT
    _mfGlObjectLastRefresh.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfGlObjectLastReinitialize.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<WindowPtr>::_type("WindowPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(WindowPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    WindowPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         WindowPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, WindowPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, WindowPtr, 0);

OSG_END_NAMESPACE
