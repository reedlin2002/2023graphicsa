///Week11-2_keyboard_wav_PlaySound �{���ק��week11-1_keyboard
#include <windows.h> ///step01-2 ������
#include <GL/glut.h>
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard(unsigned char key, int x , int y)
{///step01-2���ѷs�Ъ�   step01-2�����ɥ��ε�����| �n�p��\\�N��1�Ӥϱ׽u
    if(key=='1')PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\do.wav", NULL, SND_ASYNC);
    if(key=='2')PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\re.wav", NULL, SND_ASYNC);
    if(key=='3')PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\mi.wav", NULL, SND_ASYNC);
    if(key=='4')PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\fa.wav", NULL, SND_ASYNC);
    if(key=='5')PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\so2442242412341355455345555555444434334.wav", NULL, SND_ASYNC);
}///ESC�N�|����
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week11");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}
