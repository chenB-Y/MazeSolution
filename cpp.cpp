#include"Header.h"
Stack Maze(int arr[N][N])
{
	int i = 0, j = 0;
	List L;
	Stack S;
	Location loc1 (0, 0);
	S.Push(loc1);
	L.insertNord(loc1);
	while(i != 14)
	{
		Location loc2(i, j);
		Location newlocation;
		newlocation = checkplace(L, arr, loc2,S);
		if (newlocation.getx() != -1)
		{
			S.Push(newlocation);
			L.insertNord(newlocation);
			i = newlocation.getx();
			j = newlocation.gety();
		}
		else
		{
			Stack end;
			return end;
		}
	}
	S.Push(Location(14, 14));
	return S;
}
Location checkplace(List& l,int arr[N][N], Location loc, Stack s)
{
	int i = loc.getx();
	int j = loc.gety();
	int flag ;
	if ((arr[i][j + 1] == 0) && (j + 1 < N))
	{
		flag = 0;
		Location newloc(i, j+1);
		Nord* temp = l.gethead();
		while (temp != nullptr)
		{
			if (temp->getpoint().getx() == newloc.getx() && temp->getpoint().gety() == newloc.gety())
			{
				flag = 1;
				break;
			}
			temp = temp->getpointer();
		}
		if (flag == 0)
			return newloc;
	}
	if ((arr[i + 1][j] == 0) && (i + 1 < N))
	{
		flag = 0;
		Location newloc(i + 1, j);
		Nord* temp = l.gethead();
		while (temp != nullptr)
		{
			if (temp->getpoint().getx() == newloc.getx() && temp->getpoint().gety() == newloc.gety())
			{
				flag = 1;
				break;
			}
			temp = temp->getpointer();
		}
		if (flag == 0)
			return newloc;
	}
	if ((arr[i][j - 1] == 0) && (j - 1 > 0))
	{
		flag = 0;
		Location newloc(i, j - 1);
		Nord* temp = l.gethead();
		while (temp != nullptr)
		{
			if (temp->getpoint().getx() == newloc.getx() && temp->getpoint().gety() == newloc.gety())
			{
				flag = 1;
				break;
			}
			temp = temp->getpointer();
		}
		if (flag == 0)
			return newloc;
	}
	if ((arr[i - 1][j] == 0) && (i - 1 > 0))
	{
		flag = 0;
		Location newloc(i - 1, j);
		Nord* temp = l.gethead();
		while (temp != nullptr)
		{
			if (temp->getpoint().getx() == newloc.getx() && temp->getpoint().gety() == newloc.gety())
			{
				flag = 1;
				break;
			}
			temp = temp->getpointer();
		}
		if (flag == 0)
			return newloc;
	}
	s.Pop();
	Location finloc = s.Pop();
	Location end (-1, 1);
	if (finloc.getx() == -1 && finloc.gety() == -1)
		return end;
	else
		return finloc;
}