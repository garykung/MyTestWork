#pragma once

class Product
{
public:
	Product(void);
	~Product(void);
	void ProducePart();
};


class ProductPart
{ 
public: 
	ProductPart();
	~ProductPart();
	ProductPart* BuildPart();
};