#include<stdio.h>
#include<math.h>
#include<string.h>

void welcome()
{

	printf("Hello World");
	getch();
}


void sum()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
	int  sum;
	sum=a+b;
	printf("Sum of the two number is %d",sum);
	getch();
}

int oddeven()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num%2 == 0)
        printf("\nIt's an even number.");
    else
        printf("\nIt's an odd number.");
    return 0;
}

int primecheck()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int i, count=0;
    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("\nIt's a prime number");
    else
        printf("\nIt's not a prime number");
    return 0;
}
void alphacheck()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("%c is an alphabet",ch);
	}
	else
	{
		printf("%c is not an alphabet",ch);
	}
	getch();
}
void vowel()
{
    char ch;
    gets(ch);
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' ||
	ch=='i' || ch=='I' || ch=='o' || ch=='O' ||
	ch=='u' || ch=='U')
	{
		printf("This is a vowel");
	}
	else
	{
		printf("This is not a vowel");
	}
	getch();
}
void leap()
{
    int yr;
    scanf("%d",&yr);
	if((yr%4==0) && (yr%100!=0))
	{
		printf("This is a Leap Year");
	}
	else if((yr%100==0) && (yr%400==0))
	{
		printf("This is a Leap Year");
	}
	else if(yr%400==0)
	{
		printf("This is a Leap Year");
	}
	else
	{
		printf("This is not a Leap Year");
	}
	getch();
}
void reversecheck()
{
    int num;
    scanf("%d",&num);
	int orig, rev=0, rem;
	orig=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(orig==rev)
	{
		printf("Reverse is equal to original");
	}
	else
	{
		printf("Reverse is not equal to original");
	}
	getch();
}
void calc()
{
    int a;int b;
    scanf("%d%d",&a,&b);
	int res;
	res=a+b;
	printf("\nAddition = %d",res);
	res=a-b;
	printf("\nSubtraction = %d",res);
	res=a*b;
	printf("\nMultiplication = %d",res);
	res=a/b;
	printf("\nDivision = %d",res);
	getch();
}

void calculator()
{
    float a;float b;
    scanf("%f %f",&a,&b);
	float  res;
	char choice, ch;
	do
	{
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");
		printf("5.Exit\n\n");
		printf("Enter Your Choice : ");
		scanf("%c",&choice);
		switch(choice)
		{
			case '1' :
				res=a+b;
				printf("Result = %f",res);
				break;
			case '2' :
				res=a-b;
				printf("Result = %f",res);
				break;
			case '3' :
				res=a*b;
				printf("Result = %f",res);
				break;
			case '4' :
				res=a/b;
				printf("Result = %f",res);
				break;
			case '5' : exit(0);
				break;
			default : printf("Wrong Choice..!!");
				break;
		}
		printf("\n------------------------------------\n");
	}while(choice!=5 && choice!=getchar());
}

void sofdigit()
{
    int num, rem=0, sum=0, temp;
    printf("enter the number:");
    temp = num;
    while(num>0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    sum = sum+temp;
    printf("Sum of all digit along with number = %d", sum);
}
void avgper()
{

	int mark[5], i;
	float sum=0;
	printf("Enter marks obtained in Physics, Chemistry, Maths, CS, English :");
	for(i=0; i<5; i++)
	{
		scanf("%d",&mark[i]);
		sum=sum+mark[i];
	}
	float avg=sum/5;
	float perc;
	perc=(sum/500)*100;
	printf("Average Marks = %f",avg);
	printf("\nPercentage = %f%",perc);
	getch();
}

void armean()
{

	int n, i, arr[50], sum=0;
	printf("How many number you want to enter ?\n");
	scanf("%d",&n);
	printf("Enter %d Numbers :",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	int armean=sum/n;
	printf("Arithmetic Mean = %d",armean);
	getch();
}


void grade()
{

	int mark[5], i;
	float sum=0,avg;
	printf("Enter marks obtained in 5 subjects :");
	for(i=0; i<5; i++)
	{
		scanf("%d",&mark[i]);
		sum=sum+mark[i];
	}
	avg=sum/5;
	printf("Your Grade is ");
	if(avg>80)
	{
		printf("A");
	}
	else if(avg>60 && avg<=80)
	{
		printf("B");
	}
	else if(avg>40 && avg<=60)
	{
		printf("C");
	}
	else
	{
		printf("D");
	}
	getch();
}

int table()
{
    int num;
    scanf("%d",&num);
    int i, tab;
    printf("\nTable of %d is:\n", num);
    for(i=1; i<=10; i++)
    {
        tab = num*i;
        printf("%d * %2d = %2d\n", num, i, tab);
    }
    getch();
    return 0;
}


int printprime()
{
    int i, count=0, j;
    printf("Prime numbers between 1 to 50 are:\n");
    for(i=1; i<=50; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               count++;
               break;
           }
        }
        if(count==0)
            printf("%d\n", i);
        count = 0;
    }
    getch();
    return 0;
}


void addn()
{

	int i, n, sum=0, num;
	printf("How many number you want to enter and add them ?");
	scanf("%d",&n);
	printf("Enter %d number :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("Sum of all the %d number is %d",n,sum);
	getch();
}

void swap()
{
    int a;int b;
    scanf("%d%d",&a,&b);
	int  temp;
	temp=a;
	a=b;
	b=temp;
	printf("Number interchanged successfully..!!\n");
	printf("A = %d\nB = %d",a,b);
	getch();
}


void rev()
{
    int num;
    scanf("%d",&num);
	int rev=0, rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Reverse = %d",rev);
	getch();
}

void occur()
{

	int countp=0, countn=0, countz=0, arr[10], i;
	printf("Enter 10 numbers : ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<10; i++)
	{
		if(arr[i]<0)
		{
			countn++;
		}
		else if(arr[i]==0)
		{
			countz++;
		}
		else
		{
			countp++;
		}
	}
	printf("Positive Numbers = %d\n",countp);
	printf("Negative Numbers = %d\n",countn);
	printf("Zero = %d",countz);
	getch();
}


void large()
{
    int a,b;
    printf("Enter teh value of a and b ");
    scanf("%d %d",&a,&b);
    int big;
    if(a>b)
        big=a;
    else
        big=b;
    printf("\nBiggest of the two number is: %d", big);
    getch();
    return 0;
}
int largest()
{
    int a, b, c, big;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        if(b>c)
            big = a;
        else
        {
            if(c>a)
                big = c;
            else
                big = a;
        }
    }
    else
    {
        if(b>c)
            big = b;
        else
            big = c;
    }
    printf("\nLargest number = %d", big);
    getch();
    return 0;
}


int fact()
{
    int num;
    scanf("%d",num);
    int i, fact=1;
    for(i=num; i>0; i--)
        fact = fact*i;
    printf("\nFactorial of %d = %d", num, fact);
    getch();
    return 0;
}

void lcmhcf()
{

	int a, b, x, y, t, hcf, lcm;
	printf("Enter two number : ");
	scanf("%d%d",&x, &y);
	a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	hcf=a;
	lcm=(x*y)/hcf;
	printf("HCF = %d\n",hcf);
	printf("LCM = %d",lcm);
	getch();
}
void rect()
{

	int len, bre, peri, area;
	printf("Enter length and breadth of the rectangle :");
	scanf("%d%d",&len,&bre);
	area=len*bre;
	peri=(2*len)+(2*bre);
	printf("Area = %d\tPerimeter=%d",area,peri);
	getch();
}

void circle()
{

	float r, area, circum;
	printf("Enter the radius of the circle :");
	scanf("%f",&r);
	area=3.14*r*r;
	circum=2*3.14*r;
	printf("Area of the circle = %f\nCircumference of the circle = %f\n",area,circum);
	getch();
}

void ftoc()
{

	float fah, cel;
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f",&fah);
	cel=(fah-32) / 1.8;
	printf("Temperature in Celsius = %f",cel);
	getch();
}

void ctof()
{

	float cen, fah;
	printf("Enter temperature in Celsius : ");
	scanf("%f",&cen);
	fah=(1.8 * cen) + 32;
	printf("\nTemperature in Fahrenheit = %f",fah);
	getch();
}

void ascii()
{

	char ch;
	int i;
	for(i=1; i<255; i++)
	{
		ch=i;
		printf("%d -> %c\t",i, ch);
	}
	getch();
}

int fibo()
{
    int N;
    scanf("%d",&N);
    int a=0, b=1, c,temp, i;
    for(i=1; i<=N; i++)
    {
        if(i==1)
            c = 0;
        else if(i==2 || i==3)
            c = 1;
        else
        {
            temp = a;
            a = b;
            b = c;
            c = a+b;
        }
        if(i==N)
            printf("%d", c);
        else
            printf("%d, ", c);
    }
    getch();
    return 0;
}

void pallin()
{

	int num, rem, orig, rev=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	orig=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10 + rem;
		num=num/10;
	}
	if(rev==orig)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	getch();
}
void pattern()
{
    int n,i,j,sum=0;
    printf("Enter the number for the pattern to be displayed 1+(1+2)+(1+2+3):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            sum+=j;
        }
    }
    printf("%d",sum);
    getch();
}
void sumarr()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    getch();
}
void check()
{
    int i,j,k,flag=0;
    char arr[20];
    char str[20];
    gets(arr);
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[j]==arr[i])&&(i==0||str[i-1]==' '))
        {
            k=i+1;
            j=j+1;
            for(;str[j]!='\0';j++)
            {
                if(arr[k]!=str[j])
                {
                    flag=1;
                    break;
                }
                k++;
            }
            if(flag==0)
            {
                printf("found");
                return;
            }
            j=0;
            flag=0;

        }
    }
    getch();
}
void dtob()
{
    float bnum=0.0;
    int rem,temp=1;
    int dnum;
    printf("Enter the value of decimal number");
    scanf("%d",&dnum);
    while(dnum!=0)
    {
        rem=dnum%2;
        dnum=dnum/2;
        bnum=bnum+rem*temp;
        temp=temp*10;
    }
    printf("%f",bnum);
    getch();
}

    void ssort()
    {

        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
    }

int sevindince()
{
    int arr[5],i;
    int sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr);
    }
      for( i=0;i<5;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}
int sodindice()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}

    void insert()
    {
        int array[10];
        int i, j, n, m, temp, key, pos;

        printf("Enter how many elements \n");
        scanf("%d", &n);
        printf("Enter the elements \n");

        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Input array elements are \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", array[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
             }
        }

        printf("Sorted list is \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", array[i]);
        }

        printf("Enter the element to be inserted \n");
        scanf("%d", &key);

        for (i = 0; i < n; i++)
        {
            if (key < array[i])
            {
                pos = i;
                break;
            }
            if (key > array[n-1])
            {
                pos = n;
                break;
            }
        }
        if (pos != n)
        {
            m = n - pos + 1 ;
            for (i = 0; i <= m; i++)
            {
                array[n - i + 2] = array[n - i + 1] ;
            }
        }

        array[pos] = key;

        printf("Final list is \n");
        for (i = 0; i < n + 1; i++)
        {
            printf("%d\n", array[i]);
        }
    }
void deletion()
    {
        int vectorx[10];
        int i, n, pos, element, found = 0;

        printf("Enter how many elements\n");
        scanf("%d", &n);
        printf("Enter the elements\n");

        for (i = 0; i < n; i++)
        {
            scanf("%d", &vectorx[i]);
        }

        printf("Input array elements are\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", vectorx[i]);
        }

        printf("Enter the element to be deleted\n");
        scanf("%d", &element);

        for (i = 0; i < n; i++)
        {
            if (vectorx[i] == element)
            {
                found = 1;
                pos = i;
                break;
            }
        }

        if (found == 1)
        {
            for (i = pos; i <  n - 1; i++)
            {
                vectorx[i] = vectorx[i + 1];
            }

            printf("The resultant vector is \n");
            for (i = 0; i < n - 1; i++)
            {
                printf("%d\n", vectorx[i]);
            }

        }
        else
            printf("Element %d is not found in the vector\n", element);
    }

void diamond()
{

    int n, c, k, space=1;
    printf("Enter number of rows (for diamond dimension) : ");
    scanf("%d", &n);
    space=n-1;
    for (k=1; k<=n; k++)
    {
	for(c=1; c<=space; c++)
	{
		printf(" ");
	}
	space--;
	for(c=1; c<=(2*k-1); c++)
	{
		printf("*");
	}
	printf("\n");
    }
    space=1;
    for(k=1; k<=(n-1); k++)
    {
	for(c=1; c<=space; c++)
	{
		printf(" ");
	}
	space++;
	for(c=1 ; c<=(2*(n-k)-1); c++)
	{
		printf("*");
	}
	printf("\n");
    }
}
void binarys()
{

	int n, i, arr[50], search, first, last, middle;
	printf("Enter total number of elements :");
	scanf("%d",&n);
	printf("Enter %d number :", n);
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to find :");
	scanf("%d", &search);
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			printf("%d found at location %d\n", search, middle+1);
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		printf("Not found! %d is not present in the list.",search);
	}
}


void bubble()
{
    int arr[50], i, j, n, temp;
    printf("Enter total number of elements to store: ");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nSorting array using bubble sort technique...\n");
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("All Array elements sorted successfully!\n");
    printf("Array elements in ascending order:\n\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
}
void selection()
{
    int size, arr[50], i, j, temp, small, count=0, index;
    printf("Enter size for Array: ");
    scanf("%d", &size);
    printf("Enter %d array elements: ", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<(size-1); i++)
    {
        small = arr[i];
        for(j=(i+1); j<size; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                count++;
                index = j;
            }
        }
        if(count!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
        count=0;
    }
    printf("\nNow the Array after sorting is:\n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
}

void mergeA()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
}

void addmat()
{
    int mat1[3][3], mat2[3][3], i, j, mat3[3][3];
    printf("Enter 3*3 matrix 1 elements :");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Enter 3*3 matrix 2 elements :");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&mat2[i][j]);
    }
    printf("\nAdding the two matrix.....");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
    printf("\nBoth matrix added successfully!");
    printf("\nHere is the new matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ",mat3[i][j]);
        printf("\n");
    }
}
void submat()
{

	int arr1[3][3], arr2[3][3], arr3[3][3], sub, i, j;
	printf("Enter 3*3 Array 1 Elements : ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter 3*3 Array 2 Elements : ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("Subtracting array (array1-array2) ... \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			arr3[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	printf("Result of Array1 - Array2 is :\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
}

void transpose()
{

	int arr[3][3], i, j, arrt[3][3];
	printf("Enter 3*3 Array Elements : ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Transposing Array...\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			arrt[i][j]=arr[j][i];
		}
	}
	printf("Transpose of the Matrix is :\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",arrt[i][j]);
		}
		printf("\n");
	}

}

void multmat()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, i, j, k;
    printf("Enter first 3*3 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter second 3*3 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t", mat3[i][j]);
        printf("\n");
    }
}

void regards()
{
    char str[20];
    printf("Enter your first name: ");
    scanf("%s", str);
    printf("Hello, %s", str);
}
// 51 Write a program in C to find and print the length of any given string
// using library function

int length()
{
    char str[20];
    int len;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    printf("\nLength of the string = %d", len);

}

void compare()
{

	char str1[100], str2[100];
	printf("Enter first string : ");
	gets(str1);
	printf("Enter second string : ");
	gets(str2);
	if(strcmp(str1, str2)==0)
	{
		printf("Both the strings are equal");
	}
	else
	{
		printf("Both the strings are not equal");
	}
}

void copy()
{
    char str1[20], str2[20];
    printf("Enter the string: ");
    gets(str1);
    printf("\nString 1 = %s", str1);
    strcpy(str2, str1);
    printf("\nString 2 = %s", str2);
}

void reversal()
{
    char str[50], i, j, count=0;
    printf("Enter any string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
        count++;
    for(j=(count-1); j>=0; j--)
        printf("%c", str[j]);

}

void concatenate()
{
    char str1[50], str2[50];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("\nString after concatenation is:\n%s", str1);

}

void delvowel()
{

	char str[20];
	int len, i, j;
	printf("Enter a string : ");
	gets(str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
		str[i]=='o' || str[i]=='u' || str[i]=='A' ||
		str[i]=='E' || str[i]=='I' || str[i]=='O' ||
		str[i]=='U')
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
	}
	printf("After deleting the vowels, the string will be : %s",str);
}

void freqchar()
{
    int i, count=0;
    char str[100], ch;
    printf("Enter the String: ");
    gets(str);
    printf("Enter any character (present in string) to find its frequency: ");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(ch==str[i])
            count++;
    }
    printf("\nFrequency of %c = %d", ch, count);
    printf("\n\n%c occurs %d times in %s", ch, count, str);
}

void countword()
{

	char strs[100], countw=0, strw[15], i;
	printf("Write a sentence : ");
	gets(strs);
	int len=strlen(strs);
	for(i=0; i<len; i++)
	{
		if(strs[i]==' ')
		{
			countw++;
		}
	}
	printf("Total number of words in the sentence is %d",countw+1);
}

void remspace()
{

	char str[80];
	int i=0, len, j;
	printf("Enter the String : ");
	gets(str);
	len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]==' ')
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
	}
	printf("String after removing spaces = %s", str);
}

void uptolow()
{

	char ch;
	printf("Enter a character in uppercase : ");
	scanf("%c",&ch);
	ch=ch+32;
	printf("character in lowercase = %c",ch);
}
void lowup()                    //1
 {
     int i;
     char str[20];
     printf("\nEnter the string");
     gets(str);
     for(i=0;str[i]!='\0';i++)
     {
          if(str[i]>=65&&str[i]<=90)
               str[i]=str[i]+32;
          else if(str[i]>=97&&str[i]<=122)
               str[i]=str[i]-32;
     }
     printf("%s",str);
}
void revstr()            //2
{
     int i;
    char str[20];
     printf("\nEnter the string");
     gets(str);
     for(i=0;str[i]!='\0';i++)
     for(i=i-1;i>=0;i--)
          printf("%c",str[i]);
     return;
}
void concat()           //3
{
     int i,j;
     char str1[40],str2[20];
     printf("Enter the main string:");
     gets(str1);
     printf("\nEnter the string to concatinate");
     gets(str2);
     for(i=0;str1[i]!='\0';i++);
     for(j=0;str2[j]!='\0';j++)
     {
          str1[i]=str2[j];
          i++;
     }
     str1[i]='\0';
     puts(str1);
     return;
}
void swapa()                    //4
{
     int i,j,num,n,a[4];
     n=4;
     printf("Enter the array:");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     printf("\nEnter the number of times for swapping 1 or 2 or 3:");
     scanf("%d",&num);
      for(i=0;i<num;i++)
     {
          int temp=a[0];
          for(j=0;j<3;j++)
               a[j]=a[j+1];
          a[j]=temp;

     }
     printf("\nArray after swapping:");
     for(i=0;i<n;i++)
     {
          printf("%d ",a[i]);
     }

}
void len()             //5
{
     int i;
     char str[20];
     printf("Enter the string:");
     gets(str);
     for(i=0;str[i]!='\0';i++);
     printf("\nThe length of the string is:%d",i);
     return;
}
void pals()                  //6
{
     int i,flag=0;
     char str[20];
     printf("Enter the string:");
     gets(str);
     int l=strlen(str);
     for(i=0;i<l;i++)
     {
          if(str[i]!=str[l-1])
          {
               flag=1;
               break;
          }
          l--;
     }
     if(flag==0)
          printf("\npallindrome");
     else
          printf("\nnot pallindrome");
}


void fibon()                   //7
{
     int n,first=0,second=1,next,c;
     printf("Enter the limit upto which the numbers are to be displayed:");
     scanf("%d",&n);
     printf("\n");
     for(c=0;c<n;c++)
     {
          if(c<=1)
               next=c;
          else
          {
               next=first+second;
               first=second;
               second=next;
          }
          printf("%d ",next);
     }
}
void freqec()      //8
{
     int i,j,k,l,len,m,flag,c=0;
     char str[30];
     gets(str);
     for(i=0;str[i]!='\0';i++)
     {
          flag=0;
          c=1;
          for(j=i-1;j>=0;j--)
          {
               if(str[i]==str[j])
               {
                    flag=1;
                    break;
               }
          }
          if(flag==0)
          {
               for(j=i+1;str[j]!='\0';j++)
               {
                    if(str[i]==str[j])
                         c++;
               }
               printf("%c comes %d times\n",str[i],c);
          }
     }
}

void pridiag()       //9
{
     int i,j;
     int mat[3][3];
     printf("Enter the elements of 3*3 matrix");
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
               scanf("%d",&mat[i][j]);
     }
      for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
          {
               if(i==j)
                    printf("%d",mat[i][j]);
          }
          }

}
void secdiag()          //10
{
     int i,j;
     int mat[3][3];
     printf("Enter the elements of 3*3 matrix");
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
               scanf("%d",&mat[i][j]);
     }
      for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
          {
               if(i+j==2)
                    printf("%d",mat[i][j]);
          }
     }

}
void uptri()          //11
{
     int i,j;
     int mat[3][3];
     printf("Enter the elements of 3*3 matrix");
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
               scanf("%d",&mat[i][j]);
     }
      for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
          {
               if((i+j)<=2)
                    printf("%d",mat[i][j]);
          }
     }

}
void lowtri()          //12
{
     int i,j;
     int mat[3][3];
     printf("Enter the elements of 3*3 matrix");
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
               scanf("%d",&mat[i][j]);
     }
      for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
          {
               if((i+j)>=2)
                    printf("%d",mat[i][j]);
          }
     }

}
void spridiag()       //13
{
     int i,j,sum=0;
     int mat[3][3];
     printf("Enter the elements of 3*3 matrix");
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
               scanf("%d",&mat[i][j]);
     }
      for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
          {
               if(i==j)
                    sum+=mat[i][j];
          }
          }
          printf("\nThe sum of the primary diagonal is %d",sum);

}
void sumrow()       //14
{
     int i,j,sum=0;
     int mat[3][3];
     printf("Enter the elements of 3*3 matrix");
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
               scanf("%d",&mat[i][j]);
     }
      for(i=0;i<3;i++)
     {
          sum=0;
          for(j=0;j<3;j++)
          {
                    sum+=mat[i][j];
          }
          printf("\nThe sum of row %d is %d",i+1,sum);
          }

}
void smallrow()       //15
{
     int i,j,small;
     int mat[3][3];
     printf("Enter the elements of 3*3 matrix");
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
               scanf("%d",&mat[i][j]);
     }
      for(i=0;i<3;i++)
     {
          small=mat[i][0];
          for(j=1;j<3;j++)
          {
                    if(small>mat[i][j])
                         small=mat[i][j];
          }
          printf("\nThe smallest element of row %d is %d",i+1,small);
          }

}
void largerow()       //16
{
     int i,j,large;
     int mat[3][3];
     printf("Enter the elements of 3*3 matrix");
     for(i=0;i<3;i++)
     {
          for(j=0;j<3;j++)
               scanf("%d",&mat[i][j]);
     }
      for(i=0;i<3;i++)
     {
          large=mat[i][0];
          for(j=1;j<3;j++)
          {
                    if(large>mat[i][j])
                         large=mat[i][j];
          }
          printf("\nThe largest element of row %d is %d",i+1,large);
          }

}
void deldup()     //17
{
     int i,j,k,n=8;
     int arr[n];
     printf("Enter the elements in an array of size 8:");
     for(i=0;i<n;i++)
          scanf("%d",&arr[i]);
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(arr[j]==arr[i])
               {
                    k=j;
                    for(;k<n;k++)
                         arr[k]=arr[k+1];
                    j--;
                    n--;
               }
          }
     }
     printf("\nThe array after deletion of duplicates is:");
     for(i=0;i<n;i++)
          printf("%d ",arr[i]);
     return;
}

void evoz()     //18
{
     int num;
     printf("Enter the number:");
     scanf("%d",&num);
     if(num>0)
          printf("\nThe number is positive");
     else if(num<0)
          printf("\nThe number is negative");
     else
          printf("\nThe number is zero");
}
void baspay()
{

float bpay,hre,ta,pa;
printf("enter basic pay ");
scanf("%f",&bpay);
hre=.1*bpay;
ta=.05*bpay;
pa=.15*bpay;
float netsal=(bpay-hre-ta-pa);
printf("net salary is %f",netsal);
}
void delpos()
{
char a[30];
int i,j,n,pos;
printf("enter the string:");
gets(a);
printf("\n enter the number of characters you want to delete:");
scanf("%d",&n);
printf("\n enter the position of the element you want to delete:");
scanf("%d",&pos);
for(j=0;j<n;j++)
{
for(i=pos-1;a[i]!='\0';i++)
{
a[i]=a[i+1];
}
}
puts(a);
}
void pat1()
{
    char a[30],b[30];
int i,c,d;
printf("enter the first string:");
gets(a);
printf("\n enter the second string:");
gets(b);
c=strlen(a);
d=strlen(b);
if(c==d)
{
for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==b[i])
          {
             printf("\n the strings are equal");
          }
       else
               printf("the string are not equal");
     }
}
}
void pat2()
{
    int i,n,j;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            printf("%d",j);
        printf("\n");

    }

}
 void pat3()
{
    float i,j,n,sign=1,sum=0;
    printf("Enter the value of n:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
        {
            sum+=sign/pow(i,i);
            sign=-sign;
        }
        printf("%f",sum);
}
void pat4()
{

    int i,n,sum=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        sum+=i*(i-1);
    }
    printf("%d",sum);
}
void pat5()
{

    int i,n,sum=0,sign=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=sign*pow(i,2);
        sign=-sign;
    }
    printf("%d",sum);
}
void pat6()
{

    int n,i;
    printf("Enter the number upto which numbers are to be printed:");
    scanf("%d",&n);

    for(i=1;i<=n;i+=4)
    {
        printf("%d ",i);
    }

}
void pat7()
{

    int n,i,j;
    printf("Enter the number upto which numbers are to be printed:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
void pat8()
{

    int n,i,j;
    printf("Enter the number upto which numbers are to be printed:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("1");
        }
         printf("\n");

    }

}
void prime()
{
    int i,j,c,n;
    printf("Enter the number upto which the numbers are to be displayed:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
            printf("%d ",i);
    }
}
void squarert()
{
int x,y,d,a,b,c;
printf("Enter the value");
scanf("%d%d%d",&a,&b,&c);
d=pow(b,2)-4*a*c;
   printf("\nRoots are:");
   x=(-b+sqrt(d))/2*a;
   y=(-b-sqrt(d))/2*a;
   printf("%d,%d",&x,&y);


}
void swapping()
{

int num1,num2;
printf("Enter first number x");
scanf("%d",&num1);
printf("Enter second number y");
scanf("%d",&num2);
num1=num1-num2;
num2=num1+num2;
num1=num2-num1;
printf("After swapping first number x= %d,second number= %d",num1,num2);


}
void word()
{
    char a[30];
int i,s=0;
printf("enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
s++;
}
printf("\n the no. of words in string are:%d",s+1);
}
void main()
 {
  int choice,ch,ch1,ch2,ch3;
  printf("************************************************************************************************************\n");
  printf("                             WELCOME   TO  MY  100   PROGRAM    EVENT                                 \n");
  printf("************************************************************************************************************\n");

  printf("\n                                                                                  \n");
  printf("           WHICH CATGORISE OF PROGRAM WOULD TO EXPERIENCE                            \n");

  printf("\n                                                                                          \n");
  printf("\n                                                                                           \n ");

  printf("                         1. For the BASIC PROGRAMS                                             \n");
  printf("                         2. For the CONDITIONAL PROGRAMS                                        \n");
  printf("                         3. For the ARRAY PROGRAMS                                              \n");
  printf("                         4. For the STRING RELATED PROGRAMS                                      \n");

  printf("\n                                                                                          \n");
  printf("\n                                                                                            \n ");

printf("                                 ENTER YOUR CHOICES:                                              \n");
  scanf("%d",&choice);

  switch(choice)
  {
  case 1:

  printf("                                           1)Print Hello World                                       \n");
  printf("                                           2)Add Two Numbers                                         \n");
  printf("                                           3)whether the given number is a prime or not              \n");
  printf("                                           4)Check Alphabet or Not                                   \n");
  printf("                                           5)Check Alphabet or Not                                   \n");
  printf("                                           6)Check Vowel or Not                                      \n");
  printf("                                           7)Check Leap Year or No                                   \n");
  printf("                                           8)Check Reverse is Equal to its Original or Not           \n");
  printf("                                           9)Addition, Subtraction, Multiplication, and Division     \n");
  printf("                                           10)Simple Calculator                                      \n");
  printf("                                           11)sum of all digit of that number along with the number itself \n");
  printf("                                           12)Calculate Average and Percentage Marks                 \n");
  printf("                                           13)Calculate Arithmetic Mean                               \n");
  printf("                                           14)Calculate Grade of Student                                \n");
  printf("                                           15)print the table of that number                                   \n");
  printf("                                           16)print all prime number from 1 to 50                          \n");
  printf("                                           17)Add n Numbers                             \n");

    printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");



  printf("                                 ENTER YOUR CHOICE OF PROGRAM:                                          \n");
  scanf("%d",&ch);


  switch(ch)
  {
      case 1:
          welcome();
          break;
      case 2:
          sum();
          break;
      case 3:
          oddeven();
          break;
      case 4:
          primecheck();
          break;
      case 5:
          alphacheck();
          break;
      case 6:
          vowel();
          break;
      case 7:
          leap();
          break;
      case 8:
          reversecheck();
          break;
      case 9:
          calc();
          break;
      case 10:
          calculator();
          break;
      case 11:
          sofdigit();
          break;
      case 12:
          avgper();
          break;
      case 13:
          armean();
          break;
      case 14:
          grade();
          break;
      case 15:
          table();
          break;
      case 16:
          printprime();
          break;
      case 17:
          addn();
          break;

  }
  break;

      case 2:

  printf("                                           1)Interchange Two Numbers                                    \n");
  printf("                                           2)Reverse Number                                   \n");
  printf("                                           3)Count Occurrence of Positive, Zero, and Negative Numbers                             \n");
  printf("                                           4)find largest or greatest between any two                               \n");
  printf("                                           5)largest of any given three numbers by user                                   \n");
  printf("                                           6)calculate and print the factorial of any given number                                   \n");
  printf("                                           7)Find HCF and LCM of Two Numbers                                   \n");
  printf("                                           8)area and perimeter of rectangle                                \n");
  printf("                                           9)Calculate Area and Circumference of Circle                                \n");
  printf("                                           10)Fahrenheit to Centigrade Conversion                                 \n");
  printf("                                           11)Centigrade to Fahrenheit Conversion                                   \n");
  printf("                                           12)Print ASCII Values of Characters                                \n");
  printf("                                           13)Fibonacci series                                   \n");
  printf("                                           14)Check Palindrome or Not                       \n");
  printf("                                           15)check if original number is equal to its reverse                                   \n");
  printf("                                           16) 1+(1+2)+(1+2+3).....                              \n");


    printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");



  printf("                                 ENTER YOUR CHOICE OF PROGRAM:                                          \n");
  scanf("%d",&ch1);



  switch(ch1)
  {
      case 1:
          swap();
          break;
      case 2:
          rev();
          break;
      case 3:
          occur();
          break;
      case 4:
          large();
          break;
      case 5:
          largest();
          break;
      case 6:
          fact();
          break;
      case 7:
          lcmhcf();
          break;
      case 8:
          rect();
          break;
      case 9:
          circle();
          break;
      case 10:
          ftoc();
          break;
      case 11:
          ctof();
          break;
      case 12:
          ascii();
          break;
      case 13:
          fibo();
          break;
      case 14:
          pallin();
          break;
      case 15:
          pattern();
          break;
      case 16:
          sumarr();
          break;

  }
  break;
      case 3:
  printf("                                           1)sum of all values in an array                                 \n");
  printf("                                           2)check sub string is present in string or not                              \n");
  printf("                                           3)convert decimal number to binary equivalent                                   \n");
  printf("                                           4)selection sort                                  \n");
  printf("                                           5)sum of elements of even indices                            \n");
  printf("                                           6)sum of odd indices                                   \n");
  printf("                                           7)delete the specified integer from the list                               \n");
  printf("                                           8)Diamond Pattern                                 \n");
  printf("                                           9)Binary Search                                   \n");
  printf("                                           10)Bubble Sort                             \n");
  printf("                                           11)Selection sort                                \n");
  printf("                                           12)merge any two arrays                                   \n");
  printf("                                           13)add any two 3*3 matrix.                                   \n");
  printf("                                           14)Subtract Matrices                                   \n");
  printf("                                           15)Transpose Matrix                                   \n");
  printf("                                           16)multiply two 3*3 matrices                             \n");

    printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");



  printf("                                 ENTER YOUR CHOICE OF PROGRAM:                                          \n");
  scanf("%d",&ch2);



  switch(ch2)
         {
      case 1:
          check();
          break;
      case 2:
          dtob();
          break;
      case 3:
          ssort();
          break;
      case 4:
          sevindince();
          break;
      case 5:
          sodindice();
          break;
      case 6:
          insert();
          break;
      case 7:
          deletion();
          break;
      case 8:
          diamond();
          break;
      case 9:
          binarys();
          break;
      case 10:
          bubble();
          break;
      case 11:
          selection();
          break;
      case 12:
          mergeA();
          break;
      case 13:
          addmat();
          break;
      case 14:
          submat();
          break;
      case 15:
          transpose();
          break;
      case 16:
          multmat();
          break;

         }


      case 4:
  printf("                                           1)print string back on the output screen                                  \n");
  printf("                                           2)find and print the length of any given string                                 \n");
  printf("                                           3)Compare Two Strings                                \n");
  printf("                                           4)copy string                                 \n");
  printf("                                           5)print given string in reverse order without reversing it                                  \n");
  printf("                                           6)concatenate strings                            \n");
  printf("                                           7)Delete Vowels from String                                  \n");
  printf("                                           8)Convert Uppercase Character to Lowercase                                  \n");
  printf("                                           9)find frequency of any given character                              \n");
  printf("                                           10)Count Occurrence of Words in Sentence                               \n");
  printf("                                           11)Remove Spaces from String                                   \n");
  printf("                                           12)print lower case character to uppercase                                   \n");
  printf("                                           13)string reversal                                   \n");
  printf("                                           14)swapping n number of times                               \n");
  printf("                                           15)string length                               \n");
  printf("                                           16)pallindrome                                   \n");
  printf("                                           17)fibonacci                                   \n");
  printf("                                           18)frequency of caharacter                                \n");
  printf("                                           19)primary diagonal                                   \n");
  printf("                                           20)secondary diagonal                                   \n");
  printf("                                           21)upper triangle                             \n");
  printf("                                           22)lower triangle                                \n");
  printf("                                           23)sum of primary diagonal                                  \n");
  printf("                                           24)sum of row                            \n");
  printf("                                           25)smallest element of row                                   \n");
  printf("                                           26)largest element off row                                  \n");
  printf("                                           27)delete duplicates                                   \n");
  printf("                                           28)check for positive negative and zero                                  \n");
  printf("                                           29)basic pay                                   \n");
  printf("                                           30)delete from particular position                                   \n");
  printf("                                           31)check if strings are equal                              \n");
  printf("                                           32)pattern 1                                 \n");
  printf("                                           33)pattern 2                                   \n");
  printf("                                           34)pattern 3                               \n");
  printf("                                           35)pattern 4                              \n");
  printf("                                           36)pattern 5                                  \n");
  printf("                                           37)pattern 6                               \n");
  printf("                                           38)pattern 7                                  \n");
  printf("                                           39)pattern 8                               \n");
  printf("                                           40)prime check                                  \n");
  printf("                                           41)square root                                   \n");
  printf("                                           42)swapping                                  \n");
  printf("                                           43)no. of words in a string                                   \n");

    printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");



  printf("                                 ENTER YOUR CHOICE OF PROGRAM:                                          \n");
  scanf("%d",&ch3);
  switch(ch3)
  {
      case 1:
          regards();
          break;
      case 2:
          length();
          break;
      case 3:
          compare();
          break;
      case 4:
          copy();
          break;
      case 5:
          reversal();
          break;
      case 6:
          concatenate();
          break;
      case 7:
          delvowel();
          break;
      case 8:
          uptolow();
          break;
      case 9:
          freqchar();
          break;
      case 10:
          countword();
          break;
      case 11:
          remspace();
          break;
      case 12:
          lowup();
          break;
      case 13:
          revstr();
          break;
      case 14:
          swapa();
          break;
      case 15:
          len();
          break;
      case 16:
          pals();
          break;
      case 17:
          fibon();
          break;
      case 18:
          freqec();
          break;
      case 19:
          pridiag();
          break;
      case 20:
          secdiag();
          break;
      case 21:
          uptri();
          break;
      case 22:
          break;
          lowtri();
      case 23:
          spridiag();
          break;
      case 24:
          sumrow();
          break;
      case 25:
          smallrow();
          break;
      case 26:
          largerow();
          break;
      case 27:
          deldup();
          break;
      case 28:
          evoz();
          break;
      case 29:
          baspay();
          break;
      case 30:
          delpos();
          break;
      case 31:
          pat1();
          break;
      case 32:
          pat2();
          break;
      case 33:
          pat3();
          break;
      case 34:
          pat4();
          break;
      case 35:
          pat5();
          break;
      case 36:
          pat6();
          break;
      case 37:
          pat7();
          break;
      case 38:
          pat8();
          break;
      case 39:
          break;
      case 40:
          prime();
          break;
      case 41:
          squarert();
          break;
      case 42:
          swapping();
          break;
      case 43:
          word();
          break;

  }

break;


  }

   printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");




 printf("\n*******************************************************************************\n");
 printf("                                 THANK YOU                                     \n");
 printf("*********************************************************************************");

 printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");printf("\n                                                                                          \n");
    printf("\n                                                                                            \n ");printf("\n                                                                                          \n");

printf("        DO YOU WANT TO CONTINUE THE MORE FUN WITH MY PROGRAMS                                      \n");
printf("                    1 FOR YES  /   0 FOR NO                                                         \n");

printf("\n                                                                                          \n");
printf("\n                                                                                          \n");
printf("        PLEASE ENTER YOUR CHOICE:                                                            \n");
getchar();
getchar();
int cho;
scanf("%d",cho);
if(cho==1)
{
    main();
}

else if(cho==0)
{
    return 0;
}

else
    printf("   WORNG CHOICE PLEASE R-ENTER YOUR CHOICE  ");


 getch();
}




