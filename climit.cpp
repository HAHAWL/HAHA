/*//3.1 limit
#include<climits>
#include<iostream>
using namespace std;
int main()
{

	int n_int = INT_MAX;
    short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int is " << sizeof (int) << endl;//对变量使用时，括号为可选的。对类型使用，一定有括号
	cout << "short is " << sizeof n_short << endl;
	cout << "long is " << sizeof n_long << endl;
	cout << "long long " << sizeof n_llong << endl;

	cout << "max values" << endl;
	cout << "int=" << n_int << endl;
	cout << "short =" << n_short << endl;
cout << "long=" << n_long << endl;
	cout << "long long=" << n_llong << endl;
	cout << endl;
	cout << "minimun int=" << INT_MIN << endl;
	cout <<" Bite per bit ="<< CHAR_BIT;



}
*/

//3.2
/*#include<iostream>
#define ZERO 0
#include<climits>
int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "sam has " << sam << "dollars" << endl;
	cout << "sum has " << sue << "dollars" << endl;
	sam = sam+1;
	sue = sue+1;
	cout << "sam has " << sam << "dollars" << endl;
	cout << "sum has " << sue << "dollars" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "sam has " << sam << "dollars" << endl;
	cout << "sum has " << sue << "dollars" << endl;
	sam =-1;
	sue =-1;
	cout << "sam has " << sam << "dollars" << endl;
	cout << "sum has " << sue << "dollars" << endl;
}
*/
//3.3
/*#include<iostream>
int main()
{
	using namespace std;
	int ten = 42;
	int eight = 042;
	int six = 0x42;
	cout << ten << endl;
	cout << hex;
	cout << eight << endl;
	cout << six << endl;//相当于修改了以下所有cout的输出进制dec十进制，hex十六进制，oct八进制；
	cout << eight << endl;
	cout << six << endl;

}
*/
//3.4
/*
#include<iostream>
int main()
{
	using namespace std;
	char ch = 'M';
	int i;
	i = ch;
	cout << ch <<" "<< i << endl;
	ch = ch+1;
	i = ch;
	cout << ch <<" "<< i;
	//cout可以根据不同的字符类型更改输出值，char可以跟整形互通
	cout.put(ch);
	//cout.put(" ");似乎不可以
	cout.put('!');
	cout << endl;
	cout << 'm';
	

}   


*/
//3.8
/*
#include<iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);//体现float和double之间精度的差异，
	float tub = 10.0 / 3.0;
	double ttub = 10.0 / 3.0;
	const float million = 1000000;
	cout << "tub = " << tub << endl;
	cout << "ttub= " << ttub << endl;
	cout << "million*tub=" << million * tub << endl;
	cout << "million*ttub=" << million * ttub << endl;
	cout << "ten*million*tub" << 10 * million * tub << endl;

}
*/

//3.9
/*#include<iostream>
int main()
{
	using namespace std;
	float a = 2.34e+7f;
	float b = a + 1.0f;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "b-a=" << b - a << endl;//说明float只能表示六或七位，大于这给位数会被省略；





}

*/
/*#include<iostream>
int main()
{
	using namespace std;
	float hats, heads;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "enter a number";
	cin >> hats;
	cout << "enter a number";
	cin >>heads;


	cout << "hat=" << hats << " heads=" << heads<<endl;
	cout << "hats+heads=" << hats + heads << endl;
	cout << "hats - heads=" << hats - heads << endl;
	cout << "hats*heads=" << hats * heads << endl;//模的运算是算余数
	cout << "hats/heads=" << hats / heads;



}
*/
//3.11除法的分支
/*#include<iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "intenger division 9/5=" << 9 / 5 << endl;
	cout << "floating_point division 9.0/5.0=" << 9.0 / 5.0 << endl;
	cout << "mixied division 9.0/5=" << 9.0 / 5 << endl;
	cout << "doubel constant:3.e7/9.0=" << 1.e7 / 9.0 << endl;
	cout << "float constant 3.e7f/9.0f=" << 1.e7f / 9.0f;//浮点数的精度问题



}

*/
//3.12
/*
#include<iostream>
int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int Lbs;
	cout << "Enter your weignt in LBS";
	cin >> Lbs;
	int stn = Lbs / Lbs_per_stn;
	int pounds = Lbs % Lbs_per_stn;
	cout << "your weight =" << stn << "stn " << pounds<< "pound";



}
*/
//3.13 数值转化问题
/*#include<iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess(3.9832);
	int debt = 7.2e12;
	cout << "tree= " << tree << endl;
	cout << "guess=" << guess << endl;
	cout << "debt= " << debt << endl;

}
*/
//强转的几种类型及应用
/*#include<iostream>
int main()
{
	using namespace std;
	int auks, hats;
	auks = 19.99 + 11.99;//adds the values as double,then convert to int 
	cout << "auks=" << auks << endl;
 
	hats = (int)19.99 + int(11.99);
	cout << "hats =" << hats << endl;
	char ch = 'x';
	cout << "the code for " << ch << " is ";
	cout << int(ch)<<endl;
	cout << "the code for " << ch << " is " << static_cast<int>(ch) << endl;
}
*/
//4.1  数组的声明及设置
/*#include<iostream>
int main()
{
	using namespace std;
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	int yamscosts[3] = { 20,30,5 };
	cout << "total yams=" << yams[0] + yams[1] + yams[2]<< endl;
	cout << "\nsize of yams array=" << sizeof yams<<"byte\n";
	cout << "size of one element=" << sizeof yams[0];
	}
*/
/*#include<iostream>
int main()
{
	using namespace std;
	string xinmin;
	cout << "请输入你的姓名";
	cin >> xinmin;
	cout << xinmin<< "是个傻子";
}
*/


//4.2 字符串的秘密
/*
#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	char name2[Size]="C++owboy";
	cout << "Howdy! I 'am" << name2;
	cout << "What your name?\n";
	cin >> name1;
	cout << "well " << name1 << "your name has";
	cout << strlen(name1) << "letters and stored\n";
	cout << "in an array of " << sizeof(name1) << "byte.\n";
	cout << "your initial is" << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "here are the first 3 characters of my name : ";
	cout << name2 << endl;


}
*/
//4.3字符串的输入
//面向字符
/*#include<iostream>
int main()
{
	using namespace std;
	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];
	cout << "Enter your name: \n";
	cin.getline(name, Arsize);
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, Arsize);
	cout << "I have some delicious " << dessert;
	cout << " for you," << name << ".\n";

}
*/
//面向行
/*
cin.get(sdfas,sdffsdfas)
cin.get.()
cin.get(asf,ojfo)
*/
/*#include<iostream>
int main()
{
	using namespace std;
	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];
	cout << "Enter your name: \n";
	cin.get(name, Arsize);
	cout << "Enter your favorite dessert:\n";
	cin.get();
	cin.get(dessert, Arsize);
	cout << "I have some delicious " << dessert;
	cout << " for you," << name << ".\n";

}
*/
/*cin.get(sdsd, sdfa).get()*/
/*#include<iostream>
int main()
{
	using namespace std;
	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];
	cout << "Enter your name: \n";
	cin.get(name, Arsize).get();
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, Arsize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you," << name << ".\n";

}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cout << "What is it street address?\n";
	char address[80];
	cin.get();
	cin.getline(address, 80);
	cout << "year built:" << year << endl;
	cout << "address: " << address << endl;
	cout << "done!\n";


}
*/
//string类和字符数组区别
/*#include<iostream>
int main()
{
	using namespace std;
	char charri1[20];
	char charri2[20]="jaguar";
	string str1;
	string str2="panther";
	cout << "Enter a kind of feline";
	cin >> charri1;
	cout << "Enter another feline";
	cin >> str1;
	cout << "Here are some feline:\n";
	cout << charri1 << " " << charri2 << " " << str1 << " " << str2 << endl;
	cout << "the third letter in " << charri1 << " is " << charri1[2] << endl;
	cout <<"the third letter in " << str2 << " is " << str2[2] << endl;


}
*/
//4.8 string的一些常规操作

/*#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;
	cout << "you can assign one string object to another :s2=s1\n";
	s2 = s1;//string作为变量能进行值的赋予
	cout << "s1: " << s1 << ",s2: " << s2 << endl;
	s3 = s1 + s2;//string作为变量能进行拼接
	cout << "s3: " << s3 << endl;
	cout << "you can append strings.\n";//用string变量进行加减
	s1 += s2;
	cout << "s1=+s2 yield s1= " << s1<< endl;
	s2 += "for a day";
	cout << "s2+=\"for a day\"yield s2= " << s2<<endl;
}
*/
//4.9 没发明string之前对于字符串的应用（strcpy,strcat)
/*
#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charri1[20];
	char charri2[20]="jaguar";
	string str1;
	string str2 = "panther";
	str1 = str2;
	strcpy(charri1, charri2);
	str1 += "pause";
	strcat(charri1, "juice");
	cout << "the string " << str1 << " contain " << str1.size() << " characters.\n";
	cout << "the string " << charri1 << " contain " << strlen(charri1) << " characters.\n";
}
*/
//4.10 探究cin和cout行为单位问题

/*#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr[20];
	string str;
	cout << "The length of string in charr befor input ";
	cout << strlen(charr) << endl;
	cout << "str length of string in str before input"<<str.size()<<endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);
	cout << "you enter : " << charr << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str);
	cout << "you entered: " << str << endl;
	cout << "The length of string in charr after input";
	cout << strlen(charr) << endl;
	cout << "str length of string in str after input" << str.size() << endl;
	cout << "Enter a line of text:\n";
}
*/
//结构的使用4.11
/*#include<iostream>
struct jiandan
{
	char name[20];
	float volumn;
	double price;
};
int main()
{
	using namespace std;
	jiandan guest =
	{
		"gloriousb gloria",
		1.88,
		29.99
	};
	jiandan pal =
	{
		"audacious arthur",
		3.12,
		32.99

	};
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "you can have both for $";
	cout << guest.price + pal.price << "!\n";

}
*/
//4.12    结构的正常赋值
/*#include<iostream>
struct cnan
{
	char name[20];
	float volumn;
	double price;
};

int main()
{
	using namespace std;
	cnan type1{ "sunflowers",0.20,12.49};
	cnan type2;
	cout << "type1 " << type1.name << " for$ " << type1.price<<endl;
	type2 = type1;
	cout << "type2 " << type2.name << " for$ " << type2.price;


}

*/
//结构数组的运用
/*
#include<iostream>
struct cnan
{
	char name[20];
	float volumn;
	double price;
};
int main()
{
	using namespace std;
cnan shi[2]
{
	{"bambi",0.5,21.99},
	{"Godzilla",2000,565.99}
};
cout << "the guest " << shi[0].name << " and " << shi[1].name;
}
*/
//4.15 新策略，硬币的新旧两面
/*
#include<iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int *p_updates;
	p_updates = &updates;
	cout << "value :updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	cout << "address :&updates = " << &updates;
	cout << ", p_updates= " << p_updates << endl;
	*p_updates = *p_updates + 1;
	cout << "now updates = " << updates << endl;


}
*/
//4.16 声明一个指针变量
/*#include<iostream>
int main()
{
	using namespace std;
	int hig = 5;
	int* h_hig = &hig;//为什么将一个地址赋予个一个值
	cout << "value of hig = " << hig << ";Address of hig = " << &hig << endl;
	cout << "Value of *h_hig = " << *h_hig << endl;
}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	int night = 1001;
	int* pt = new int;
	*pt = 1001;
	cout << "nignts value = ";
	cout << night << " : location " << &night << endl;
	cout << "int ";
	cout << "value = " << *pt << " : location = " << pt << endl;
	double* pd = new double;
	*pd = 1000001.0;
	cout << "double";
	cout << "value = " << *pd << " : location = " << pd << endl;
	cout << "location of pointer pd : " << &pd;//指针的地址是个有意思的东西
	cout << "size of pt = " << sizeof(pt);
	cout << " size of *pt = " << sizeof(*pt) << endl;//如何表示内存长度是个问题
	cout << "size of pd = " << sizeof pd;
	cout << " size of *pd = " << sizeof(*pd);
}
*/
//4.18指针和动态数组的关系
/*
#include<iostream>
int main()
{
	using namespace std;
	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;
	cout << "now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;
	delete[] p3;// 释放内存为什么要归位，为什么加一个一就可以归位；


}
*/
//4.19指针算术
/*
#include<iostream>
int main()
{
	using namespace std;
	double wages[3]{ 100000.0,20000.0,30000.0 };
	short stack[3] = { 3,2,1 };
	double* pw = wages;
	short* ps = &stack[0];//不理解为什么这样
	cout << "pw = " << pw << ", *pw = " << *pw << endl;// 数组时代表很多值，此有问题
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << " ps= " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;//指针加一,  为什么内存增加内存单位字节
	cout << "add 1 to the ps pointer:\n";
	cout << " ps= " << ps << ", *ps = " << *ps << endl;
	cout << "access two element with array notation\n";
	cout << "stack[0] = " << stack[0] << ", stack[1] = " << stack[1] << endl;
	cout << "access two elements with array notation \n";
	cout << "stack = " << *stack << ", *(stack+1) = " << *(stack + 1) << endl;
	cout << sizeof(wages) << " = size of wages array \n  ";
	cout << sizeof(pw) << " = size of pw pointer"<<endl;
	cout << wages << "  " << &wages << endl;//输出相同，但意义不同
	cout << "wages = " << wages << ", &wages = " << &wages<<endl;
	cout << "wages+1 = " << wages + 1 << ",&wages +1 = " << &wages + 1;
}
*/
//4.20 指针和字符串 
/*
#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
int main()
{
	using namespace std;
	char animal[20] = "beat";
	const char* bird = "bird";
	char* pt;

	cout << animal << " and ";
	cout << bird << "\n";//说明了cout输出地址流
	cout << "Enter a kind of animal : ";
	cin >> animal;
	pt = animal;
	cout << pt << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;//将字符串地址强转
	cout << pt << " at " << (int*)pt << endl;
	pt = new char[strlen(animal) + 1];
	strcpy(pt, animal);
	cout << "After using strcpy ():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << pt << " at " << (int*)pt << endl;
	delete [] pt;

}
*/
//4.21创建结构以及使用结构（new）
/*
#include<iostream>
struct cnan
{
	char name[20];
	float volumn;
	double price;
};

int main()
{
	using namespace std;
	cnan* pt = new cnan;
	cout << "Enter name of cnan item: ";
	cin.get(pt->name, 20);//cin.get 和cin
	cout << "Enter volumn in cubic feet";
	cin >> (*pt).volumn;
	cout << "Enter price :$";
	cin >> pt->price;
	cout << "name :" << (*pt).name << endl;//（*pt）.name    和pt->name
	cout << "volumn :" << pt->volumn << endl;
	cout << "price : $ " << pt->price << endl;
	delete pt;
}
*/
// 4.22new和delete的使用
/*
#include<iostream>
#include<cstring>
//#pragma warning(disable:4996)
#pragma warning(disable:4996)
using namespace std;
char* getname(void);
int main()
{
	char* name;
	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete [] name;
}
 char* getname()
 {
	 char temp[80];
	 cout << "Enter last name :";
	 cin >> temp;
	 char* pn = new char[strlen(temp) + 1];//这里用虚拟内存的意义是什么
	 strcpy(pn, temp);
	 return pn;
 }
 */
/*
#include<iostream>
struct cnan
{
	int year;
};
int main()
{
	cnan s01, s02, s03;
	s01.year = 2004;
	cnan* pa = &s02;
	pa->year = 2006;
	cnan yi[3];
	yi[0].year = 2008;
	std::cout << yi->year << std::endl;
	const cnan* zhi1[3] = { &s01,&s02,&s03 };
	std::cout << zhi1[1]->year << std::endl;
	const cnan** ppa = zhi1;
	auto ppb = zhi1;
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppb+1))->year << std::endl;
}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	int i;
	for (i = 0; i < 5; i++)
		cout << "C++ knows loops.\n";
	cout << "C++ knows when to stop";
}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the starting countdown value:";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)//入口条件循环，起始值为零在刚开始便判为零
	{
		cout << "i= " << i << endl;
	}
	cout << "Done now that i = " << i << "\n";
}
*/

//5.3值与表达式
/*
#include<iostream>
int main()
{
	using namespace std;
	int x;
	cout << "The expression x=100 has the value ";
	cout << (x = 100) << endl;//加括号的特殊意义是什么
	cout << "Now x = " << x << endl;// 似乎是特殊的赋值方式
	cout << "The expression x<3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x>3 has the value ";  //系统默认输出int值
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);//修改
	cout << "The expression x<3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x>3 has the value ";
	cout << (x > 3) << endl;
}
*/
/*
#include<iostream>
const int Arsize = 16;
int main()
{
	long long fac[Arsize];
	fac[1] = fac[0] = 1LL;
	for (int i = 2; i < Arsize;i++)
		fac[i] = i * fac[i - 1];
	for (int i = 0; i < Arsize; i++)
		std::cout << i << "! = " <<fac[i] <<std::endl;

}
*/

//5.5修改步长
/*
#include<iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Enter a intenger\n";
	int by;
	cin >> by;
	cout << "counting by " << by << endl;
	for (int i = 0; i < 100; i = i + by)
	     cout << i << endl;


}
*/
/*
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	for (int i = word.size() - 1; i >= 0; i--)//size 返回字符的长度不包括结束符
		cout << word[i];
	cout << "\nBye\n";

}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	int a = 20;
	int b = 20;
	cout << "a = " << a << ";  b= " << b<< "\n";
	cout << "a++ = " << a++ << ";  ++b =" << ++b << "\n";
	cout << "a  = " << a << ";  b = " <<b;

}
*/
//5.8   组合运算符
/*
#include<iostream>
int main()
{
	using namespace std;
	cout << "The amazing Accounto will sum and average ";
	cout << "five number for you.\n";
	cout << "please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choice indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5<<endl;
	
	
}
*/
//5.9  逗号运算符
/*
# include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "Enter a word:  ";
	string word;
	cin >> word;
	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";//char的特殊性，string的数组性



}

*/
// 5.10 for循环易错练习
/*
#include<iostream>
int main()
{
	using namespace std;
	int qui[10] = { 20,20, 20,20,20,19,20,18,20,20 };
	cout << "Doing it right :\n";
	int i;
	for (i = 0; qui[i] == 20; i++)
	{
		cout << "qui " << i << " is a 20\n";
	}
	cout << "Doing it dangerously wrong :\n";
	for (i = 0; qui[i] = 20; i++)
	{
		cout << "qui " << i << "is a 20 \n";
	}
}
*/

//最垃圾的病毒
/*
#include<iostream>
int main()
{
	using namespace std;
	for (int j = 1; j > 0; j++)
	{
		for (int i = 1; i > 0; i++)
			cout << "aksljfhasdufhlaskdfghasldjaslfhasflhasfjghasfkjg.haslkghsfkgjahls,dghaslkgkvbas,gkbasdjljfhasdlkdfhaskjfhaslkjfhaskjdfhaskjjfhaskedfhasliufhasfkhasd";
	}
	
}
*/
// 5.11 字符串的比较
/*
#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends,word is " << word << endl;
}
*/
//while 循环
//5.13
/*
#include<iostream>
const int Arsize = 20;
int main()
{
	using namespace std;
	char name[Arsize];
	cout << "your first name,please: ";
	cin >> name;
	cout << "Here is your name ,vertivalized and ASCIIized:\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ":  " << int(name[i]) << endl;
		i++;
	}
		


}
 */
//5.14   系统延时
/*
#include<iostream>
#include<ctime>
int main()
{
	using namespace std;
	cout << "Enter the delay time ,in scconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting \a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done\n";
}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	int n;
	cout << "Enter number in the range 1-10 to find";
	cout << " my favorate number \n";
	do
	{
		cin >> n;

	} while (n != 7);
	cout << "Yes,7 is my favorate.\n";

}
*/
//5.4循环和文本输入
//5.16 使用cin进行实现
/*
#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quite :\n";//char类型的储存个数：一个字符
	cin >> ch;//cin一次读取的量是多少超出怎么办：依次读取
	while(ch!='#')//cin输入会有缓冲区，回车会发送，
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read \n";


}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quite :\n";//char类型的储存个数：一个字符
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);//让回车和空格也在计数中
	}
	cout << endl << count << " characters read \n";


}
//cin .get()的特殊应用 cin .get(name ,Arsize).get()相当于cin .get(name ,arsize)  cin.get()
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count=0;
	cin.get(ch);// 也是为了修改cin .fail() 值吗
	while (cin.fail() == false)//有些小不理解
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters \n";




}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	int ch;//cin.get()  返回一个int值
	int count = 0;
	while ((ch = cin.get()) != EOF)//不加括号发生大错误？？？？？？
	{
		cout.put(char(ch));
		count += 1;
	}
	cout << count << " characters read \n";

}
*/
//第六章 分支语句和逻辑运算符
/*
#include<iostream>
int main()
{
	using std::cin;
	using std::cout;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);// 会读取一切字符包括空格和回车
		while (ch != '.')
		{
			if (ch == ' ')//这种用单引号的就表示类型是字符
				spaces += 1;
			++total;
			cin.get(ch);
		}
	cout << spaces << "spaces characters, " << total << "cahractes";
}
*/
//if else if else小测试
/*
#include<iostream>
const int Fave = 27;
int main()
{
	using namespace std;
	int n;
	cout << "Enter a number in the range 1 - 100 to find my favorate nunber";
	do
	{
		cin >> n;
		if (n < Fave)
			cout << "Too low -- guess again";
		else if (n > Fave)
		{
			cout << "too high --guess again";
		}
		else
			cout << Fave << " is my favorate";
	} while (n != Fave);

}
 */
  //逻辑符号与（||）或（&&）非（！）
/*
#include<iostream>
int main()
{
	using namespace std;

	cout << "This program my reformat your hard disk\n""and destroy all your data\n""Do you wish to continue ?<y/n>";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "you were warnd!\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "A wise choise....bye\n";
		cout << "That wasn't a y or n! Apparantly you"
		" can't follow \ninstructions, so "
		"I'll trash your disk anyway.\a\a\a\n";





}
*/
/*
#include<iostream>
const int Arsize = 6;
int main()
{
	using namespace std;
	float naaq[Arsize];
	cout << "Enter the naaq (new age awareness quiotients)"
		"of\nyour neighbors.program terminates "
		"when you make \n" << Arsize << " entries "
		<< "or enter a negative value.\n";
	int i = 0;
	float temp;
	cout << "First value : ";
	cin >> temp;
	while (i < Arsize && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < Arsize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
		
	}
	if (i == 0)
		cout << "no data--bye\n";
	else
	{
		cout << "Enter your NAAQ";
		float you;
		cin >>you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if(naaq[j]>you)
			++count;
			cout << count;
			cout << " of your neighbors have greater awareness of\n"
				<< "the New Age than you do.\n";
    }

}
*/
/*
#include<iostream>
const char* qua[4] =
{
	"10,000-meter race \n",
	"mud tug-of-war.\n",
	"pie-throwing festival.\n"
};
int main()
{
	using namespace std;
	int age;
	cout << "Enter your age in year:  ";
		cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "you qualify for the " << qua[index];//cout用地址流输出
}
*/
/*
#include<iostream>
#include<climits>
bool is_int(double);
int main()
{
	using namespace std;
	double num;
	cout << "yo ,dude! Enter an integer value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range  --please try again: ";
			cin >> num;
	}
	int val = int(num);
	cout << "you've entered the integer " << val << "\nbye\n";
}
		
bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;

}
*/
//   字符函数库
/*
#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	cout << "Enter text for analysis ,and type @"
		" to terminate input .\n";
	char ch;
	int whitespace=0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;//输入分号似乎没用
	cin.get(ch);
	while (ch != '@')// 确定休止符
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
			cin.get(ch);
	}
	cout << chars << " letters, ";
	cout << whitespace << " whitespace, ";
	cout << digits << " digits, ";
	cout << others << " others.";
	char ab = ';';
	cout << ab;

}
*/
//？运算符
/*
#include<iostream>
int main()
{
	using namespace std;
	int a, b;
	cout << "Enter two integer";
	cin >> a >> b;
	cout << "the larger of " << a << " and " << b;
	int c = a > b ? a: b;
	cout << " is " << c << endl;

}
*/
// 6.10 swich
/*
#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{

		switch (choice)
		{
		case 'a':
		case 'A':cout << "\a\n";
			break;

		case 'r':
		case 'R':report();
			break;
		case 'l':
		case 'L': cout << "The boss was in all day.\n";
			break;
		case 'c':
		case 'C':comfort();
			break;
		default:cout << "That's not a choice";
		}
		showmenu();
		cin >> choice;
	}
}
*/
/*
#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{

		switch (choice)
		{
		case 1:cout << "\a\n";
			break;

		case 2:report();
			break;
		case 3: cout << "The boss was in all day.\n";
			break;
		case 4:comfort();
			break;
		default:cout << "That's not a choice";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye!\n";
}
void showmenu()
{
	cout << "please enter 1,2,3,4,or 5:\n"
		"1)alarm            2)report\n  "
		"3)alibi            3)comfort\n"
		"5)quit";
}
void report()
{
	cout << "It's been an excellent week for business.\n"
		"Sales are up 120%. Expenses are down 35%\n";

}
void comfort()
{
	cout << "Your boss think you are the finest CEO\n"
	"In the industry. The board of direction think\n"
	"you are the finest CEO in the industry .\n";
}
*/
//用枚举当标签
/*
#include <iostream>
enum{red,orage,yellow,green,blue,violet,indigo};
int main()
{
	using namespace std;
	cout << "Enter color code(0-6)";
	int code;
	cin >> code;
	while(code >=red &&code<=)
}
*/
/*
#include<iostream>
const int Arsize = 80;
int main()
{
	using namespace std;
	char line[Arsize];
	int spaces = 0;
	cout << "Enter a line of text:\n";
	cin.get(line, Arsize);
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] =='.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces \n";
	cout << "Done.\n";
}
*/

//读取数字的循环
/*
#include<iostream>
const int Max = 5;
int main()
{
	using namespace std;
	double fish[Max];
	cout << "please enter the weight of your fish .\n";
	cout << "you may enter up to " << Max
		<< " fish <q to terminate>.\n";
	cout << "fish #1: ";
	double total=0;
	int i = 0;
	while (i<Max && cin >> fish[i])//   数据类型不对会返回false
	{
		if (++i < Max)//这一步会让i加一吗；
			cout << "fish #" << i + 1 << " : ";
		total = total + fish[i];//为什么会自动i加一
		
	}
	if (i != 0)
		double average = total / i;
	else
		cout << "no fish\n";
	cout << "done";
}
*/
/*
#include<iostream>
const int Max = 5;
int main()
{
	using namespace std;
	int golf[5];//数组括号中输入的是数据数量；
	cout << " please enter your golf sorce.\n";
	cout << "you must enter " << Max << " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)//这里的i++是先运行在加
	{
		cout << "round #" << i+1<<" : ";
		while (!(cin >> golf[i]))
		{
			cin.clear();

			while (cin.get() != '\n')//用cin。get（）读取全部输入，从未删除
				continue;//注定只能有一行，continue占位，读完直到行尾
			cout << "please enter a number";
		}
	}
	double total = 0;
	for (i = 0; i < Max; i++)
		total = total + golf[i];
	cout << total / Max << " = average score " << Max << " rounds\n";

}
*/

//简单文件输入输出
/*
//输入
# include<iostream>
#include<fstream>
int main()
{
	using namespace std;
	char automobile[50];
	int year;
	double a_price;
	double d_price;
	ofstream outfile;
	outfile.open("line.text");//文件为自动创造，像记录缓存一样
	cout << "Enter the make and model of automobile : ";
	cin.getline(automobile, 50);
	cout << "Enter the model year";
	cin >> year;
	cout << " Enter the original asking price : ";
	cin >> a_price;
	d_price = 0.913 * a_price;
	//display information on screen with cout 
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << " make and model : " << automobile << endl;
	cout << "year : " << year << endl;
	cout << "was asking $ " << a_price << endl;
	cout << " Now asking $ " << d_price << endl;
	outfile << fixed;
	outfile.precision(2);
	outfile.setf(ios_base::showpoint);
	outfile << " make and model: " << automobile << endl;
	outfile << " year : " << year << endl;
	outfile << "was asking $" << a_price << endl;
	outfile << "Now asking $" << d_price << endl;
	outfile.close();

}
*/
//输出
/*
#include<iostream>
#include<fstream>
#include<cstdlib>
const int Size = 60;
int main()
{
	using namespace std;
	char filename[Size];
	ifstream infile;//声明读取变量
	cout << "enter the file name : ";
	cin.getline(filename, Size);//读取一行,会将空格一并读取
	infile.open(filename);//对于位置的寻找
	if (!infile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "program terminating .\n";
		exit(EXIT_FAILURE);
	}
	double value=0.0;
	int  sum = 0;
	int count = 0;
	infile >> value;//精确的读取第一个值
	while (infile.good())//不清楚
	{
		++count;
		sum += value;
		infile >> value;//用infile读取
	}
	if (infile.eof())//用各种方法确定未读入原因
	{
		cout << "end of file reached" << endl;
	}
	else if (infile.fail())
	{
		cout << "input terminated by mismatch" << endl;
	}
	else
		cout << "Input terminated by unknown reason";
	if(count==0)
		cout << "No data processed." << endl;
	else
	{
		cout << "item read : " << count << endl;
		cout << "sum : " << sum << endl;
		cout << "average : " << sum / count;
	} 

	infile.close();

}
*/
//第七章 函数基本知识
/*
#include<iostream>
void simple();
int main()
{
	using namespace std;
	cout << "main() will call the simple function:\n";
	simple();
		cout << "main() is finished with the simple() function.\n";

}
void simple()
{
	using namespace std;
	cout << "I'am but a simple function.\n";
}
*/
/*
#include<iostream>
void cheers(int);
double cube(double x);
int main()
{
	using namespace std;
	cheers(5);
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volumn = cube(side);
	cout << "A " << side << "-foot cube has a volumne of ";
	cout << volumn << " cube feet.\n";
	cheers(cube(2));

}
void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "cheers! ";
	cout << endl;
}
double cube(double x)
{
	return x * x * x;
}

*/
/*
#include<iostream>
using namespace std;
void n_chars(char l, int m);//形参的名可省略并且可与定义中不同
int main()
{
	int times;
	char ch;
	cout << "Enter a cahracters ";
	cin >> ch;
	while (ch != 'q')//  改为输入错误也许更好
	{
		cout << "Enter a integer : ";
		cin >> times;//输入两个字符似乎会将后一个强转为数字
		n_chars(ch, times);
		cout << "\n Enter another character or press the q-key to quit";
		cin >> ch;
	}
	cout << "The value of times is " << times << ".\n";
	cout << "Bye\n";
}
void n_chars(char c, int n)//这里就得正确了
{
	while (n--> 0)
		cout << c;

}

*/
/*
#include<iostream>
long double probable(unsigned number, unsigned picks);
int main()
{
	using namespace std;
	int total, choices;
	cout << "Enter the total number of choices on the game card and\nthe number of picks allowed : ";
	while ((cin >> total >>choices) && total >= choices)
	{
		cout << "you have one chance in ";
		cout << probable(total, choices);//输入变量
		cout << " of winning.\n";
		cout << "Nect two number (any 字符 to quit): ";

	}
	cout << "bye.\n";
}
long double probable(unsigned number, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = number, p = picks; p > 0; n--, p--)
	{
		result = result * n / p;
	}
	return result;
}
*/
/*
#include<iostream>
#include<fstream>
const int Arsize = 8;
int sum_arr(int arr[], int n);
int main()
{
	using namespace std;
	int value;
	int i=0;
	int cookie[Arsize];
	ifstream shiyan;
	shiyan.open("haha.txt");
	
	while (shiyan >> value)//这里使用good丢失了一个数据	
	{
		cookie[i] = value;
		cout << cookie[i];
		++i;
		
	}
	//cout << cookie[7];
	int sum = sum_arr(cookie, Arsize);
	shiyan.close();
	cout << sum;

}

int sum_arr(int arr[], int n)
{
	int sum=0;

	for (int i = 0; i <n; i++)
	{
		sum += arr[i];
		//std::cout << arr[i]<< "  ";
	}
	//std::cout << arr[7]  ;
	return sum;
	//std::cout << arr[0]  ;
}
 */
/*
#include<iostream>
const int Arsize = 8;
int sum_arr(int arr[], int n);
int main()
{
	using namespace std;
	int cookie[Arsize] = { 1,2,4,8,16,32,64,128 };
	cout << cookie << " array address  ";// 首个元素的地址和整个数组地址的区别
	cout << sizeof cookie << " = sizeof cookie ";//为什么该函数没有用普遍的函数形式
	int sum = sum_arr(cookie, Arsize);
	cout << "total eaten : " << sum << endl;
	sum = sum_arr(cookie, 3);//修改循环的值改变所加个数
	cout << "First three eater ate " << sum << endl;
	sum = sum_arr(cookie + 4, 4);
	cout << "Last four eater ate " << sum << endl;
}

int sum_arr(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];// 难道数组内部对于数的调用使用的是初位置加后位移个数的方法
	}

	return sum;
}

*/
/*问题
* 1：cout输出对于类型的转换
* 2：cout如何传递不同类型，arr和arr【2】传递有何区别
* 3：如何体现数组的按值传递
* 4：什么是显式传递数组长度
 */
//更多函数实例
/*
#include<iostream>
const int Max = 5;
int fill_array(double ar[], int limite);//这里的arr【】是值类型，为什么？
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);
int main()
{
	using namespace std;
	double property[Max];

	int size = fill_array(property, Max);
	show_array(property, size);
	if (size > 0)
	{
		cout << "Enter revaluation factor";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
				cout << "bad input,please enter a number";
		}
		revalue(factor, property, size);
		show_array(property, size);
	}
	cout << "Done.\n";
	//cin.get();
	//cin.get();//这一步不理解

}
int fill_array(double ar[], int limite)
{
	using namespace std;
	double temp;
	int i=0;
	for (; i < limite; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
	    if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "bad input ,input process terminated.\n";
			break;
	    }
		else if (temp < 0)
		{
			break;

		}
		ar[i] = temp;
	}
	return i;
}
void show_array(const double ar[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
		ar[i] = ar[i] * r;

}
*/
/*
#include<iostream>
const int Arsize = 8;
int sum_arr(const int *begin,const int *end);
int main()
{
	using namespace std;
	int cookie[Arsize] = { 1,2,4,8,16,32,64,128 };
	cout << cookie << " array address  ";// 首个元素的地址和整个数组地址的区别
	cout << sizeof cookie << " = sizeof cookie ";//为什么该函数没有用普遍的函数形式
	int sum = sum_arr(cookie, cookie+Arsize);
	cout << "total eaten : " << sum << endl;
	sum = sum_arr(cookie, cookie + 3);//修改循环的值改变所加个数
	cout << "First three eater ate " << sum << endl;
	sum = sum_arr(cookie+4, cookie + Arsize);
	cout << "Last four eater ate " << sum << endl;
}

int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int sum = 0;
	for (pt=begin;pt!=end;pt++)
	{
		sum = sum +*pt;// 难道数组内部对于数的调用使用的是初位置加后位移个数的方法
	}

	return sum;
}
*/
/*
#include<iostream>
unsigned int c_in_str(const char* str, char ch);
int main()
{
	using namespace std;
	char mmm[15] = "minimum";
	const char* wail = "ululate";
	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;

}

unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count = count + 1;
		str += 1;
	}
	return count;
 }
*/
/*
#include<iostream>
char* buildstr(char c, int n);
int main()
{
	using namespace std;
	int times;
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an intenger :";
	cin >> times;
	char* pr = buildstr(ch, times);
	cout << pr << endl;
	delete[] pr;
	pr  = buildstr('+', 20);
	cout << pr << "-DONE" << pr << endl;
	delete[] pr;//运行完把内存清了
}

char* buildstr(char c, int n)
{
	char* pstr = new char[n + 1];//在函数内的内存运行完就清除，所以new一个空间
	pstr[n] = '\0';//停止读取
	for(int i=0;i<n;i++)
	{
		
		pstr[i] = c;//数组不会自动加空吗
	}
	std::cout << pstr;//奇怪
	return pstr;//char数组指针也算是char指针，反之亦然
}
*/
/*
#include<iostream>
struct travel_time
{
	int hours;
	int mins;
};
const int Mine_per_hr = 60;
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);
int main()
{
	using namespace std;
	travel_time day1{5, 45};
	travel_time day2{ 4,55 };
	cout << "two-day total: ";
	travel_time trip = sum(day1, day2);
	show_time(trip);
	travel_time day3 {4, 32};
	cout << "three day total: ";
	show_time(sum(trip, day3));
}
travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;
	total.hours= t1.hours + t2.hours + (t1.mins + t2.mins) / Mine_per_hr;
	total.mins= (t1.mins + t2.mins) % Mine_per_hr;
	return  total;
}
void show_time(travel_time t)
{
	using namespace std;
	cout << t.hours << "hours  " << t.mins << "mins";
}

*/
/*
#include<iostream>
#include<cmath>
struct rect
{
	double x;
	double y;
};
struct polar
{
	double distance;
	double angel;
};
polar rect_to_polar(rect);
void show_polar(polar);
int main()
{
	using namespace std;
	rect H;
	polar T;
	cout << "Enter the X and Y value";
	while (cin >> H.x && cin >> H.y)
	{
	
		T = rect_to_polar(H);
		show_polar(T);
		cout << "Nect tew number";
	}
	cout << "Done";
}

polar rect_to_polar(rect L)
{
	polar Y;
	Y.distance = sqrt(L.x * L.x + L.y * L.y);
	if (L.x > 0 && L.y >= 0)
		Y.angel = atan2(L.y, L.x);
	else if (L.x <0 && L.y >= 0)
		Y.angel = atan2(L.y, L.x)*(-1);
	else if (L.x < 0 && L.y <= 0)
		Y.angel = atan2(L.y, L.x) * (-1);
	else if (L.x < 0 && L.y <= 0)
		Y.angel = atan2(L.y, L.x) ;
	return Y;
}
void show_polar(polar A)
{
	using namespace std;
	const double rad_to_deg = 57.29577951;
	cout << "distance  =" << A.distance << endl;
	cout << "angel =" << A.angel * rad_to_deg<<" degree";


}
*/
/*
#include<iostream>
#include<cmath>
struct rect
{
	double x;
	double y;
};
struct polar
{
	double distance;
	double angel;
};
void rect_to_polar(const rect* pxy,polar* pad);
void show_polar(const polar* pad);
int main()
{
	using namespace std;
	rect H;
	polar T;
	cout << "Enter the X and Y value";
	while (cin >> H.x && cin >> H.y)
	{
		rect_to_polar(&H,&T);
		show_polar(&T);
		cout << "Nect tew number";
	}
	cout << "Done";
}

void rect_to_polar(const rect* pxy, polar* pad)
{
	using namespace std;
	pad->distance = sqrt(pxy->x*pxy->x+pxy->y*pxy->y);
	if (pxy->x > 0 && pxy->y >= 0)
		pad->angel = atan2(pxy->y, pxy->x);
	else if (pxy->x < 0 && pxy->y >= 0)
		pad->angel = atan2(pxy->y, pxy->x) * (-1);
	else if (pxy->x > 0 && pxy->y <= 0)
		pad->angel = atan2(pxy->y, pxy->x) * (-1);
	else if (pxy->x < 0 && pxy->y <= 0)
		pad->angel = atan2(pxy->y, pxy->x);
}
void show_polar(const polar* pxy)
{
	using namespace std;
	const double rad_to_deg = 57.29577951;
	cout << "distance  =" << pxy->distance << endl;
	cout << "angel =" << pxy->angel* 57.29577951 << " degree";


}
*/

// 函数和string对象
/*
#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
void display(const string sa[],int n);//函数中的数组元素的定义值得关注
int main()
{
	string list[SIZE];
	cout << "Enter your " << SIZE << " favorate astronomical sight:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, list[i]);// 读取一行元素
	}
	cout << "your list:\n";
	display(list, SIZE);

}
void display(const string sa[], int n)
{
	for (int i = 0; i < SIZE; i++)
		cout <<"#" <<i<<" sdf" << sa[i] << endl;
}
*/
//函数与array对象
/*
#include<iostream>
#include<array>
#include<string>
const int season = 4;
const std::array<std::string, season>snames = { "spring","summer","fall","winter" };
void fill(std::array<double, season>* pa);//这俩表述方式有啥区别
void show(std::array<double, season>da);
int main()
{
	std::array<double, season>expenses;
	fill(&expenses);
	show(expenses);
	
}
void fill(std::array<double, season>* pa)
{
	using namespace std;
	for (int i = 0; i < season; i++)
	{
		cout << "Enter " << snames[i] << " expenses: ";
		cin >> (*pa)[i];//为什么不用指针，及定义（*pa）为对象，由于先后级区别，必须加括号
	}
}
void show(std::array<double, season>da)//效率太低
{
	using namespace std;
	double total = 0;
	cout << "\nExpenses\n";
	for (int i = 0; i < season; i++)
	{
		cout << snames[i] << ": $" << da[i] << endl;
		total = total + da[i];
	}
	cout << "total Expenses: $" << total << endl;
}

*/
//递归
/*
#include<iostream>
#include<array>
#include<string>
void countdown(int n);
int main()
{
	countdown(4);

}

void countdown(int n)
{
	using namespace std;
	cout << "Counting down ..." << n << endl;
	if (n > 0)
	{
		countdown(n - 1);
		
	}
	cout << ": kaboom!\n";
}
*/
/*
#include<iostream>
const int len = 66;
const int dives = 6;
void subdivide(char ar[], int low, int high, int level);
int main()
{
	char ruler[len];
	int i;
	for (i = 1; i < len - 2; i++)
		ruler[i] = ' ';
	ruler[len - 1] = '\0';// 最后的一个元素	
	int max = len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	std::cout << ruler << std::endl;
	for (i = 1; i <= dives; i++)
	{
		subdivide(ruler, min, max, i);
		std::cout << ruler << std::endl;
		for (int j = 1; j < len - 2; j++)
			ruler[j] = ' ';
	}
	
}

void subdivide(char ar[], int low, int high, int level)
{
	if (level == 0)
		return;
	int mid = (high + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
		
}
*/
//函数指针
/*
#include<iostream>
double besty(int);//声明函数
double pam(int);
void estimate(int line, double (*pf)(int));//将函数赋予会消耗大量内存，这样传递的是函数地址, 似乎不能省略，省略就变成了指向double的指针
int main()
{
	using namespace std;
	int code;
	cout << "Enter how many lines of code do you need";
	cin >> code;
	cout << "Here's besty's estimate:\n";
	estimate(code, besty);// 目的是将函数地址传进去
	cout << "Here's pam's estimate :\n";
	estimate(code, pam);
}
double besty(int lns)
{
	return 0.05 * lns;
}
double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
	using namespace std;
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << "hour(s)\n";
}
*/
//内联函数
/*
#include<iostream>
inline double square(double x) { return x * x; }// 内连函数定义的位置及关键
int main()
{
	using namespace std;
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a=+ = " << ", b = " << b << endl;
	cout << "c = " << c;
	cout << ", squre = " << square(c++) << endl;
	cout << "Now c =" << c;
}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	int rate = 101;
	int& roden = rate;//采用地址共同的方法实现了引用
	cout << "tate = " << rate;
	cout << ", roden = " << roden;
	roden++;//引用别名会对原数据造成影响
	cout << " rate address = " << &rate;
	cout << ", rodent address = " << &roden;
}
*/
 /*
#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;//引用必须刚开始就初始化相当于后置const的指针
	cout << "rats = " << rats;
	cout << ",rodents = " << rodents << endl;
	cout << " rate address = " << &rats << endl;
	cout << "rodents address = " << &rodents << endl;
	int bunnies = 50;
	rodents = bunnies;//像赋值语句
	cout << "bunnies = " << bunnies << endl;
	cout << " rodents = " << rodents << endl;
	cout << "bunnies address = " << &bunnies<<endl;
	cout << "rodents address = " << &rodents << endl;

}
*/
//  引用，按值传递，指针传递
/*
#include<iostream>
void f1(int& w, int& b);
void f2(int* p, int* q);
void f3(int a, int b);
int main()
{
	using namespace std;
	int t1 = 300;
	int t2 = 350;
	cout << " t1 = " << t1<<endl;
	cout << " t2 = " << t2<<endl;
	cout << " use reference to swap content :\n";
	f1(t1, t2);
	cout << " t1 = " << t1<<endl;
	cout << " t2 = " << t2 << endl;
	 
	cout << "using pointer to swap content again:\n";

	f1(t1, t2);
	cout << " t1 = " << t1<<endl;
	cout << " t2 = " << t2 << endl;

	cout << "tring to use passing by value:\n";
	cout << " t1 = " << t1 << endl;
	cout << " t2 = " << t2 << endl;
}
void f1(int& w, int& b)//这里对值的别名进行了赋值，在别处能用否
{
	int temp;
	temp = w;
	w = b;
	b = temp;
}
void f2(int* p, int* q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void f3(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
*/
//临时变量 引用参数 const
/*
#include<iostream>
#include<string>
struct free_t
{
	std::string name;
	int made;
	int attempt;
	float percent;
};
void display(const free_t& free);
void set_pc(free_t& ft);
free_t& accumulate(free_t& target, const free_t& source);
int main()
{
	free_t one = { "ifelse branch",13,14 };
	free_t two = { "andor knott",10,16 };
	free_t three = { "minnie max",7,9 };
	free_t four = { "whily looper",5,9 };
	free_t five = { "long long",6,14 };
	free_t team = { "throwgoods",0,0 };
	free_t dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	dup = accumulate(team, five);
	std::cout << "Displaying team:\n";
	display(team);
	std::cout << "displaying dup after assignment:\n";
	display(dup);
	set_pc(four);
	accumulate(dup, five)=four;
	std::cout << "Displaying dup after ill_advised assignment:\n";
	display(dup);
}
void display(const free_t& ft)
{
	using namespace std;
	cout << "Name :" << ft.name << '\n';
	cout << "Made :" << ft.made << '\n';
	cout << "Attempt :" << ft.attempt << '\n';
	cout << "Percent :" << ft.percent << '\n';

}
void set_pc(free_t& ft)
{
	if (ft.attempt != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempt);
	else
		ft.percent = 0;
}
free_t & accumulate(free_t & target, const free_t & source)
{
	target.attempt += source.attempt;
	target.made += source.made;
	set_pc(target);
	return target;
}

*/
/*
//试验指针类型对值的改变和对地址的改变
#include<iostream>
int main()
{
	using namespace std;
	int x = 10;
	 int*  pr=new int;//并没有创造一片空间
	*pr = x;
	cout << "x address = " << &x<<endl;
	cout << "pr = " << pr << endl;
	cout << *pr;



}
*/
//对类的引用
/*
#include<iostream>
#include<string>
using namespace std;
string version(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);
int main()
{
	string input;
	string copy;
	string result;
	cout << "Enter a string: ";
	getline(cin, input);
	cout << "your string as entered : " << input << endl;
	result = version(input,"***");//常量有地址可以引用吗
	cout << "your string enhanced: " << result << endl;
	cout << "your original string : " << input << endl;
	result = version2(input, "###");
	cout << "your string enhanced: " << result << endl;
	cout << "your original string : " << input << endl;
	cout << "Reseting original string .\n";
	result = version3(input, "@@@");
	cout << "your string enhanced: " << result << endl;
	cout << "your original string : " << input<< endl;
}
string version(const string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;//string 类型可以随便拼接？？？
	return temp;//返回了一个常量
}
const string& version2(string& s1, const string& s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}
const string& version3( string& s1, const string& s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}
*/
/*
#include<iostream>
#include<fstream>//这是ofstream类
#include<cstdlib>
using namespace std;
void file_it(ostream& os, double fo, const double fe[], int n);
const int limit = 5;
int main()
{
	ofstream fout;
	const char* fn = "ep-data.txt";//加上双引号变地址了？？又或是一个名称
	fout.open(fn);//什么东西会自己创文件来着，在其中输入地址能强制转换
	if (!fout.is_open())//检验文件是否打开，得记住
	{
		cout << "can't open " << fn << ".bye\n";
		exit(EXIT_FAILURE);
	}
	double object;
	cout << "Enter the focol lengnth of your "
	"telescope objective in mm:";//什么神奇的表述方式
	cin >> object;
	double eps[limit];
	cout << "Enter the focal lenghth ,in mm, of " << limit<<" eyepieces:\n";
	for (int i = 0; i <  limit; i++)
	{
		cout << "eyepiece #" << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, object, eps, limit);
	file_it(cout, object, eps, limit);// 函数原型是ostream，此为原型，可用其派生类型，ofstream。
	cout << "Done\n";

}
void file_it(ostream& os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;//这是什么类,格式化设置储存信息
	initial = os.setf(ios_base::fixed);
	os.precision(0);
	os << "focal lenghth of objective : " << fo << " mm \n";// 对焦距的输出有所限制
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(12);//输出宽度是什么样的
	os << "f.l. eyepiece";
	os.width(15);
	os << "magnification" << endl;//俩width什么意思，在os类下的操作和普通有何区别，cout是自带的os类把
	for (int i = 0;i < limit; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;

	}
	os.setf(initial);

}
*/
/*
#include<iostream>
const int Arsize = 80;
char* left(const char* str, int n = 1);//默认值从右到左，赋值从左到右
int main()
{
	using namespace std;
	char sample[Arsize];
	cout << "Enter a string:\n";
	cin.get(sample, Arsize);//这个和getline略微不同
	char* ps = left(sample, 4);//在函数里分配了空间
	cout << ps << endl;
	delete[] ps;//这里删除空间的缘由
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;
}
char* left(const char* str, int n)// 函数定义仍然不变
{
	if (n < 0)
	{
		n = 0;
	}
	char* p = new char(n + 1);
	int i;
	for (i = 0; i < n&&str[i]; i++)
	{
		p[i] = str[i];
	}
	while (i <= n)
	{
		p[i++] = '\0';
	}
	return p;
}
*/
/*
#include<iostream>
int main()
{
	using namespace std;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cout << i<< endl;//运行完循环在加，奇怪，俩没区别吗
}
*/


























































































































































