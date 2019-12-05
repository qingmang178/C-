#pragma once
#ifndef iostreamtest_
#define iostreamtest_

#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int test1();
int test2();
int test3();

int test1()
{
	double f; int n;
	freopen("t.txt", "r", stdin);

	cin >> f >> n;
	cout << f << "," << n << endl;
	return 0;
}
//��in.txt�ļ��������ݲ�����������������ļ�out.txt
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



#endif
