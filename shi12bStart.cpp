#include "shi12bStart.h"
#include "chessBoard.h"
#include "leaderBoard.h"

using namespace shi12bAssignment2;

int main(array<System::String^>^args) {
	Application::EnableVisualStyles();
	Application::Run(gcnew shi12bStart());
	return 0;
}