#pragma once
#include "Matrix.h"
#include "Generator.h"
	
/**
* @brief Абстрактный класс для заданий
*/
class Exersizes
{
public:
	/**
	* @brief Виртуальный деструтор.
	*/
	virtual ~Exersizes() = 0;

	/**
	* @brief Виртуальный метод для первого задания
	*/
	virtual Matrix Exersize1() = 0;

	/**
	* @brief Виртуальный метод для второго задания
	*/
	virtual Matrix Exersize2() = 0;

};