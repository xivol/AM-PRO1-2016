//
// ������������ ������ �13. ������������ ��������� ������. ������
// tlist.h
//
#pragma once

// ���� ������:
//     tlist::datatype - ��� ������ ������;
//     data - �������� � ���� ������;
//     next - ��������� �� ��������� �������.
struct tlist
{
    typedef int datatype;
    datatype data;
    tlist *next;
};

// ������� �������� ������.
// ������ �������� � �������.
// ������� ���������:
//     length - ���������� ��������� ������.
// ���������� ��������� �� ������ ������� ������.
tlist *get_list(const size_t length);

// ������� �������� ������.
// ������ �������� �� �����.
// ������� ���������:
//     filename - ��� ����� ������.
// ���������� ��������� �� ������ ������� ������.
// � ������, ���� �� ������ �������� ������ � �����
// ����������� ���������� char*.
tlist *get_list(const char *filename);

// ������� �������� ������.
// ������� ���������:
//     begin - ��������� �� ������ ������.
// �������� �������� ��������� begin ����� nullptr.
void delete_list(tlist *&begin);

// ������� ������ ������ �� �������.
// ������� ���������:
//     begin - ��������� �� ������ ������.
void print_list(const tlist *begin);

// ������� ������ ��������.
// ������� ���������:
//     begin - ��������� �� ������ ������;
//     x - ������� ��������.
// ���������� ��������� �� ������ ������� � �������� ��������� ���
// nullptr, ���� �������� � ����� �������� � ������ ���.
tlist *find(const tlist *begin, const tlist::datatype x);