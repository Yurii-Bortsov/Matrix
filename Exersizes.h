#pragma once
#include "Matrix.h"
#include "Generator.h"
	
/**
* @brief Абстрактный класс для заданий
*/
class ExersizeAbs
{
public:
	/**
	* @brief Виртуальный деструтор.
	*/
	virtual ~ExersizeAbs() = 0;

	/**
	* @brief Виртуальный метод для первого задания.
	*/
	virtual Matrix Exersize1() = 0;

	/**
	* @brief Виртуальный метод для второго задания
	*/
	virtual Matrix Exersize2() = 0;

};