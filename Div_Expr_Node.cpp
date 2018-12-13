/* Honor Pledge
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 *
 */

#include "Div_Expr_Node.h"
#include <iostream>
Div_Expr_Node::Div_Expr_Node(void)
:Binary_Expr_Node(1,false)
{

}

Div_Expr_Node::~Div_Expr_Node(void)
{

}

int Div_Expr_Node::evaluate (int num1, int num2)const
{
	if(num2==0)
	{
		std::cout<<"Invalid number.";
		return 0;
	}
	else 
	{
		return num1 / num2;
	}
}

void Div_Expr_Node::set_left(Expr_Node* node)
{
	left_=node;
}

Expr_Node* Div_Expr_Node::get_left(void)
{
	return left_;
}

void Div_Expr_Node::set_right(Expr_Node* node)
{
	right_=node;
}

Expr_Node* Div_Expr_Node::get_right(void)
{
	return right_;
}

void Div_Expr_Node::accept(Expr_Node_Visitor & v)
{
	v.Visit_Div_Node(*this);
}

int Div_Expr_Node::get_precidence(void)
{
	return precidence_;
}

bool Div_Expr_Node::get_parenthesis(void)
{
	return parenthesis_;
}

void Div_Expr_Node::set_parenthesis(bool t)
{
	parenthesis_=t;
}
