#include <iostream>
#include <memory>
#include <vector>

template<class T>
class Flipper {
public:
	typedef std::shared_ptr<Flipper<T>> SharedFlipper;

	T& Get() {
		if (AIsFront) {
			return A;
		}
		else {
			return B;
		}
		return A;
	}

	T& GetFront() {
		if (AIsFront = true) {
			return A;
		}
		else {
			return B;
		}
		return AIsFront ? A : B;
	}
	
	T& GetBack() {
		if (AIsFront = false) {
			return B;
		}
		else {
			return A;
		}
		return AIsFront ? B : A;
	}

	bool SetAbsoluteAIsFront() {
		AIsFront = true;
		return true;
	}

	bool Flip() {
		AIsFront = !AIsFront;
		return AIsFront;
	}
	bool SetA(const T& In) {
		A = In;
		return true;
	}
	bool SetB(const T& In) {
		A = In;
		return true;
	}

	T& GetRevease() {
		if (AIsFront) {
			return B;
		}
		else {
			return A;
		}
		return AIsFront ? B : A;
	}

protected:
	T A = T{};// 1st flont is A.
	T B = T{};
	bool AIsFront = true;
};

int main() {
	Flipper<int> F;

	F.Get() = 100;
	F.Flip();
	F.Get() = 200;

	std::cout << F.Get() << std::endl;
	F.Flip();
	std::cout << F.Get() << std::endl;
	F.Flip();

	return 0;
}