// Copyright (C) 2003-2008 Dolphin Project.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2.0.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 2.0 for more details.

// A copy of the GPL 2.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/

// Official SVN repository and contact information can be found at
// http://code.google.com/p/dolphin-emu/

#ifndef __SETUP_h__
#define __SETUP_h__

////////////////////////////////////////////////////////////////////////////////////////
// File description
/* ŻŻŻŻŻŻŻŻŻŻŻŻ

   Compilation settings. I avoid placing this in Common.h or some place where lots of files needs
   to be rebuilt if any of these settings are changed. I'd rather have it in as few files as possible.
   This file can be kept on the ignore list in your SVN program. It allows local optional settings
   depending on what works on your computer.

////////////////////////*/

////////////////////////////////////////////////////////////////////////////////////////
// Settings
// ŻŻŻŻŻŻŻŻŻŻŻŻ

// This may remove sound artifacts in Wario Land Shake It and perhaps other games
//#define SETUP_AVOID_SOUND_ARTIFACTS

// This may fix a problem with Stop and Start that I described in the comments to revision 2,139
//#define SETUP_FREE_PLUGIN_ON_BOOT

// Use Stop when rendering to a child window
//#define SETUP_AVOID_CHILD_WINDOW_RENDERING_HANG

// Build with playback rerecording options
//#define RERECORDING

// Build with music modification
//#define MUSICMOD

///////////////////////////

#endif // __SETUP_h__