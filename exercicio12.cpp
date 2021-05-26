int main ()
{
  int num;
  cout << " digite um numero qualquer: ";
  cin >> num;

  while (num!=-1)
    {
      if (num % 2 == 0)
	{
	  cout << " este numero eh par " << "\n";
	}
      else
	{
	  cout << " este numero eh impar " << "\n";
	}

      cout << " digite um numero qualquer: ";
      cin >> num;
    }
}
