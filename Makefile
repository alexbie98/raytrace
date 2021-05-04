CXX =g++

r ?=0
ifeq (${r}, 1)
	CXXFLAGS =-std=c++17 -MMD -o3 #release
else
	CXXFLAGS =-std=c++17 -Wall -MMD -g # debug
endif

INCLUDEDIR = include
SRCDIR = src
BUILDDIR = build

OBJECTS = ${addprefix ${BUILDDIR}/, Main.o Render.o geom/Intersect.o geom/Ops.o geom/Ray.o}
DEPENDS = ${OBJECTS:.o=.d}

rt: ${OBJECTS}
	${CXX} ${CXXFLAGS_DEBUG} ${OBJECTS} -o rt

${BUILDDIR}/%.o: ${SRCDIR}/%.cc
	@mkdir -p $(@D)
	${CXX} ${CXXFLAGS} -I${INCLUDEDIR} -c -o $@ $<

-include ${DEPENDS}

.PHONY: clean

clean:
	rm -rf ${BUILDDIR} rt
