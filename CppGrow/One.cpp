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

	system("pause");
	return 0;
}