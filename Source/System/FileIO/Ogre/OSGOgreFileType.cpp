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

#include "OSGOgreFileType.h"
#include "OSGOgreMeshReader.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

const Char8        *OgreFileType::_suffixA[] = { "mesh" };
      OgreFileType  OgreFileType::_the(_suffixA,
                                       sizeof(_suffixA),
                                       false,
                                       10,
                                       OSG_READ_SUPPORTED);

const Char8 *
OgreFileType::getName(void) const
{
    return "Ogre Mesh";
}

NodeTransitPtr
OgreFileType::read(std::istream &is,
                   const Char8  *fileNameOrExtension,
                   Resolver      resolver            ) const
{
    NodeTransitPtr rootN;

    OgreOptions    options(this->getOptions());
    OgreMeshReader omr(is, options);
    omr.read();

    rootN = omr.getRoot();

    return rootN;
}

OgreFileType::OgreFileType(
    const Char8 *suffixArray[], UInt16 suffixByteCount,
    bool         override,      UInt32 overridePriority,
    UInt32       flags                                  )

    : Inherited(suffixArray, suffixByteCount,
                override, overridePriority, flags)
{
}

OgreFileType::~OgreFileType(void)
{
}

OSG_END_NAMESPACE
