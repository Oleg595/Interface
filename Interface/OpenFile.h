#ifndef OPENFILE_H_INCLUDED
#define OPENFILE_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

static OPENFILENAME ofn;

void PopFileInitialize(HWND hwnd);/*�� ���� ����������� ��������� ����. ������� ��� ������������� ������ ����*/
BOOL PopFileOpenDlg(HWND hwnd, PSTR pstrFileName, PSTR pstrTitleName);/*�������, ���������� �� �������� ����������� ����. �� ���� ����������� ��������� ����
 � 2 ������� PSTR: ��������� �� ����� ������� ����� ����� � �� ����� ������ ����� �����*/

#endif // OPENFILE_H_INCLUDED
