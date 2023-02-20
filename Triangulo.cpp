#include "Triangulo.h"

Triangulo::Triangulo(){}

void Triangulo::DibujarTriangulos(float x, float y, float z){
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glTranslatef(x,y,z);
    glVertex3f(-1, 0, 0);
    glVertex3f(0, 1, 0);
    glVertex3f(1, 0, 0);
    glEnd();
    glPopMatrix();
}
