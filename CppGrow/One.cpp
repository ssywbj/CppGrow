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

	system("pause");
	return 0;
}