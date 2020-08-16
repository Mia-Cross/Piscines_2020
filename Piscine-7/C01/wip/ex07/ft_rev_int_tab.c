void ft_swap(int *a, int *b)
{
  int x;

  x = *a;
  *a = *b;
  *b = x;
}

void ft_rev_int_tab(int *tab, int size)
{
  int i;

  i = 0;
  while (i < (size / 2))
  {
    ft_swap(&tab[i], &tab[size - i - 1]);
    i++;
  }
}
