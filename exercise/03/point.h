class point 
{
	int x;
	int y;

public:
	point(int x = 0, int y = 0);
	bool operator == (const point& other);
	bool operator!= (const point& other);
	bool operator< (const point& other);
};