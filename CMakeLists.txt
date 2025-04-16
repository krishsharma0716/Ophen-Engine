cmake_minimum_required(VERSION 3.29)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

include_directories(/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/System/Library/Frameworks/Metal.framework)
link_directories(/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/System/Library/Frameworks/Metal.framework)

include_directories(/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/System/Library/Frameworks/AppKit.framework)
link_directories(/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/System/Library/Frameworks/AppKit.framework)


add_executable(untitled main.cpp
        boardPieceRep.cpp
        boardPieceRep.h)
