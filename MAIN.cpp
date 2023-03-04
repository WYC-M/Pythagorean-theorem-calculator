# include <iostream>
# include <math.h>
# include <stdlib.h>

int main()
{
    //输出/输出边长
    double a = 0;
    double b = 0;
    double c = 0;

    //输入/输出边长的平方
    double powa=0;
    double powb=0;
    double powc=0;

    //选项
    int input = 0;

    std::cout << "===========================================================" << std::endl;
    std::cout << "勾股定理计算器 Pythagorean theorem calculator v1.0 By WYC-M" << std::endl;
    std::cout << "===========================================================" << std::endl;
    std::cout << std::endl;

    std::cout << "1_已知a,b长,求c   2_已知a,c长,求b   3_已知b,c长,求a" << std::endl;
    std::cout << "请选择:";
    std::cin >> input;
    system("cls");

    std::cout << "===========================================================" << std::endl;
    std::cout << "勾股定理计算器 Pythagorean theorem calculator v1.0 By WYC-M" << std::endl;
    std::cout << "===========================================================" << std::endl;
    std::cout << std::endl;

    if (input == 1)
    {
        std::cout << "a=";
        std::cin >> a;
        std::cout << "b=";
        std::cin >> b;
        powa = pow(a, 2);
        powb = pow(b, 2);
        powc = powa + powb;
        c = sqrt(powc);
        std::cout << std::endl;
        std::cout << "在Rt△ABC中,依据勾股定理" << std::endl;
        std::cout << "c^2=a^2+b^2="
                  << a 
                  << "^2+"
                  << b 
                  << "^2="
                  << powa 
                  << "+"
                  << powb 
                  << "="
                  << powc
                  << std::endl;
        std::cout << "c=√("
                  << powc 
                  << ")="
                  << c 
                  << std::endl;
    }    
    
    if (input == 2)
    {
        std::cout << "a=";
        std::cin >> a;
        std::cout << "c=";
        std::cin >> c;
        powa = pow(a, 2);
        powc = pow(c, 2);
        powb = powc - powa;
        b = sqrt(powb);
        std::cout << std::endl;
        std::cout << "在Rt△ABC中,依据勾股定理" << std::endl;
        std::cout << "b^2=c^2-a^2="
                  << c 
                  << "^2-"
                  << a 
                  << "^2="
                  << powc 
                  << "-"
                  << powa 
                  << "="
                  << powb
                  << std::endl;
        std::cout << "b=√("
                  << powb
                  << ")="
                  << b 
                  << std::endl;
    }

    if (input == 3)
    {
        std::cout << "b=";
        std::cin >> b;
        std::cout << "c=";
        std::cin >> c;
        powb = pow(b, 2);
        powc = pow(c, 2);
        powa = powc - powb;
        a = sqrt(powa);
        std::cout << std::endl;
        std::cout << "在Rt△ABC中,依据勾股定理" << std::endl;
        std::cout << "a^2=c^2-b^2="
                  << c 
                  << "^2-"
                  << b
                  << "^2="
                  << powc 
                  << "-"
                  << powb 
                  << "="
                  << powa
                  << std::endl;
        std::cout << "a=√("
                  << powa
                  << ")="
                  << a 
                  << std::endl;
    }

    std::cout << std::endl;
    std::cout << "按回车键退出" << std::endl;
    std::cin.get();
    std::cin.get();
}