# Install script for directory: /Users/vkniaziev/Desktop/utag/taglib/taglib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/vkniaziev/.brew")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/vkniaziev/.brew/lib/libtag.a")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/vkniaziev/.brew/lib" TYPE STATIC_LIBRARY FILES "/Users/vkniaziev/Desktop/utag/build/taglib/taglib/libtag.a")
  if(EXISTS "$ENV{DESTDIR}/Users/vkniaziev/.brew/lib/libtag.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/Users/vkniaziev/.brew/lib/libtag.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}/Users/vkniaziev/.brew/lib/libtag.a")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/vkniaziev/.brew/include/taglib/tag.h;/Users/vkniaziev/.brew/include/taglib/fileref.h;/Users/vkniaziev/.brew/include/taglib/audioproperties.h;/Users/vkniaziev/.brew/include/taglib/taglib_export.h;/Users/vkniaziev/.brew/include/taglib/taglib_config.h;/Users/vkniaziev/.brew/include/taglib/taglib.h;/Users/vkniaziev/.brew/include/taglib/tstring.h;/Users/vkniaziev/.brew/include/taglib/tlist.h;/Users/vkniaziev/.brew/include/taglib/tlist.tcc;/Users/vkniaziev/.brew/include/taglib/tstringlist.h;/Users/vkniaziev/.brew/include/taglib/tbytevector.h;/Users/vkniaziev/.brew/include/taglib/tbytevectorlist.h;/Users/vkniaziev/.brew/include/taglib/tbytevectorstream.h;/Users/vkniaziev/.brew/include/taglib/tiostream.h;/Users/vkniaziev/.brew/include/taglib/tfile.h;/Users/vkniaziev/.brew/include/taglib/tfilestream.h;/Users/vkniaziev/.brew/include/taglib/tmap.h;/Users/vkniaziev/.brew/include/taglib/tmap.tcc;/Users/vkniaziev/.brew/include/taglib/tpropertymap.h;/Users/vkniaziev/.brew/include/taglib/trefcounter.h;/Users/vkniaziev/.brew/include/taglib/tdebuglistener.h;/Users/vkniaziev/.brew/include/taglib/mpegfile.h;/Users/vkniaziev/.brew/include/taglib/mpegproperties.h;/Users/vkniaziev/.brew/include/taglib/mpegheader.h;/Users/vkniaziev/.brew/include/taglib/xingheader.h;/Users/vkniaziev/.brew/include/taglib/id3v1tag.h;/Users/vkniaziev/.brew/include/taglib/id3v1genres.h;/Users/vkniaziev/.brew/include/taglib/id3v2.h;/Users/vkniaziev/.brew/include/taglib/id3v2extendedheader.h;/Users/vkniaziev/.brew/include/taglib/id3v2frame.h;/Users/vkniaziev/.brew/include/taglib/id3v2header.h;/Users/vkniaziev/.brew/include/taglib/id3v2synchdata.h;/Users/vkniaziev/.brew/include/taglib/id3v2footer.h;/Users/vkniaziev/.brew/include/taglib/id3v2framefactory.h;/Users/vkniaziev/.brew/include/taglib/id3v2tag.h;/Users/vkniaziev/.brew/include/taglib/attachedpictureframe.h;/Users/vkniaziev/.brew/include/taglib/commentsframe.h;/Users/vkniaziev/.brew/include/taglib/eventtimingcodesframe.h;/Users/vkniaziev/.brew/include/taglib/generalencapsulatedobjectframe.h;/Users/vkniaziev/.brew/include/taglib/ownershipframe.h;/Users/vkniaziev/.brew/include/taglib/popularimeterframe.h;/Users/vkniaziev/.brew/include/taglib/privateframe.h;/Users/vkniaziev/.brew/include/taglib/relativevolumeframe.h;/Users/vkniaziev/.brew/include/taglib/synchronizedlyricsframe.h;/Users/vkniaziev/.brew/include/taglib/textidentificationframe.h;/Users/vkniaziev/.brew/include/taglib/uniquefileidentifierframe.h;/Users/vkniaziev/.brew/include/taglib/unknownframe.h;/Users/vkniaziev/.brew/include/taglib/unsynchronizedlyricsframe.h;/Users/vkniaziev/.brew/include/taglib/urllinkframe.h;/Users/vkniaziev/.brew/include/taglib/chapterframe.h;/Users/vkniaziev/.brew/include/taglib/tableofcontentsframe.h;/Users/vkniaziev/.brew/include/taglib/podcastframe.h;/Users/vkniaziev/.brew/include/taglib/oggfile.h;/Users/vkniaziev/.brew/include/taglib/oggpage.h;/Users/vkniaziev/.brew/include/taglib/oggpageheader.h;/Users/vkniaziev/.brew/include/taglib/xiphcomment.h;/Users/vkniaziev/.brew/include/taglib/vorbisfile.h;/Users/vkniaziev/.brew/include/taglib/vorbisproperties.h;/Users/vkniaziev/.brew/include/taglib/oggflacfile.h;/Users/vkniaziev/.brew/include/taglib/speexfile.h;/Users/vkniaziev/.brew/include/taglib/speexproperties.h;/Users/vkniaziev/.brew/include/taglib/opusfile.h;/Users/vkniaziev/.brew/include/taglib/opusproperties.h;/Users/vkniaziev/.brew/include/taglib/flacfile.h;/Users/vkniaziev/.brew/include/taglib/flacpicture.h;/Users/vkniaziev/.brew/include/taglib/flacproperties.h;/Users/vkniaziev/.brew/include/taglib/flacmetadatablock.h;/Users/vkniaziev/.brew/include/taglib/apefile.h;/Users/vkniaziev/.brew/include/taglib/apeproperties.h;/Users/vkniaziev/.brew/include/taglib/apetag.h;/Users/vkniaziev/.brew/include/taglib/apefooter.h;/Users/vkniaziev/.brew/include/taglib/apeitem.h;/Users/vkniaziev/.brew/include/taglib/mpcfile.h;/Users/vkniaziev/.brew/include/taglib/mpcproperties.h;/Users/vkniaziev/.brew/include/taglib/wavpackfile.h;/Users/vkniaziev/.brew/include/taglib/wavpackproperties.h;/Users/vkniaziev/.brew/include/taglib/trueaudiofile.h;/Users/vkniaziev/.brew/include/taglib/trueaudioproperties.h;/Users/vkniaziev/.brew/include/taglib/rifffile.h;/Users/vkniaziev/.brew/include/taglib/aifffile.h;/Users/vkniaziev/.brew/include/taglib/aiffproperties.h;/Users/vkniaziev/.brew/include/taglib/wavfile.h;/Users/vkniaziev/.brew/include/taglib/wavproperties.h;/Users/vkniaziev/.brew/include/taglib/infotag.h;/Users/vkniaziev/.brew/include/taglib/asffile.h;/Users/vkniaziev/.brew/include/taglib/asfproperties.h;/Users/vkniaziev/.brew/include/taglib/asftag.h;/Users/vkniaziev/.brew/include/taglib/asfattribute.h;/Users/vkniaziev/.brew/include/taglib/asfpicture.h;/Users/vkniaziev/.brew/include/taglib/mp4file.h;/Users/vkniaziev/.brew/include/taglib/mp4atom.h;/Users/vkniaziev/.brew/include/taglib/mp4tag.h;/Users/vkniaziev/.brew/include/taglib/mp4item.h;/Users/vkniaziev/.brew/include/taglib/mp4properties.h;/Users/vkniaziev/.brew/include/taglib/mp4coverart.h;/Users/vkniaziev/.brew/include/taglib/modfilebase.h;/Users/vkniaziev/.brew/include/taglib/modfile.h;/Users/vkniaziev/.brew/include/taglib/modtag.h;/Users/vkniaziev/.brew/include/taglib/modproperties.h;/Users/vkniaziev/.brew/include/taglib/itfile.h;/Users/vkniaziev/.brew/include/taglib/itproperties.h;/Users/vkniaziev/.brew/include/taglib/s3mfile.h;/Users/vkniaziev/.brew/include/taglib/s3mproperties.h;/Users/vkniaziev/.brew/include/taglib/xmfile.h;/Users/vkniaziev/.brew/include/taglib/xmproperties.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/vkniaziev/.brew/include/taglib" TYPE FILE FILES
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/tag.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/fileref.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/audioproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/taglib_export.h"
    "/Users/vkniaziev/Desktop/utag/build/taglib/taglib/../taglib_config.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/taglib.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tstring.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tlist.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tlist.tcc"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tstringlist.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tbytevector.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tbytevectorlist.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tbytevectorstream.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tiostream.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tfilestream.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tmap.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tmap.tcc"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tpropertymap.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/trefcounter.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/toolkit/tdebuglistener.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/mpegfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/mpegproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/mpegheader.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/xingheader.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v1/id3v1tag.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v1/id3v1genres.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/id3v2.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/id3v2extendedheader.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/id3v2frame.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/id3v2header.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/id3v2synchdata.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/id3v2footer.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/id3v2framefactory.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/id3v2tag.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/attachedpictureframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/commentsframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/eventtimingcodesframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/generalencapsulatedobjectframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/ownershipframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/popularimeterframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/privateframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/relativevolumeframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/synchronizedlyricsframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/textidentificationframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/uniquefileidentifierframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/unknownframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/unsynchronizedlyricsframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/urllinkframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/chapterframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/tableofcontentsframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpeg/id3v2/frames/podcastframe.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/oggfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/oggpage.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/oggpageheader.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/xiphcomment.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/vorbis/vorbisfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/vorbis/vorbisproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/flac/oggflacfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/speex/speexfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/speex/speexproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/opus/opusfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ogg/opus/opusproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/flac/flacfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/flac/flacpicture.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/flac/flacproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/flac/flacmetadatablock.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ape/apefile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ape/apeproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ape/apetag.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ape/apefooter.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/ape/apeitem.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpc/mpcfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mpc/mpcproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/wavpack/wavpackfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/wavpack/wavpackproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/trueaudio/trueaudiofile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/trueaudio/trueaudioproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/riff/rifffile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/riff/aiff/aifffile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/riff/aiff/aiffproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/riff/wav/wavfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/riff/wav/wavproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/riff/wav/infotag.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/asf/asffile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/asf/asfproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/asf/asftag.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/asf/asfattribute.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/asf/asfpicture.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mp4/mp4file.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mp4/mp4atom.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mp4/mp4tag.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mp4/mp4item.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mp4/mp4properties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mp4/mp4coverart.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mod/modfilebase.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mod/modfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mod/modtag.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/mod/modproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/it/itfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/it/itproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/s3m/s3mfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/s3m/s3mproperties.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/xm/xmfile.h"
    "/Users/vkniaziev/Desktop/utag/taglib/taglib/xm/xmproperties.h"
    )
endif()

