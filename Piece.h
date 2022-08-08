//Declaration
#pragma once
class Piece
{
public:
	int x, y, pos_x, pos_y, size_x, size_y, num;
	Piece(int x, int y, int pos_x, int pos_y, int num);
	Piece();
	bool check_complete(int x, int y, int pos_x, int pos_y) {
		if (x = pos_x && y = pos_y)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
