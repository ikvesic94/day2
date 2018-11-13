#pragma once

class color {
private:
	double r;
	double g;
	double b;

public:
	color(double r = 0, double g = 0, double b = 0);
	color(const color& other);
	const double get_red() const;
	const double get_green() const ;
	const double get_blue() const;
	void set_red(const double r);
	void set_green(const double g);
	void set_blue(const double b);
	unsigned long get_color_ref() const;
	double get_luminance() const;

	bool operator==(const color& color1) const;
	color operator=(const color& c);

private:
	double set_color(double v) const;
	void set_rgb (double r, double g, double b);

};