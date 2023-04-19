#include <GL/glut.h>
#include "glm.h" ///�U��soruce.zip �� glm.h �� week10_glm�ؿ���
///glm.c ���ɦW��glm.cpp ��bweek01_glm�ؿ���
///��glm.cpp�[�J��M�׸�
///��ҫ���(ex. Al.obj Al.mtl...)�ƻs��u�@����ؿ�
///Build log�̫�@��|���L�b���� (in C:\Users\....\freeglut\bin)
GLMmodel * pmodel = NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    if(pmodel == NULL)
    {
        pmodel = glmReadOBJ("Al.obj");
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel,90);
    }
    glmDraw(pmodel,GLM_MATERIAL);

	glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("GLUT Shapes");
	glutDisplayFunc(display);
	glutMainLoop();
}
