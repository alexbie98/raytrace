CXX =g++

r ?=0
ifeq (${r}, 1)
	CXXFLAGS =-std=c++17 -MMD -o3 #release
else
	CXXFLAGS =-std=c++17 -Wall -MMD -g # debug
endif

SRCDIR = src
BUILDDIR = build

OBJECTS = ${addprefix ${BUILDDIR}/, Main.o Render.o geom/Intersect.o geom/Ops.o geom/Ray.o primitive/Cube.o primitive/Sphere.o primitive/Triangle.o scene/Node.o scene/Scene.o scene/scenes/SimpleScene.o}
DEPENDS = ${OBJECTS:.o=.d}

rt: include ${OBJECTS}
	${CXX} ${CXXFLAGS_DEBUG} ${OBJECTS} -o rt

${BUILDDIR}/%.o: ${SRCDIR}/%.cc
	@mkdir -p $(@D)
	${CXX} ${CXXFLAGS} -Iinclude -Isrc -c -o $@ $<

include:
	@mkdir -p include
	wget https://github.com/g-truc/glm/releases/download/0.9.9.8/glm-0.9.9.8.zip
	unzip glm-0.9.9.8.zip
	mv glm/glm include/
	rm -rf glm-0.9.9.8.zip glm



-include ${DEPENDS}

.PHONY: clean

clean:
	rm -rf ${BUILDDIR} rt
