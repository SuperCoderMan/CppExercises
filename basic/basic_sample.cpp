/*
*┌───────────────────────────────────────┐
*│ Project Name	:	CppExercises
*│ File Name		:	basic_sample.cpp
*│ Description		:	Example of basic programming with c++.
*│ Create Time		:	2020年6月5日17:17:07
*│ Version			:	Ver 0.0.0.1
*│ Author			:	Yu Mo (Email:286273384@qq.com)
*│ Modification 	:	Initial version.
*└───────────────────────────────────────┘
*
*┌───────────────────────────────────────┐
*│　            Copyright(C) 2020 Yu Mo. All rights reserved.  
*└───────────────────────────────────────┘
*/

#include "basic_sample.h" // Include library

using namespace std; // namespace

/*
*┌───────────────────────────────────────┐
*│ Function Name	:	calculateCircleArea                                  
*│ Description		:	Calculate area of the circle.
*│ Parameter		:	N/A
*│ Return			:	N/A
*│ Create Time		:	2020年6月5日17:19:03
*│ Author			:	Yu Mo (Email:286273384@qq.com)
*└───────────────────────────────────────┘
*/
void calculateCircleArea(void)
{
	// Declaration a constant variable
	const double PI = 3.15159;

	// Declaration of variable
	double radius;
	double area;

	// Assign value
	radius = 1.0; // Default value of radius
	area = 0.0;

	cout << "Enter a radius: ";
	// Reading input data from the keyboard.
	cin >> radius;
	// Compute area
	area = PI*radius*radius;

	// Display result
	cout << "The area is " << area << endl;
}