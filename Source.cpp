#include <iostream>
#include "NewType.h"

//i am not physics man.
//i am enginian egg.
//can you control it?

//�C���^�[�l�b�g�ɎQ�����悤�I�I

int main() {
	Gram<double> Apple(16.0);
	Velocity<double> a = SI_a<double>;

	std::cout << Apple * a << std::endl;

	return 0;

}