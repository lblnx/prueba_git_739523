int main()
{
    int n = 4;
    for(int i = 1; i<= n; i++)
    {
        for(int space=n-1; space>=i; space--)
            printf(" ");
            
        for(int j = 1; j<=i; j++)
            printf("* ");
            
        printf("\n");
    }
}