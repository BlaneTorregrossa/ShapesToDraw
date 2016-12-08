#pragma once

/*
-We need you to create a set of classes that represent 2D shapes that we can use for various reasons in our new game. 
-We need the following shapes available to us: Point, Rectangle, Circle, Line, Triangle
-All shapes need to have a common base class called: BaseShape.
-BaseShape needs to define a pure virtual function called: void DebugPrint.
-Each shape's implementation of DebugPrint should print out all of the attributes for the shape. (How that string is formatted is up to you.)
-Evreything else is up to you, what attributes each shape is made up of, how those attributes are accessed, etc.
*/


class BaseShape // Base class for the shape classes.
{
private:
	

public:
	virtual void DebugPrint() // A virtual void function that should print out all the attributes of the shapes.
	{
		
	}


};

// 1 point
class Point : BaseShape // Class Point inheriting from class BaseShape
{
private:


public:
	float ax = 0.00f, ay = 0.00f;

protected:

};

// 4 points
class Rectangle : BaseShape // Class Rectangle inheriting from class BaseShape
{
private:


public:
	float ax = 3.50f, ay = 5.00f;
	float bx = 1.50f, by = 5.00f;
	float cx = 3.50f, cy = 4.00f;
	float dx = 1.50f, dy = 4.00f;

protected:

};

class Circle : BaseShape // Class Circle inheriting from class BaseShape
{
private:


public:
	

protected:

};

// 2 points
class Line : BaseShape // Class Line inheriting from class BaseShape
{
private:


public:
	float ax = 2.00f, ay = -3.00f;
	float bx = 6.00f, by = -3.00f;
	

protected:

};

// 3 points
class Triangle : BaseShape // Class Triangle inheriting from class BaseShape
{
private:


public:
	float ax = -2.00f, ay = 5.00f;
	float bx = -3.00f, by = 2.00f;
	float cx = -1.00f, cy = 2.00f;



protected:

};
