// do not use standard container as member or base class
class array
{
	double* p;
	int n;

private:
	void alloc_array(const int size);
public:
	array();
	array(const array& other);
	array(const int size, const double value);
	~array();
	int size() const;
	double at(const int i) const;

	bool operator==(const array& other) const;
	const array operator= (const array& other);
};
