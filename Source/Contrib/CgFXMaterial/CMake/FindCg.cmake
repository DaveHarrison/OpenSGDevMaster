# - Find Cg Toolkit
# Find the native Cg Toolkit includes and library
# This module defines
#  CG_INCLUDE_DIR, where to find cg.h, etc.
#  CG_LIBRARIES, the libraries needed to use Cg Toolkit.
#  CG_FOUND, If false, do not try to use Cg.
# also defined, but not for general use are
#  CG_LIBRARY, where to find the Cg Toolkit library.
##
# The following variables can be used to give CMake a hint where to find Cg:
# CG_ROOT
##

IF(APPLE)
    FIND_LIBRARY(CG_LIBRARY Cg
                 PATHS ${CG_ROOT} ENV CG_ROOT)
    MARK_AS_ADVANCED (CG_LIBRARY)
    SET(CG_LIBRARY_RELEASE ${CG_LIBRARY}/Cg)
    SET(CG_LIBRARY_DEBUG ${CG_LIBRARY}/Cg)
    SET(CG_GL_LIBRARY_RELEASE ${CG_LIBRARY}/Cg)
    SET(CG_GL_LIBRARY_DEBUG ${CG_LIBRARY}/Cg)
    SET(CG_INCLUDE_DIR ${CG_LIBRARY}/Headers)
    SET(CG_LIBRARIES_FOUND TRUE)
ELSE(APPLE)
    FIND_PATH(CG_INCLUDE_DIR Cg/cg.h
        PATHS ${CG_ROOT} ENV CG_ROOT
        PATH_SUFFIXES include)

    SET(CG_NAMES_RELEASE ${CG_NAMES_RELEASE} Cg)
    FIND_LIBRARY(CG_LIBRARY_RELEASE NAMES ${CG_NAMES_RELEASE}
        PATHS ${CG_ROOT} ENV CG_ROOT
        PATH_SUFFIXES lib64 lib.x64 lib)

    SET(CG_NAMES_DEBUG ${CG_NAMES_DEBUG} Cgd)
    FIND_LIBRARY(CG_LIBRARY_DEBUG NAMES ${CG_NAMES_DEBUG}
        PATHS ${CG_ROOT} ENV CG_ROOT
        PATH_SUFFIXES lib64 lib.x64 lib)

    SET(CG_GL_NAMES_RELEASE ${CG_GL_NAMES_RELEASE} CgGL)
    FIND_LIBRARY(CG_GL_LIBRARY_RELEASE NAMES ${CG_GL_NAMES_RELEASE}
        PATHS ${CG_ROOT} ENV CG_ROOT
        PATH_SUFFIXES lib64 lib.x64 lib)

    SET(CG_GL_NAMES_DEBUG ${CG_GL_NAMES_DEBUG} CgGLd)
    FIND_LIBRARY(CG_GL_LIBRARY_DEBUG NAMES ${CG_GL_NAMES_DEBUG}
        PATHS ${CG_ROOT} ENV CG_ROOT
        PATH_SUFFIXES lib64 lib.x64 lib)
ENDIF (APPLE)


IF(CG_LIBRARY_DEBUG AND CG_GL_LIBRARY_DEBUG)
    SET(CG_LIBRARIES_FOUND TRUE)
    MARK_AS_ADVANCED(CG_LIBRARY_DEBUG)
ENDIF(CG_LIBRARY_DEBUG AND CG_GL_LIBRARY_DEBUG)

IF(CG_LIBRARY_RELEASE AND CG_GL_LIBRARY_RELEASE)
    SET(CG_LIBRARIES_FOUND TRUE)
    MARK_AS_ADVANCED(CG_LIBRARY_RELEASE)
ENDIF(CG_LIBRARY_RELEASE AND CG_GL_LIBRARY_RELEASE)


# handle the QUIETLY and REQUIRED arguments and set CG_FOUND to TRUE if 
# all listed variables are TRUE
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(CG DEFAULT_MSG 
                                  CG_LIBRARIES_FOUND
                                  CG_INCLUDE_DIR)

