#ifndef op
#define op

class cal
{
private:
	int solution_Re;
	int solution_Im;

public:
	cal();

	int addition_Re(int val_Re, int val2_Re);

	int addition_Im(int val_Im, int val2_Im);

	int subtraction_Re(int val_Re, int val2_Re);

	int subtraction_Im(int val_Im, int val2_Im);

	int multiplication_Re(int val_Re, int val2_Re);

	int multiplication_Im(int val_Im, int val2_Im);

	int division_Re(int val_Re, int val2_Re);

	int division_Im(int val_Im, int val2_Im);
};

#endif;