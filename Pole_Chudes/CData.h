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
	public: static array<String^>^ arrayOfLines; //массив для строк
	public: static array<String^>^ arrayOfWnQ; //массив для слов и вопросов
	public: static array<String^>^ arrayOfWords; //массив для слов
	public: static array<String^>^ arrayOfQuestions; //массив для вопросов
	public: static  String^ fileName; //имя файла

	public: static array<String^>^ getArrayOfWords() { //функция возврата массива слов
		return arrayOfWords;
	}
	public: static array<String^>^ getArrayOfQuestions() { //функция возврата массива вопросов
		return arrayOfQuestions;
	}
	};

}
#endif // !CDATA_H
