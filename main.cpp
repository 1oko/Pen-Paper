#include <iostream>
#include "Pen.h"

int main() {
Pen pen;
Paper paper;

pen.write(paper, "Hello, world!");
paper.show();

    return 0;
}
