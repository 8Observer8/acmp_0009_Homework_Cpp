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
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1812532608/CHomework.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/acmp_0009_homework_cpp.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/acmp_0009_homework_cpp.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/acmp_0009_homework_cpp ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/1812532608/CHomework.o: /D/Documents/NetBeansProjects/Cpp/Problems/acmp_0009_Homework_Cpp/CHomework.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1812532608
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1812532608/CHomework.o /D/Documents/NetBeansProjects/Cpp/Problems/acmp_0009_Homework_Cpp/CHomework.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f1: ${TESTDIR}/_ext/1319295534/newtestclass.o ${TESTDIR}/_ext/1319295534/newtestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/_ext/1319295534/newtestclass.o: /D/Documents/NetBeansProjects/Cpp/Problems/acmp_0009_Homework_Cpp/tests/newtestclass.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/1319295534
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/1319295534/newtestclass.o /D/Documents/NetBeansProjects/Cpp/Problems/acmp_0009_Homework_Cpp/tests/newtestclass.cpp


${TESTDIR}/_ext/1319295534/newtestrunner.o: /D/Documents/NetBeansProjects/Cpp/Problems/acmp_0009_Homework_Cpp/tests/newtestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/1319295534
	${RM} $@.d
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF $@.d -o ${TESTDIR}/_ext/1319295534/newtestrunner.o /D/Documents/NetBeansProjects/Cpp/Problems/acmp_0009_Homework_Cpp/tests/newtestrunner.cpp


${OBJECTDIR}/_ext/1812532608/CHomework_nomain.o: ${OBJECTDIR}/_ext/1812532608/CHomework.o /D/Documents/NetBeansProjects/Cpp/Problems/acmp_0009_Homework_Cpp/CHomework.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1812532608
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/1812532608/CHomework.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1812532608/CHomework_nomain.o /D/Documents/NetBeansProjects/Cpp/Problems/acmp_0009_Homework_Cpp/CHomework.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/1812532608/CHomework.o ${OBJECTDIR}/_ext/1812532608/CHomework_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} $@.d;\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF $@.d -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/acmp_0009_homework_cpp.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
