// �̰�C++ �ǽ����� 1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "MyString.h"


int main()
{
	CMyString strData;
	strData.SetString("Hello");
	strData.SetString("World");
	cout << strData.GetString() << endl;

    return 0;
}

