#include <iostream>
#include <windows.h>

#define OCR_NORMAL 32512

int main()
{
	SetConsoleTitle("Hide cursor");
	std::cout << "Cursor is hidden. Press \"Enter\" to return it.\n";
	HCURSOR CurCursor = CopyCursor(LoadCursor(0, IDC_ARROW));
	HCURSOR CursorEmpty = LoadCursorFromFile("Empty.cur");
	SetSystemCursor(CursorEmpty, OCR_NORMAL);
	system("pause");
	SetSystemCursor(CurCursor, OCR_NORMAL);
}
