#include<iostream>//引入标准库的iostream头文件

using namespace std;

int main()
{
	//cout << "Hello World!!" << endl;//在命令行控件台输出“Hello World”
	//system("pause");//使控件台停留显示，如果没有这句代码，控件台显示后会马上消失
	//return 0;//返回值0表明成功，非0的返回值的含义由系统定义，通常用来指出错误类型

	/*
	若使用用命令行运行VS2015：cl D:\Workplace\Tmp\One.cpp, 
	其中“cl”指令所在的文件夹(D:\Programs\VS2015\VC\bin)要先加入环境变量,
	“D:\Workplace\Tmp\One.cpp”为源文件的绝对路径。
	*/

	/*
	“std::cout”中“::”为作用域运算符，由于我们一开始声明使用命名空间“std”，故可简写为“cout”。

	"endl"被称为操纵符表示结束一行输出，将缓冲区的内容刷新到设备中。打印输出时，要时刻记住刷新
	到设备，免得如果程序崩溃，输出可能还留在缓冲区中，导致我们对于程序崩溃位置的错误推断。

	“<<”为输出运算符，接收两个运算对象并返回左侧的值，左侧的运算对象必须是ostream对象，右侧是要打印的值，
	故“cout << "enter two numbers:" << endl;”相当于“cout << "enter two numbers:";cout << endl;”。

	“>>”为输入运算符，与“<<”类似。
	*/
	//cout << "enter two numbers:" << endl;
	//int i1 = 0, i2 = 0;
	//cin >> i1 >> i2;//分别输入两个数字让变量i1，i2接收(每输入一个数字按enter键结束)
	//cout << "sum is " << (i1 + i2) << endl;

	//int sum = 0, value = 0;
	//while (cin>>value)//如果输入的是整数则条件一直成立，反之或输入文件结束符(win下，先Ctrl+Z然后Enter或Return)结束循环
	//{
	//	sum += value;
	//	cout << "value is:" << value << ", sum is:" << sum << endl;
	//}
	//cout << "final sum is, " << sum<<endl;
	
	/*
	//统计输入的第一个数后，后面输入共出现了多少次
	int needCount = 0, receiveValue = 0;
	if (cin >> needCount)
	{
		cout << "need count number: " << needCount << endl;

		int count = 0;
		while (cin>>receiveValue)
		{
			if (needCount==receiveValue)
			{
				++count;
				cout << "count is " << count << endl;
			}
			else
			{
				cout << "new number is " << receiveValue << endl;
			}
		}


		cout << "final count result: " << count << endl;
	}
	else
	{
		cout << "process was terminated"<< endl;
	}
	*/

	//了解操作系统文件重定向功能，如“$ addItems <infile> outfile”，其中“$”为系统提示符，两文件均位于当前目录

	//“.”：点运算符，“()”：调用运算符，“::”：域运算符

	/*
	基本内置类型分为算术类型和空类型，算术类型包含字符、整型数、布尔值和浮点数，
	其中算术类型可以分为两大类：整型(包括字符和布尔类型)和浮点型。

	在大多数据计算机中，可寻址的最小内存块称为“字节(byte)”,存储的基本单元称为“字(word)”，通常一个字节由8个
	比特构成，字由32比特构成，也就是4个字节。

	除去布尔型和扩展的字符型之外，其它整型可以划分为带符号的(signed)和无符号的(unsigned)两种。带符号类型可以
	表示正数、0或负数，无符号类型仅能表示大于0的数。

	类型选择准则：
	1.当明确知晓数值不可能为负时，选用无符号类型。
	2.使用int执行整数运算。在实际运用中，short常常显示太小而long一般和int有一样的尺寸。如果数值超过int的表示范围，
	选用long long(C++11中新定义的)。
	3.在算术表达式中不要使用char或bool，只有在存放字符或布尔值时才使用它们。因为类型char在一些机器是有符号的，
	而在另一些机器上又是无符号的，所以如果使用char进行运算特别容易出现问题。
	4.执行浮点数运算选用double，因为float通常精度不够而且双精度浮点数和单精度浮点数的计算代价相关无几。事实上，
	对于某些机器来说，双精度运算甚至比单精度还快。
	*/

	/*
	类型转换：
	1.把一个非布尔类型的算术值赋给布尔类型时，初始值为0则结果为false，否则结果为true。
	2.把一个布尔值赋给非布尔类型时，初始值为false则结果为0，初始值为true则结果为1。
	3.把一个浮点数赋给整数类型时，进行了近似处理，结果值将仅保留浮点数小数点之前的部分。
	4.把一个整数赋给浮点类型时，小数部分记为0。如果该整数所占的空间超过了浮点类型的容量，精度可能有损失。
	*/
	bool var1 = 0,var2 = -5, var3 = 1;
	if (var1)
	{
		cout << "var1 = " << var1 << ", true" << endl;
	}
	else
	{
		cout << "var1 = " << var1 << ", false" << endl;
	}
	if (var2)
	{
		cout << "var2 = " << var2 << ", true" << endl;
	}
	else
	{
		cout << "var2 = " << var2 << ", false" << endl;
	}
	if (var3)
	{
		cout << "var3 = " << var3 << ", true" << endl;
	}
	else
	{
		cout << "var3 = " << var3 << ", false" << endl;
	}
	int intVar1 = false, intVar2 = true;
	cout << "intVar1 = " << intVar1 << ", intVar2 = " << intVar2 << endl;
	if (2)
	{
		cout << "2 2 2 2 2 2 " << endl;
		if (-2)
		{
			cout << "-2 -2 -2 -2 -2 -2 " << endl;
		}
	}
	if (0)
	{
		cout << "0 + + + + +" << endl;
	}
	else
	{
		cout << "0 - - - - -" << endl;
	}
	cout << "7/4 = " << 7 / 4 << ", 7/(-2) = " << 7 / (-2)
		<< ", 7%4 = " << 7 % 4 << ", 7%(-1) = " << 7 % (-2) 
		<< ", (-7)/2 = " << (-7) / 2 << ", (-1)%256 = " << (-1) % 256 
		<< ", charVar(-1) % 256 = " << (unsigned char)(-1) % 256 << endl;

	//unsigned char charVar = -1;
	//cout << "charVar(-1) % 256 = " << charVar%256 << endl;

	system("pause");
	return 0;
}