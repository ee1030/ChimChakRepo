// �̰�C++ �ǽ����� 1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "MyString.h"

void TestFunc(const CMyString &param)
{
	cout << param.GetString() << endl;
}

int main()
{
	CMyString strData;
	strData.SetString("Hello");
	cout << strData.GetString() << endl;

    return 0;
}

