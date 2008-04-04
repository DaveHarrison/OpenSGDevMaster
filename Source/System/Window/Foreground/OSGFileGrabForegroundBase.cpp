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
 **     class FileGrabForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFILEGRABFOREGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGFileGrabForegroundBase.h"
#include "OSGFileGrabForeground.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FileGrabForeground
    \ingroup GrpSystemWindowForegrounds

    The FileGrabForeground is used for grabbing a frame or sequence of frames to
    disk.  See \ref
    PageSystemWindowForegroundGrabFile for a description.

    The name of the file(s) grabbed to are defined by the _sfName Field, the
    current frame number by _sfFrame. _sfIncrement can be used to automatically
    increment the frame number after each image is written. The whole grabber can
    be activated/deactivated using _sfActive.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     FileGrabForegroundBase::_sfName
    The filename template. %d is replaced by the frame number.
*/

/*! \var UInt32          FileGrabForegroundBase::_sfFrame
    The frame number to use.
*/

/*! \var bool            FileGrabForegroundBase::_sfIncrement
    Flag to start/stop automatic frame increments after each grab.
*/


void FileGrabForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "name",
        "The filename template. %d is replaced by the frame number.\n",
        NameFieldId, NameFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&FileGrabForegroundBase::editHandleName),
        static_cast<FieldGetMethodSig >(&FileGrabForegroundBase::getHandleName));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "frame",
        "The frame number to use.\n",
        FrameFieldId, FrameFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&FileGrabForegroundBase::editHandleFrame),
        static_cast<FieldGetMethodSig >(&FileGrabForegroundBase::getHandleFrame));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "increment",
        "Flag to start/stop automatic frame increments after each grab.\n",
        IncrementFieldId, IncrementFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&FileGrabForegroundBase::editHandleIncrement),
        static_cast<FieldGetMethodSig >(&FileGrabForegroundBase::getHandleIncrement));

    oType.addInitialDesc(pDesc);
}


FileGrabForegroundBase::TypeObject FileGrabForegroundBase::_type(
    FileGrabForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &FileGrabForegroundBase::createEmpty,
    FileGrabForeground::initMethod,
    FileGrabForeground::exitMethod,
    (InitalInsertDescFunc) &FileGrabForegroundBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FileGrabForeground\"\n"
    "\tparent=\"GrabForeground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The FileGrabForeground is used for grabbing a frame or sequence of frames to\n"
    "disk.  See \\ref\n"
    "PageSystemWindowForegroundGrabFile for a description.\n"
    "\n"
    "The name of the file(s) grabbed to are defined by the _sfName Field, the\n"
    "current frame number by _sfFrame. _sfIncrement can be used to automatically\n"
    "increment the frame number after each image is written. The whole grabber can\n"
    "be activated/deactivated using _sfActive.\n"
    "\t<Field\n"
    "\t\tname=\"name\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe filename template. %d is replaced by the frame number.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"frame\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe frame number to use.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"increment\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tFlag to start/stop automatic frame increments after each grab.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The FileGrabForeground is used for grabbing a frame or sequence of frames to\n"
    "disk.  See \\ref\n"
    "PageSystemWindowForegroundGrabFile for a description.\n"
    "\n"
    "The name of the file(s) grabbed to are defined by the _sfName Field, the\n"
    "current frame number by _sfFrame. _sfIncrement can be used to automatically\n"
    "increment the frame number after each image is written. The whole grabber can\n"
    "be activated/deactivated using _sfActive.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FileGrabForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &FileGrabForegroundBase::getType(void) const
{
    return _type;
}

UInt32 FileGrabForegroundBase::getContainerSize(void) const
{
    return sizeof(FileGrabForeground);
}

/*------------------------- decorator get ------------------------------*/


SFString *FileGrabForegroundBase::editSFName(void)
{
    editSField(NameFieldMask);

    return &_sfName;
}

const SFString *FileGrabForegroundBase::getSFName(void) const
{
    return &_sfName;
}

#ifdef OSG_1_GET_COMPAT
SFString            *FileGrabForegroundBase::getSFName           (void)
{
    return this->editSFName           ();
}
#endif

SFUInt32 *FileGrabForegroundBase::editSFFrame(void)
{
    editSField(FrameFieldMask);

    return &_sfFrame;
}

const SFUInt32 *FileGrabForegroundBase::getSFFrame(void) const
{
    return &_sfFrame;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *FileGrabForegroundBase::getSFFrame          (void)
{
    return this->editSFFrame          ();
}
#endif

SFBool *FileGrabForegroundBase::editSFIncrement(void)
{
    editSField(IncrementFieldMask);

    return &_sfIncrement;
}

const SFBool *FileGrabForegroundBase::getSFIncrement(void) const
{
    return &_sfIncrement;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *FileGrabForegroundBase::getSFIncrement      (void)
{
    return this->editSFIncrement      ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 FileGrabForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        returnValue += _sfFrame.getBinSize();
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        returnValue += _sfIncrement.getBinSize();
    }

    return returnValue;
}

void FileGrabForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        _sfFrame.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        _sfIncrement.copyToBin(pMem);
    }
}

void FileGrabForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        _sfFrame.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        _sfIncrement.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FileGrabForegroundPtr FileGrabForegroundBase::create(void)
{
    FileGrabForegroundPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<FileGrabForeground::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
FileGrabForegroundPtr FileGrabForegroundBase::createEmpty(void)
{
    FileGrabForegroundPtr returnValue;

    newPtr<FileGrabForeground>(returnValue);

    return returnValue;
}

FieldContainerPtr FileGrabForegroundBase::shallowCopy(void) const
{
    FileGrabForegroundPtr returnValue;

    newPtr(returnValue, dynamic_cast<const FileGrabForeground *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

FileGrabForegroundBase::FileGrabForegroundBase(void) :
    Inherited(),
    _sfName                   (),
    _sfFrame                  (UInt32(0)),
    _sfIncrement              (bool(true))
{
}

FileGrabForegroundBase::FileGrabForegroundBase(const FileGrabForegroundBase &source) :
    Inherited(source),
    _sfName                   (source._sfName                   ),
    _sfFrame                  (source._sfFrame                  ),
    _sfIncrement              (source._sfIncrement              )
{
}


/*-------------------------- destructors ----------------------------------*/

FileGrabForegroundBase::~FileGrabForegroundBase(void)
{
}


GetFieldHandlePtr FileGrabForegroundBase::getHandleName            (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfName, 
             this->getType().getFieldDesc(NameFieldId)));

    return returnValue;
}

EditFieldHandlePtr FileGrabForegroundBase::editHandleName           (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfName, 
             this->getType().getFieldDesc(NameFieldId)));

    editSField(NameFieldMask);

    return returnValue;
}

GetFieldHandlePtr FileGrabForegroundBase::getHandleFrame           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFrame, 
             this->getType().getFieldDesc(FrameFieldId)));

    return returnValue;
}

EditFieldHandlePtr FileGrabForegroundBase::editHandleFrame          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFrame, 
             this->getType().getFieldDesc(FrameFieldId)));

    editSField(FrameFieldMask);

    return returnValue;
}

GetFieldHandlePtr FileGrabForegroundBase::getHandleIncrement       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIncrement, 
             this->getType().getFieldDesc(IncrementFieldId)));

    return returnValue;
}

EditFieldHandlePtr FileGrabForegroundBase::editHandleIncrement      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIncrement, 
             this->getType().getFieldDesc(IncrementFieldId)));

    editSField(IncrementFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FileGrabForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FileGrabForegroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr FileGrabForegroundBase::createAspectCopy(void) const
{
    FileGrabForegroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FileGrabForeground *>(this));

    return returnValue;
}
#endif

void FileGrabForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FileGrabForegroundPtr>::_type("FileGrabForegroundPtr", "GrabForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FileGrabForegroundPtr)

OSG_SFIELDTYPE_INST(FieldContainerPtrSField, 
                    FileGrabForegroundPtr, 
                    RecordedRefCounts,
                    0);

OSG_FIELD_DLLEXPORT_DEF3(FieldContainerPtrSField, 
                         FileGrabForegroundPtr, 
                         RecordedRefCounts,
                         0);

OSG_MFIELDTYPE_INST(FieldContainerPtrMField, FileGrabForegroundPtr, 0);

OSG_FIELD_DLLEXPORT_DEF2(FieldContainerPtrMField, FileGrabForegroundPtr, 0);

OSG_END_NAMESPACE
