#include<iostream>//�����׼���iostreamͷ�ļ�

using namespace std;

int main()
{
	//cout << "Hello World!!" << endl;//�������пؼ�̨�����Hello World��
	//system("pause");//ʹ�ؼ�̨ͣ����ʾ�����û�������룬�ؼ�̨��ʾ���������ʧ
	//return 0;//����ֵ0�����ɹ�����0�ķ���ֵ�ĺ�����ϵͳ���壬ͨ������ָ����������

	/*
	��ʹ��������������VS2015��cl D:\Workplace\Tmp\One.cpp, 
	���С�cl��ָ�����ڵ��ļ���(D:\Programs\VS2015\VC\bin)Ҫ�ȼ��뻷������,
	��D:\Workplace\Tmp\One.cpp��ΪԴ�ļ��ľ���·����
	*/

	/*
	��std::cout���С�::��Ϊ���������������������һ��ʼ����ʹ�������ռ䡰std�����ʿɼ�дΪ��cout����

	"endl"����Ϊ���ݷ���ʾ����һ���������������������ˢ�µ��豸�С���ӡ���ʱ��Ҫʱ�̼�סˢ��
	���豸�����������������������ܻ����ڻ������У��������Ƕ��ڳ������λ�õĴ����ƶϡ�

	��<<��Ϊ������������������������󲢷�������ֵ������������������ostream�����Ҳ���Ҫ��ӡ��ֵ��
	�ʡ�cout << "enter two numbers:" << endl;���൱�ڡ�cout << "enter two numbers:";cout << endl;����

	��>>��Ϊ������������롰<<�����ơ�
	*/
	//cout << "enter two numbers:" << endl;
	//int i1 = 0, i2 = 0;
	//cin >> i1 >> i2;//�ֱ��������������ñ���i1��i2����(ÿ����һ�����ְ�enter������)
	//cout << "sum is " << (i1 + i2) << endl;

	//int sum = 0, value = 0;
	//while (cin>>value)//��������������������һֱ��������֮�������ļ�������(win�£���Ctrl+ZȻ��Enter��Return)����ѭ��
	//{
	//	sum += value;
	//	cout << "value is:" << value << ", sum is:" << sum << endl;
	//}
	//cout << "final sum is, " << sum<<endl;
	
	/*
	//ͳ������ĵ�һ�����󣬺������빲�����˶��ٴ�
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

	//�˽����ϵͳ�ļ��ض����ܣ��硰$ addItems <infile> outfile�������С�$��Ϊϵͳ��ʾ�������ļ���λ�ڵ�ǰĿ¼

	//��.���������������()�����������������::�����������

	/*
	�����������ͷ�Ϊ�������ͺͿ����ͣ��������Ͱ����ַ���������������ֵ�͸�������
	�����������Ϳ��Է�Ϊ�����ࣺ����(�����ַ��Ͳ�������)�͸����͡�

	�ڴ�����ݼ�����У���Ѱַ����С�ڴ���Ϊ���ֽ�(byte)��,�洢�Ļ�����Ԫ��Ϊ����(word)����ͨ��һ���ֽ���8��
	���ع��ɣ�����32���ع��ɣ�Ҳ����4���ֽڡ�

	��ȥ�����ͺ���չ���ַ���֮�⣬�������Ϳ��Ի���Ϊ�����ŵ�(signed)���޷��ŵ�(unsigned)���֡����������Ϳ���
	��ʾ������0�������޷������ͽ��ܱ�ʾ����0������

	����ѡ��׼��
	1.����ȷ֪����ֵ������Ϊ��ʱ��ѡ���޷������͡�
	2.ʹ��intִ���������㡣��ʵ�������У�short������ʾ̫С��longһ���int��һ���ĳߴ硣�����ֵ����int�ı�ʾ��Χ��
	ѡ��long long(C++11���¶����)��
	3.���������ʽ�в�Ҫʹ��char��bool��ֻ���ڴ���ַ��򲼶�ֵʱ��ʹ�����ǡ���Ϊ����char��һЩ�������з��ŵģ�
	������һЩ�����������޷��ŵģ��������ʹ��char���������ر����׳������⡣
	4.ִ�и���������ѡ��double����Ϊfloatͨ�����Ȳ�������˫���ȸ������͵����ȸ������ļ����������޼�����ʵ�ϣ�
	����ĳЩ������˵��˫�������������ȵ����Ȼ��졣
	*/

	/*
	����ת����
	1.��һ���ǲ������͵�����ֵ������������ʱ����ʼֵΪ0����Ϊfalse��������Ϊtrue��
	2.��һ������ֵ�����ǲ�������ʱ����ʼֵΪfalse����Ϊ0����ʼֵΪtrue����Ϊ1��
	3.��һ��������������������ʱ�������˽��ƴ������ֵ��������������С����֮ǰ�Ĳ��֡�
	4.��һ������������������ʱ��С�����ּ�Ϊ0�������������ռ�Ŀռ䳬���˸������͵����������ȿ�������ʧ��
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