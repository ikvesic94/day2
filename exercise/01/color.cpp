#include "stdafx.h"
#include "color.h"



namespace 
{
	double set_color(double v)
	{
		if (v < 0)
		{
			return 0.;
		}
		else if (v > 1)
		{
			return 1.;
		}

		return v;
	}
}

color::color(double r, double g, double b)
{
	set_rgb(r, g, b);
}

void color::set_rgb(double r, double g, double b) 
{
	set_red(r);
	set_green(g);
	set_blue(b);
}

const double color::get_red()  const
{
	return r;
}

const double color::get_green() const
{
	return g;
}

const double color::get_blue() const
{
	return b;
}

void color::set_red(const double r) 
{ 
	this ->r = set_color(r);
}

void color::set_green(const double g) 
{
	this ->g = set_color(g);
}

void color::set_blue(const double b)
{
	this ->b = set_color(b);
}

unsigned long color::get_color_ref() const
{
	const double rgb_max_val = 255.0;
	return RGB((int)(r*rgb_max_val), (int)(g*rgb_max_val), (int)(b * rgb_max_val));
}

double color::get_luminance() const
{
	return r * 0.2126 + g * 0.7152 + b * 0.0722;
}

bool color::operator==(const color& other) const
{
	return (this->r == other.r && this->g == other.g && this->b == other.b);
}

color color::operator=(const color& c) 
{
	set_rgb(c.r, c.g, c.b);
	return *this;
}