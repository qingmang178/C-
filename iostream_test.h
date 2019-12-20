#pragma once
#ifndef iostreamtest_
#define iostreamtest_

#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int test_binary();

struct Student {
	char name[20];
	int score;
};



   int test_binary()
	{
		Student s;
		ofstream Outfile("students.dat", ios::out | ios::binary);
		while (cin >> s.name >> s.score)
			Outfile.write((char*)&s, sizeof(s));
		Outfile.close();
		return 0;
	}
   int test_binary1()
   {
	   //将二进制文件读取输出到屏幕上
	   Student s;
	   ifstream inFile("students.dat", ios::in | ios::binary);
	   if (!inFile)
	   {
		   cout << "error" << endl;
		   return 0;
	   }
	   while (inFile.read((char*) & s, sizeof(s)))
	   {
		   int readedBytes = inFile.gcount();
		   cout << s.name << " " << s.score << endl;
	   }
	   inFile.close();
	   return 0;

   }
   int test_binary2()
   {
	   Student s;
	   fstream iofile("students.dat", ios::in | ios::out | ios::binary);
	   if (!iofile)
	   {
		   cout << "error";
		   return 0;
	   }
	   iofile.seekp(2 * sizeof(s), ios::beg);
	   strcpy(s.name, "zhaobin");// 修改的方法，重点
	   s.score = 50;
	   //iofile.write("Mikl", strlen("Mike") + 1);
	   iofile.write((const char*)(&s), sizeof(s));
	   iofile.seekg(0, ios::beg);
	   while (iofile.read((char*)&s, sizeof(s)))
		   cout << s.name << " " << s.score << endl;
	   iofile.close();
	   return 0;
   }

/*int test1()
{
	double f; int n;
	freopen("t.txt", "r", stdin);

	cin >> f >> n;
	cout << f << "," << n << endl;
	return 0;
}
//从in.txt文件读入数据并进行排序再输出到文件out.txt
int test2()
{
	vector<int> v;
	ifstream srcfile("in.txt", ios::in);
	ofstream destfile("out.txt", ios::out);
	int x;
	while (srcfile >> x)
		v.push_back(x);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		destfile << v[i] << " ";
	destfile.close();
	srcfile.close();
	return 0;
}
int test3()
{
	ofstream fout("some.dat", ios::out | ios::binary);
	int x = 120;
	fout.write((const char*)(&x), sizeof(x));
	fout.close();
	ifstream fin("some.dat", ios::in | ios::binary);
	int y;
	fin.read((char*)&y, sizeof(int));
	fin.close();
	cout << y << endl;
	return 0;
}

*/

#endif
