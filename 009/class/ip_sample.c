// ip_sample.c
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define X_SIZE (1152/2)
#define Y_SIZE (864/2)

void sample_func(unsigned char* image, int sx, int sy);

int main(int argc, char* argv[])
{
    unsigned char* image;
    int i, j;
    int size_x=X_SIZE, size_y=Y_SIZE;
    FILE *fp, *fp_w;
    unsigned char buf;
    
    //Memory allocation
    if (NULL == (image = (unsigned char *)malloc(sizeof(unsigned char)*size_x*size_y))){
        printf("Memory allocation failed. ");return (-1);
    }
    
    //Image initialize
    for(j=0; j<size_y; j++)
        for(i=0; i<size_x; i++)
            image[j*size_x+i] = 0;
    
    // Image read
    if (NULL == (fp = fopen("test-gray.raw.data","rb"))){
        printf("File test-gray.raw not found.");
        fclose(fp);
        free(image);
        return(-1);
    }
    
    if (NULL == (fp_w = fopen("test-gray_out.raw.data","wb+"))){
        printf("Couldn't write File test-gray_out.");
        fclose(fp);
        fclose(fp_w);
        free(image);
        return(-1);
    }
    
    for(j=0; j<size_y; j++)
        for(i=0; i<size_x; i++){
            fscanf(fp,"%c", &buf);
            image[j*size_x+i] = buf;
        }
    
    sample_func(image, size_x, size_y);

    for(j=0; j<size_y; j++)
        for(i=0; i<size_x; i++){
            buf = image[j*size_x+i];
            fprintf(fp_w,"%c",buf);
        }
    
    printf("Program finished.\n");
    
    fclose(fp);
    fclose(fp_w);
    free(image);
    return 0;
}

void sample_func(unsigned char* image, int sx, int sy)
{
    //  SAMPLE FUNCTION  ２値化処理
    int i,j, th;
    double theta;
    unsigned char buf;
    unsigned char* out_image;
    printf("Input theta   :  ");
    scanf("%d",&th);
    if (NULL == (out_image = (unsigned char *)malloc(sizeof(unsigned char)*sx*sy))){
        printf("Memory allocation failed. ");return;
    }
    theta = M_PI*th/180.0;
    //Image initialize
    for(j=0; j<sy; j++)
        for(i=0; i<sx; i++)
            out_image[j*sx+i] = 0;
    for(j=0; j<sy; j++)
        for(i=0; i<sx; i++){
            double x = cos(theta)*(i-sx/2)-sin(theta)*(j-sy/2)+sx/2;
            double y = sin(theta)*(i-sx/2)+cos(theta)*(j-sy/2)+sy/2;
            int point = (int)(y*sx+x);
            if(y<sy&&x<sx&&y>0&&x>0){
                //printf("%d,%d->%lf,%lf\n",i,j,x,y);
                out_image[point] = image[j*sx+i];
            }
        }
    for(j=0;j<sy;j++)
      for(i=0;i<sx;i++)
        image[j*sx+i]=out_image[j*sx+i];
    return;
}
