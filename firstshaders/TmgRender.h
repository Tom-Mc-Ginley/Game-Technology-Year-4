#ifndef TmgRender_H
#define	TmgRender_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <Windows.h>
using namespace glm;

class TmgRender
{
public:
	void TMGRenderObject();
	bool createVboFromArray(vec3 vertexArray[], unsigned int size);
	void render();
	//GLuint Getvbo();

private:
	GLuint vbo;
	unsigned int numVerts;

	//float size;
};


#endif