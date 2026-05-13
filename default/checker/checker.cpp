#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerChecker("a", argc, argv);
	compareRemainingLines();
}
