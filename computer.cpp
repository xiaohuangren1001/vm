#include <iostream>
#include <string>
#include <conio.h>
#define uparrow 72//�ϼ�
#define downarrow 80//�¼�
#define leftarrow 75//���
#define rightarrow 77//�Ҽ�
using namespace std;
char computer[30][100] = {
	//          111111111122222222223333333333444444
	//0123456789012345678901234567890123456789012345
	"----------------------------------------------- ",//0
	"\\                                            / ",//1
	" \\                                          /  ",//2
	"  \\                                        /   ",//3
	"   \\                                      /    ",//4
	"    \\                                    /     ",//5
	"     \\                                  /      ",//6
	"      -----------------------------------       ",//7
	"      |Esc |F1 |F2 |F3 |F4 |F5 |F6 |F7 |        ",//8
	"      |q=|w |e |r |t |y |u |i |o |p |{ |        ",//9
	"      |CAPSL |a |s |d |f |g |h |j |k |l |       ",//10
	"      |ALT |z |x |c |v |b |n |m |Con |} |       ",//11
	"      |�� |�� |�� |�� |Win|SHUTD|  |Sta |       ",//12
	"      -----------------------------------       ",//13
};
int x = 9, y = 8;
void printsaying() {
	cout << "������" << endl;
	cout << "1.�����ϵ�Con��ʾȷ�ϣ�����ͨ�����ϵ�ENTER����Sta��ʾ������Start)��\nCAPSL��ʾ��д��CAPSLOCK����SHUTD��ʾ�ػ���SHUTDOWN��\n�Ǹ�ʲô��û�е��ǿո�";
	cout << "\n2.=���ڵ�λ���Ǳ�ѡ�еĵط�";
	cout << "\n3.û��";
	system("pause > nul");
}
void printcomp() {
	for (int i = 0; i < 14; i++)
	{
		cout << computer[i] << endl;
	}
}
int main()
{
	printsaying();
	system("color f0");
	system("cls");
	printcomp();
	while (true)
	{
		char ch = _getch();
		if (ch == 'w')
		{
			computer[x][y] = ' ';
		    if (x == 9)
		    {
		    	switch (y)
		    	{
		    		case 8: computer[8][10] = '='; break;//q->esc
		    		case 11: computer[8][14] = '='; break;//w->f1
		    		case 14: computer[8][18] = '='; break;//e->f2
		    		case 17: computer[8][22] = '='; break;//r->f3
		    		case 20: computer[8][26] = '='; break;//t->f4
		    		case 23: computer[8][30] = '='; break;//y->f5
		    		case 26: computer[8][34] = '='; break;//u->f6
		    		case 29: computer[8][38] = '='; break;//i->f7
				}
			}
			else if (x == 10)
			{
				
			}
		}
		system("cls");
		printcomp();
	}
	return 0;
}
