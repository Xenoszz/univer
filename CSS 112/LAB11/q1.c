#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float mean(float *x, int n);
float stdev(float *x, int n);

int main() {
   int i, n, id;
   char grade, name[20], surname[20];
   float xbar, score, sc[100];
   FILE *stfile;

   stfile = fopen("grade.dat", "wt");
   for (i = 1; ; i++) {
      printf("record no # %d\n", i);
      printf("Id     : ");
      scanf("%d", &id);
      if (id == 0) break;
      printf("First name : ");
      scanf("%s", name);
      printf("Last name  : ");
      scanf("%s", surname);
      printf("Score      : ");
      scanf("%f", &score);
      fprintf(stfile, "%d %s %s %f\n", id, name, surname, score);}
   fclose(stfile);

   stfile = fopen("grade.dat", "rt");
   for (i = 1; ; i++) {
      fscanf(stfile, "%d%s%s%f", &id, name, surname, &sc[i]);
      if (feof(stfile) != 0) break;
   }
   n = i - 1;
   xbar = mean(sc, n);
   fclose(stfile);
   float sd = stdev(sc, n);

   stfile = fopen("grade.dat", "rt");
   system("cls");
   printf("=============================================================\n");
   printf("No. Id   First_name          Last_name           Score  Grade\n");
   printf("=============================================================\n");
   for (i = 1; ; i++) {
      fscanf(stfile, "%d%s%s%f", &id, name, surname, &score);
      if (feof(stfile) != 0) break;
      if (score >= xbar + 2 * sd) grade = 'A';
      else if (score >= xbar + sd) grade = 'B';
      else if (score >= xbar) grade = 'C';
      else if (score >= xbar - sd) grade = 'D';
      else grade = 'F';
      printf("%2d  %3d  %-20s%-20s%5.2f%5c\n", i, id, name, surname, score, grade);
   }
   printf("=============================================================\n");
   fclose(stfile);
   return 0;
}

float mean(float *x, int n) {
   float sum = 0;
   int i;
   for (i = 1; i <= n; i++)
      sum = sum + x[i];
   return sum / n;
}

float stdev(float *x, int n) {
   float sum = 0;
   float mean_val = mean(x, n);
   int i;
   for (i = 1; i <= n; i++)
      sum = sum + pow(x[i] - mean_val, 2);
   return sqrt(sum / n);
}