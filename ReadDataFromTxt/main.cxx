#include <iostream>
#include <stdio.h>
#include <fstream>

/*
从data.txt文件中，读取x, y, data.txt中的内容如下：
11 22
12 34
113 36
17 714
18 816

输出如下：
i read x: 11   and i read y: 22
i read x: 12   and i read y: 34
i read x: 113   and i read y: 36
i read x: 17   and i read y: 714
i read x: 18   and i read y: 816
*/

int main(int agrc, char *argv[])
{
    std::ifstream in(argv[1]);
    int count = 1;
    for (double d; in >> d; count++)
        if (count % 2 == 1)
            std::cout << "i read x: " << d;
        else
            std::cout << "   and i read y: " << d << std::endl;
    return 0;
}
