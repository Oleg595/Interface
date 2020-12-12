#ifndef INTEFACE_H_INCLUDED
#define INTEFACE_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<commdlg.h>

HINSTANCE hInst;

enum PAINT_MODE{
    ORDINARY,
    LAYOUT,
    NODATA
};

struct Str_data_t{//���������, ������� ������ ����� ������� � ���������� �������� ������
    int start_str;
    int end_str;
};

struct data_t{
    char* str_data;//������ ���� ��������� ��������
    int cxChar, cyChar;//������� ��������
    int num_str;//���������� ��������� �����
    int num_layout_str;//���������� ����� � ������ ������
    struct Str_data_t* start_str;// ���������, �������� ������� ������ � ����� ������ ��������� ������
    int start_layout;//����������, �������� ������� ��� ������ ������ � ������ ������ ������������ ������� ������
    int iVscrollPos, iLayoutVscrollPos;//������� ������� � ������� ������ � ������ ������ �� ���������
    int iHscrollPos;//������� ������� �� �����������
    int cxClient, cyClient;//������� ����
    int iVscrollMax, iVscrollInc;//������������ �������� ��� ������� � �������� �������� ������� ��� ��������������� ��������� �� ���������
    int iHscrollMax, iHscrollInc;//������������ �������� ��� ������� � �������� �������� ������� ��� ��������������� ��������� �� �����������
    int iMaxWidth;//���������� ������ ������
    int Sc_pos;//����������, ������������, �� ������� ����� ����� ���������� ��� ��������� �� 1 ������
    enum PAINT_MODE p_m;//����������, � ������� ������������ ����� ���������: ������ ��� ������
};

int Layout_str(struct Str_data_t* start_str, int num_str, int size);/*�������, ��������� ���������� ����� � ������ ������. �� ���� ��������� ������ ��������
Str_data_t, � ������� ���������� ���������� � ������ � ����� ������ � ������� ������, ���������� ����� � ������� ������ � ������ ���� �� ��� x*/
int Scroll_Pos(struct Str_data_t* start_str, int scroll_pos, int size); /*�������, ������������ ��������� ������� ��� ������ ������. �� ���� ���������
������ �������� Str_data_t, � ������� ���������� ���������� � ����� � ������ ������, ��������� ������� ������������ �������� ������ � ������ ���� �� ��� x*/

#endif
