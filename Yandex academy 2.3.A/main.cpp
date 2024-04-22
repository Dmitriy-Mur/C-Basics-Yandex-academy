#include <iostream>
using namespace std;

int main() {
    int start_vertical_pos;
    int start_horizontal_pos;
    int finish_vertical_pos;
    int finish_horizontal_pos;
    string answord = "NO";
    cin >> start_vertical_pos >> start_horizontal_pos >> finish_vertical_pos >> finish_horizontal_pos;
    if ((start_horizontal_pos == finish_horizontal_pos) or (start_vertical_pos == finish_vertical_pos))
        answord = "YES";
    int opposite_leg = max(start_vertical_pos, finish_vertical_pos) - min(start_vertical_pos, finish_vertical_pos);
    int adjacent_leg = max(start_horizontal_pos, finish_horizontal_pos) - min(start_horizontal_pos, finish_horizontal_pos);
    int tangent = 0;
    if (adjacent_leg != 0)
        tangent = opposite_leg / adjacent_leg;
    if (tangent == 1)
        answord = "YES";
    cout << answord;
    return 0;
}
