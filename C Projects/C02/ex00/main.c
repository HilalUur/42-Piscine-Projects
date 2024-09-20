int main()
{
    char src[] = "Hello, World!";
    char dest[] = "Merhaba Dünya!";
    printf("%s", ft_strcpy(dest, src));
    return 0;
}

// [Tr] Fonksiyon dest'i döndüreceği için çıktı olarak "Hello, World!" yazacak.//
// [Tr] Çünkü src'yi dest'e kopyaladık.//

// [Eng] It wil write as a output "Hello, World!" because the function return the dest.//
// [Eng] Because, We copied the src to the dest.//
