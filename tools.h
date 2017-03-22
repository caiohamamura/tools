#define TIDY(arr) if((arr)){free((arr));(arr)=NULL;}  /*free an array*/

double *dalloc(int,char *,int);
float *falloc(int,char *,int);
char *challoc(int,char *,int);
unsigned char *uchalloc(int,char *,int);
int *ialloc(int,char *,int);
short int *shalloc(int,char *,int);
int *intSwap(int *,int);
float *floSwap(float *,int);
long int *lintSwap(long int *,int);
double *doSwap(double *,int);
double doOneSwap(double);
int16_t *int16Swap(int16_t *,int);
double gaussian(double,double,double);
double logNormal(double,double,double);
char *markChar(int,char *,char);
unsigned char *markUchar(int,unsigned char *,unsigned char);

unsigned char **uchChalloc(int,char *,int);
char **chChalloc(int,char *,int);
int **iIalloc(int,char *,int);
float **fFalloc(int,char *,int);
short int **shIalloc(int,char *,int);
double **dDalloc(int,char *,int);


void checkArguments(int,int,int,char *);
void TTIDY(void **,int); 


