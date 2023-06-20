#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define DEBUG 0
/**
 * This is one file with many bits of code
 * I made this while on a study session on arrays
 * since I didn't want to be creating a new file
 * every time to test the code given inside the text
 * book. I've therefore included the libraries and
 * defined any macros once for every program inside the
 * file. The other programs are commented out so as not
 * to affect the compilation of the next programs
 */

//void multiply(int *num1, int *num2);
//int main(void)
//{
  //  int array[4] = {5, 7, 10, 12};
  //  int i;//

   // multiply(&array[1], &array[2]);
   // for (i = 0; i < 4; i++)
       // printf("%i ", array[i]);
    //printf("\n");
//}
//void multiply(int *num1, int *num2)
//{
 //   *num1 *= *num2;
  //  *num2 *= *num1;
//}
//double get_percentage(int number, int sum);
//int main(void)
//{
   // int n[10], i, sum;
    //double percentage;

    //sum = 0;
    //printf("Enter the elements> ");
    //for (i = 0; i < 10; i++)
   // {
       // scanf("%i", &n[i]);
       // sum += n[i];
   // }
    //printf("n           percent\n");
    //printf("           of total\n");
    //printf("--------------------\n");
   //for (i = 0; i < 10; i++)
    //{
        //percentage = get_percentage(n[i], sum);
        //printf("%3i%6c%9.2f\n", n[i], ' ', percentage);
    //}
//}
//double get_percentage(int number, int sum)
//{
    //return ((double) number / sum) * 100.0;
//}

//void fill_array(int list[], int n, int in_value);
//int main(void)
//{
   // int array[30];
   // int n;
    //int in_value;
    //int i;

    //n = 30;
    //in_value = 29;
    //fill_array(array, 30, 29);
   // for (i = 0; i < n; i++)
       // printf("%i ", array[i]);

    //return (0);
//}
//void fill_array(int *list, int n, int in_value)
//{
  //  int i;

 //   for (i = 0; i < n; i++)
 //       list[i] = in_value;
//}
// int get_max(const int array[], int n);
// int main(void)
// {
//    int array[5] = {1, 2, 3, 4, 5};
//    int cur_large;

//    cur_large = get_max(array, 5);
//     printf("%i", cur_large);
// }
// int get_max(const int array[], int n)
// {
//     int cur_large, i;

//     cur_large = 0;
//     for (i = 0; i < n; i++)
//         if (array[i] > array[cur_large])
//             cur_large = i;
//     return (array[cur_large]);
// }

// void sum_array(const int ar1[], const int ar2[], int arsum[], int n);
// int main(void)
// {
//     int ar1[5] = {1, 2, 3, 4, 5};
//     int ar2[5] = {1, 2, 3, 4, 5};
//     int arsum[5];
//     int i;

//     sum_array(ar1, ar2, arsum, 5);
//     for (i = 0; i < 5; i++)
//         printf("%i ", arsum[i]);

// }
// void sum_array(const int ar1[], const int ar2[], int arsum[], int n)
// {
//     int i;

//     for (i = 0; i < n; i++)
//         arsum[i] = ar1[i] + ar2[i];
// }
// #define SENTINEL -0.1
// #define A_SIZE 20
// void fill_to_sentinel(int dbl_max, double sentinel, double dbl_arr[], int *dbl_sizep);
// int main(void)
// {
//     double arr[A_SIZE];
//     int in_use, i;

//     printf("Enter values to print (-0.1 to exit) >> ");
//     fill_to_sentinel(A_SIZE, SENTINEL, arr, &in_use);
//     printf("List of data values\n");
//     for (i = 0; i < in_use; i++)
//         printf("%13.3f\n", arr[i]);
//     return (0);
// }
// void fill_to_sentinel(int dbl_max, double sentinel, double dbl_arr[], int *dbl_sizep)
// {
//     int status, i;
//     double data;

//     i = 0;
//     status = scanf("%lf", &data);
//     while(data != sentinel && i < dbl_max && status == 1) //check for correct scanf return value, array limit and sentinel
//     {
//         dbl_arr[i] = data;
//         i++;
//         status =scanf("%lf", &data); // store the return value of scanf in status
//     }
//     //Error messages
//     if (status != 1)
//     {
//         printf("\n*** Error in data format ***\n");
//         printf("*** Using first %i data values ***\n", i);
//     }
//     else if (data != sentinel)
//     {
//         printf("\n*** Error: too much data before sentinel ***\n");
//         printf("*** Using first %i data  values ***\n", i);
//     }
//     *dbl_sizep = i; // the number of elements that were entered before the sentinel
// }
// 


// void multiply_values(int multi[], int values);
// int get_values(int multi[], int n);
// int numbers_to_multiply(int values);
// int main(void)
// {
//     int multi[100], n, values, i;

//     printf("Enter the number of values you wish to multiply >> ");
//     scanf("%i", &n);
//     get_values(multi, n);
//     do{
//         values = numbers_to_multiply(values);
//         if (values > n)
//             printf("Error. You cannot exceed the size of the array\n");
//     }while(values > n);
//     multiply_values(multi, values);
//     for (i = 0; i < n; i++)
//         printf("%i ", multi[i]);

// }

// void multiply_values(int multi[], int values)
// {
//     int i;

//     i = 0;
//     while(i < values)
//     {
//         multi[i++] *= multi[++i];
//     }
// }
// int get_values(int multi[], int n)
// {
//     int i, status;
//     char discard;
//     printf("Enter your values\n");
//     for (i = 0; i < n; i++)
//     {
//         status = scanf("%i", &multi[i]);
//         if (status < 1)
//         {
//             printf("Error! Wrong input format\n");
//             i -= 1;
//         }
//         do{
//             scanf("%c", &discard);
//         }while(discard != '\n');
//     }
// }
// int numbers_to_multiply(int values)
// {
//     printf("How many values do you wish to multipy?\n");
//     printf("This value must be less or equal to the number of\n");
//     printf(" integers you entered\n");
//     printf("Number of values >> ");
//     scanf("%i", &values);
//     return (values);
// }
// void abs_value(double array[], int n);
// int main(void)
// {
//     double numbers[10] = {-4.8, 4.5, 9.9, 3.5, -7.0, -6.3, -9.32, -199.99, 2, 3.36};
//     abs_value(numbers, 10);
//     return (0);
// }
// void abs_value(double array[], int n)
// {
//     int i;
//     printf("      x            |x|\n");
//     for (i = 0; i < n; i++)
//         printf("%9.2f%4c%9.2f\n", array[i], ' ', fabs(array[i]));

// }

// void negate_dbl(double array[], int n);
// int main(void)
// {
//     int n, status, error, i;
//     double numbers[10] = {-4.8, 4.5, 9.9, 3.5, -7.0, -6.3, -9.32, -199.99, 2, 3.36};

//     do{
//         error = 0;
//         printf("How many numbers do you wish to negate? >> ");
//         status = scanf("%i", &n);
//         if (status != 1)
//         {
//             error = 1;
//             printf("Invalid input format. Please try again\n");
//         }
//         else if (n < 1)
//         {
//             error = 1;
//             printf("Invalid number of elements.\n");
//         }

//     }while (error);
//     negate_dbl(numbers, n);

//     for (i = 0; i < 10; i++)
//         printf("%.2f ", numbers[i]);
// }
// void negate_dbl(double array[], int n)
// {
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         array[i] *= (double) -1;
//     }
// }
// #define ARR_SIZE 5
// void sum_ar(const int ar1[], const int ar2[], int ar3[], int n);
// int main(void)
// {
//     int ar1[ARR_SIZE] = {1, 2, 3, 4, 5};
//     int ar2[ARR_SIZE] = {6, 7, 8, 9, 10};
//     int ar3[ARR_SIZE];
//     int i;

//     sum_ar(ar1, ar2, ar3, ARR_SIZE);
//     for (i = 0; i < ARR_SIZE; i++)
//         printf("%i ", ar3[i]);
// }
// void sum_ar(const int ar1[], const int ar2[], int ar3[], int n)
// {
//     int i;

//     for (i = 0; i < ARR_SIZE; i++)
//         ar3[i] = ar1[i] + ar2[i];
// }
// #define NOT_FOUND -1
// int search(int arr[], int n, int target);
// int main(void)
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int search_res;

//     search_res = search(arr, 5, 40);
//     if (search_res != -1)
//         printf("Target %i found at arr[%i].\n", arr[search_res], search_res);
//     else
//         printf("Target not found.\n");

// }
// int search(int arr[], int n, int target)
// {
//     int found, i, where;

//     found = 0;
//     i = 0;
//     while(!found && i < n)
//     {
//         if (arr[i] == target)
//             found = 1;
//         else
//             ++i;
//     }
//     if (found)
//         where = i; // mark the subscript;
//     else
//         where = NOT_FOUND;
//     return (where);

// }
// void sort(int arr[], int n);
// int main(void)
// {
//     int numbers[] = {5000, 60, 70, 90, 20, 2000};
//     int i;

//     sort(numbers, 6);
//     for (i = 0; i < 6; i++)
//         printf("%i ", numbers[i]);
// }
// void sort(int arr[], int n)
// {
//     int i, j, temp;

//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//             if (arr[j] < arr[i])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//     }
// }
// void select_sort(int list[], int n);
// int get_min_range(const int list[], int fill, int size);
// void sort2(int array[], int n);
// int get_max_range(int array[], int fill, int size);
// int main(void)
// {
//     int numbers[] = {8, 53, 32, 54, 74, 3};
//     // int start, end;
//     int i;
//     // start = 1;
//     // end = 5;
//     // get_min_range_test(numbers, start, end);
//     // select_sort(numbers, 6);
//     sort2(numbers, 6);
//     for (i = 0; i < 6; i++)
//         printf("%i ", numbers[i]);
//     return (0);
// }

// int get_min_range_test(const int arr[], int smallest)
// {
//     int i, small_sub;

//     small_sub = 0;
//     for (i = 1; i < n; i++)
//     {
//         if (arr[i] < arr[small_sub])
//             small_sub = i;
//     }
//     return (small_sub);
// }

// void select_sort(int list[], int n)
// {
//     int fill, temp, index_of_min;

//     for (fill = 0; fill < n - 1; ++fill)
//     {
//         index_of_min = get_min_range(list, fill, n-1);
//         if (DEBUG)
//             printf("%i\n", index_of_min);
//         if (index_of_min != fill)
//         {
//             temp = list[index_of_min];
//             list[index_of_min] = list[fill];
//             list[fill] = temp;
//         }
//     }

// }

// int get_min_range(const int list[], int fill, int size)
// {
//     int start;
//     int i, smallest;

//     smallest = fill;
//     start = fill + 1;
//     for (i = start; i <= size; i++)
//         if (list[i] < list[smallest])
//             smallest = i;
//     return (smallest);
// }

// void sort2(int array[], int n)
// {
//     int fill, index_of_largest, temp, j;

//     for (fill = n - 1; fill > 0; fill--)
//     {
//         if (DEBUG)
//             printf("Fill: %i\n", fill);
//         index_of_largest = get_max_range(array, fill, n - 1);
//         if (DEBUG)
//             printf("%i\n", index_of_largest);
//         if (index_of_largest != fill)
//         {
//             temp = array[index_of_largest];
//             array[index_of_largest] = array[fill];
//             array[fill] = temp;
//             if (DEBUG)
//             {
//                 for (j = 0; j < n; j++)
//                     printf("%i ", array[j]);
//                 printf("\n");
//             }
//         }
        
//     }
// }
    
// int get_max_range(int array[], int fill, int size)
// {
//     int largest, next, i;

//     next = fill - 1;
//     if (DEBUG)
//         printf("next: %i\n", next);
//     largest = fill;
//     for (i = next; i >= 0; i--)
//         if (array[i] > array[largest])
//             largest = i;
//     return (largest);

// }

// int main(void)
// {
//     printf("IT'S A NEW WEEK!\n");
//     printf("GOOD PROGRESS SO FAR; LETS KEEP PUSHING!\n");
//     return (0);
// }
#define NUM_STUDENTS 5
int main(void)
{
    int id[NUM_STUDENTS];
    double marks[NUM_STUDENTS];
    int i;

    printf("Enter the id and marks of the students>> ");
    for (i = 0; i < NUM_STUDENTS; i++)
        scanf("%d%lf", &id[i], &marks[i]);
    printf("Student ID      Marks\n");
    for (i = 0; i < NUM_STUDENTS; i++)
        printf("%i%12c%.2f\n", id[i], ' ', marks[i]);
}
