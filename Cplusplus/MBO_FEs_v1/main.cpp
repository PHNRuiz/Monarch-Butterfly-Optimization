// main.cpp : Defines the entry point for the console application.
//

#include "MBO_Object.h"
#include <cstdlib>  
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	int popsize, maxt , dim;
	// cin>>popsize>>dim>>maxt;
	popsize = 50;
	dim = 20;
	maxt = 50;

	MBO_Object mbo(popsize, dim, maxt);
	//mbo.input();
	clock_t start = clock();
	mbo.MBO();
	clock_t end = clock();
	//int gen[37] = {0,2, 4, 6, 3, 6, 6, 1, 3, 2, 5, 1, 2, 6, 1, 6, 2, 5, 3, 1, 5, 1, 4, 4, 5, 4, 1, 3, 3, 3, 2, 5, 4, 2, 6, 5, 4 };
	mbo.output();

	ofstream fout;  //����ļ�
	fout.open("output.txt", ios::out | ios::app);  //����ļ�

	//  ifstream examplefile ("FJSSP01.txt");

	if (!fout.is_open())
	{
		cout << "Error opening file"; exit(1);
	}

	// �ض���
	//streambuf *cinbackup;  
	streambuf *coutbackup;
	coutbackup = cout.rdbuf(fout.rdbuf());  //�� rdbuf() ���¶���

	cout << "CLOCKS_PER_SEC  " << CLOCKS_PER_SEC << endl;
	cout << "the time is:  " << (double)(end - start) / CLOCKS_PER_SEC << endl;
	//double result = 0;

	// Close the file
	//fin.close( );
	fout.close();

	//cin.rdbuf(cinbackup);  // ȡ�����ָ���������
	cout.rdbuf(coutbackup);  //ȡ�����ָ���Ļ���


	/*
	for(int i = 0;i < 30;++i)
	{
	GSA_Object gsa(50,30,1000);
	gsa.initialize();
	gsa.output();
	cout<<"begin the gsa"<<endl;
	clock_t begin = clock();
	gsa.GSA();
	clock_t end = clock();
	// if(result > gsa.average()) result = gsa.average();
	//  result += gsa.average();
	cout<<"end the gsa"<<endl;
	gsa.output();
	cout<<"the best fit is    "<<gsa.fitbest<<endl;
	cout<<"the time is   "<< (end - begin) / 1000<<endl;
	}
	cout<<setiosflags(ios_base::scientific)<<result/30<<endl;
	*/
	return 0;
}

