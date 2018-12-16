#include "Queue.h"

int main()
{
  setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ��������� ���� �������\n\n";
  int n;
  cout << "������� ������ �������\n";
  cin >> n;
  try
  {
    TQueue<int> q(n);
    for (int i = 0; i < n; i++)
    {
      q.Put(i);
      cout << "�������� �������� " << i << endl;
    }

    while (!q.IsEmpty())
    {
      n = q.Get();
      cout << "����� " << n << endl;
    }
  }
  catch (MyException exp)
  {
    exp.Print();
  }
    return 0;
  }
