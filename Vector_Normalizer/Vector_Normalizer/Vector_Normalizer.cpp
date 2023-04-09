#include <iostream>


void Vector_Normalizer() {
	float x;
	float y;
	float z;
	std::cout << "Enter x value > " << std::endl;
	std::cin >> x;
	std::cout << "Enter y value > " << std::endl;
	std::cin >> y;
	std::cout << "Enter z value > " << std::endl;
	std::cin >> z;

	int power = 2;

	// finding magnitude using pythogarean theorum
	float magnitude = pow(x, 2) + pow(y, 2) + pow(z, 2);

	// float magnitude_val = magnitude;

	// find the square root of magnitude
	float magnitude_square_root = sqrt(magnitude);

	// normalizing vectors dividing by magnitude
	float x_normalize = x / magnitude_square_root;
	float y_normalized = y / magnitude_square_root;
	float z_normalized = z / magnitude_square_root;
	float magnitude_normalized = magnitude_square_root / magnitude_square_root;

	std::cout << " " << std::endl;
	std::cout << "Magnitude of the Vector > " << magnitude << std::endl;
	std::cout << "Square root of Magnitude > " << magnitude_square_root << std::endl;
	std::cout << " " << std::endl;

	std::cout << "x normalized > " << x_normalize << std::endl;
	std::cout << "y normalized > " << y_normalized << std::endl;
	std::cout << "z normalized > " << z_normalized << std::endl;
}