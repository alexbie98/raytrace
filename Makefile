CXX =g++

r ?=1
ifeq (${r}, 1)
	CXXFLAGS =-std=c++17 -MMD -o3 #release
else
	CXXFLAGS =-std=c++17 -Wall -MMD -g # debug
endif

BUILDDIR = build
SRCDIR = src

OBJECTS = ${addprefix ${BUILDDIR}/, module/Module.o Main.o}
DEPENDS = ${OBJECTS:.o=.d}

rt: ${OBJECTS}
	${CXX} ${CXXFLAGS_DEBUG} ${OBJECTS} -o rt

${BUILDDIR}/%.o: ${SRCDIR}/%.cc
	@mkdir -p $(@D)
	${CXX} ${CXXFLAGS} -c -o $@ $<

-include ${DEPENDS}

.PHONY: clean

clean:
	rm -rf ${BUILDDIR} rt
