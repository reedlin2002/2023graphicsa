///��CodeBlocks���}, ���n����±M�� File-New-Empty �ť��ɮצsweek11-3....cpp
///week11-3_PlaySound.cpp �i�O�L������� �]���䤣��PlaySoundA
///PlaySoundA() ���bwinmm�̭� �ҥH step02-1�n��ʧ�winmm �[�� lib�G�y��
///���OpenCV�n3�G�y, GLUT�n5�G�y, PlaySound�n1�G�y
///Setting-Compiler... �� Linker Settings �n�[�Wwinmm
#include <windows.h>

int main()
{                                                                    /// �n���ݦP�B SND_SYNC
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\do.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\re.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\mi.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\fa.wav", NULL, SND_SYNC);
    PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\so.wav", NULL, SND_SYNC);
}
