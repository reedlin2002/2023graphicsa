#include <GL/glut.h>
float X=0, Y=0;
void display()
{
    glutSwapBuffers();
}

#include <stdio.h>
void mouse(int button, int state, int x ,int y)
{
    X = (x-250)/250.0;
    Y = -(y-250)/250.0;
    if(state==GLUT_DOWN)
    {
        printf("    glVertex2f(%.3f, %.3f);\n", X, Y);
    }
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();

}
