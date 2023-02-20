#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class cola
{
public:
	cola() {};
	void DibujarCola(float ANGULO, int n, float x, float y, float z);
};

