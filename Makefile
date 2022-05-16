# Copyright (C) 2022 The uOFW team
# See the file COPYING for copying permission.

TARGET = vshbridge_msapp
OBJS = vshbridge_msapp.o

LIBS = -lModuleMgrForKernel -lSysclibForKernel -lThreadManForKernel -lsceSysEventForKernel -lSysMemForKernel -lIoFileMgrForKernel \
       -lsceImpose_driver -lsceMeCore_driver -lsceMSAudio_driver -lsceMgVideo_driver -lsceReg_driver

include ../../lib/build.mak
