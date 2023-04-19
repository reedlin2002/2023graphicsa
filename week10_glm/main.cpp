#include <GL/glut.h>
#include "glm.h" ///下載soruce.zip 有 glm.h 放 week10_glm目錄裡
///glm.c 改檔名成glm.cpp 放在week01_glm目錄裡
///把glm.cpp加入到專案裡
///把模型檔(ex. Al.obj Al.mtl...)複製到工作執行目錄
///Build log最後一行會說他在哪裡 (in C:\Users\....\freeglut\bin)
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
