#include "cola.h"

void cola::DibujarCola(float ANGULO, int n, float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		//Aqui Reutilizo y motifico http://www.glprogramming.com/red/chapter03.html
		glPushMatrix();
		glTranslatef(-0.25, 0.0, 0.0);
		glRotatef(ANGULO, 0.0, 0.0, 1.0);
		glTranslatef(0.25, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.5, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();

		for (int i = 0; i < n; i++) {
			glTranslatef(0.25, 0.0, 0.0);
			glRotatef(ANGULO, 0.0, 0.0, 1.0);
			glTranslatef(0.25, 0.0, 0.0);
			glPushMatrix();
			glScalef(0.5, 0.4, 1.0);
			glutSolidCube(1.0);
			glPopMatrix();
		}

		glPopMatrix();

	glPopMatrix();

}
