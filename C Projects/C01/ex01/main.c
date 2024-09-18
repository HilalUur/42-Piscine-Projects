int	main(void)
{
	int number;
	int *ptr1 = &number;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
  number = 0;
  ft_ultimate_ft(&ptr8);
  printf("%d", number);
	return (0);
}





  
