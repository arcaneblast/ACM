#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/00100uva.o \
	${OBJECTDIR}/00382uva.o \
	${OBJECTDIR}/00843uva.o \
	${OBJECTDIR}/01225uva.o \
	${OBJECTDIR}/10035uva.o \
	${OBJECTDIR}/10281uva.o \
	${OBJECTDIR}/10346uva.o \
	${OBJECTDIR}/10773uva.o \
	${OBJECTDIR}/11614uva.o \
	${OBJECTDIR}/11661uva.o \
	${OBJECTDIR}/11805uva.o \
	${OBJECTDIR}/11875uva.o \
	${OBJECTDIR}/12149uva.o \
	${OBJECTDIR}/12502uva.o \
	${OBJECTDIR}/155ahmadaly.o \
	${OBJECTDIR}/157ahmadaly.o \
	${OBJECTDIR}/158ahmadaly.o \
	${OBJECTDIR}/165ahmadaly.o \
	${OBJECTDIR}/167ahmadaly.o \
	${OBJECTDIR}/173ahmadaly.o \
	${OBJECTDIR}/179ahmadaly.o \
	${OBJECTDIR}/24ahmadaly.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/acm

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/acm: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/acm ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/00100uva.o: 00100uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/00100uva.o 00100uva.cpp

${OBJECTDIR}/00382uva.o: 00382uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/00382uva.o 00382uva.cpp

${OBJECTDIR}/00843uva.o: 00843uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/00843uva.o 00843uva.cpp

${OBJECTDIR}/01225uva.o: 01225uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/01225uva.o 01225uva.cpp

${OBJECTDIR}/10035uva.o: 10035uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/10035uva.o 10035uva.cpp

${OBJECTDIR}/10281uva.o: 10281uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/10281uva.o 10281uva.cpp

${OBJECTDIR}/10346uva.o: 10346uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/10346uva.o 10346uva.cpp

${OBJECTDIR}/10773uva.o: 10773uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/10773uva.o 10773uva.cpp

${OBJECTDIR}/11614uva.o: 11614uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/11614uva.o 11614uva.cpp

${OBJECTDIR}/11661uva.o: 11661uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/11661uva.o 11661uva.cpp

${OBJECTDIR}/11805uva.o: 11805uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/11805uva.o 11805uva.cpp

${OBJECTDIR}/11875uva.o: 11875uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/11875uva.o 11875uva.cpp

${OBJECTDIR}/12149uva.o: 12149uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/12149uva.o 12149uva.cpp

${OBJECTDIR}/12502uva.o: 12502uva.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/12502uva.o 12502uva.cpp

${OBJECTDIR}/155ahmadaly.o: 155ahmadaly.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/155ahmadaly.o 155ahmadaly.cpp

${OBJECTDIR}/157ahmadaly.o: 157ahmadaly.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/157ahmadaly.o 157ahmadaly.cpp

${OBJECTDIR}/158ahmadaly.o: 158ahmadaly.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/158ahmadaly.o 158ahmadaly.cpp

${OBJECTDIR}/165ahmadaly.o: 165ahmadaly.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/165ahmadaly.o 165ahmadaly.cpp

${OBJECTDIR}/167ahmadaly.o: 167ahmadaly.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/167ahmadaly.o 167ahmadaly.cpp

${OBJECTDIR}/173ahmadaly.o: 173ahmadaly.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/173ahmadaly.o 173ahmadaly.cpp

${OBJECTDIR}/179ahmadaly.o: 179ahmadaly.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/179ahmadaly.o 179ahmadaly.cpp

${OBJECTDIR}/24ahmadaly.o: 24ahmadaly.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/24ahmadaly.o 24ahmadaly.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/acm

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
