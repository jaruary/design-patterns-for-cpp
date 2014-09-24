#include "NYStyleClamPizza.h"

NYStyleClamPizza::NYStyleClamPizza(PizzaIngredientFactory *arg_ingredientFactory)
{
	this->setName();
	this->name = "NY Style " + this->pizzaType + " Pizza";
	this->setupIngredients(arg_ingredientFactory);
}

NYStyleClamPizza::~NYStyleClamPizza()
{

}

void NYStyleClamPizza::setName()
{
	this->pizzaType = "Clam";
}
