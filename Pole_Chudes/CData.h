#pragma once
#ifndef CDATA_H
#define CDATA_H

namespace Pole_Chudes {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	 ref class CData
	{
	public:
		CData();
	public: static array<String^>^ arrayOfLines; //������ ��� �����
	public: static array<String^>^ arrayOfWnQ; //������ ��� ���� � ��������
	public: static array<String^>^ arrayOfWords; //������ ��� ����
	public: static array<String^>^ arrayOfQuestions; //������ ��� ��������
	public: static  String^ fileName; //��� �����

	public: static array<String^>^ getArrayOfWords() { //������� �������� ������� ����
		return arrayOfWords;
	}
	public: static array<String^>^ getArrayOfQuestions() { //������� �������� ������� ��������
		return arrayOfQuestions;
	}
	};

}
#endif // !CDATA_H
