int main()
{
    char str1[] = "123456";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("%d\n",ft_str_is_numeric(str1));
    printf("%d\n",ft_str_is_numeric(str2)); 
    printf("%d", ft_str_is_numeric(str3));
    return 0;
}
