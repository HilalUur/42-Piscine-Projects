int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    ft_rev_int_tab(tab, size);
    printf("%d,%d,%d,%d,%d,%d", tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
    return 0;
}

//[TR]Size'ımız küçük olduğu için teker teker aynı printf komutu içinde bunu verdim.//
//[TR] Daha büyük boyutlu size'lar için bir while döngüsü de oluşturabilirsiniz.//

//[Eng] I wrote at the same printf function for the size is small.
//[Eng] You can write a while loop for the larger size,too.
