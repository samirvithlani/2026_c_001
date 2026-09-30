#include<stdio.h>

void add(int no1,int no2){

        int ans=0;
        ans = no1 + no2;
        printf("\n ans = %d",ans);
}


void printchars(char ch1[]){

        int i;
        for(i=0;ch1[i]!='\0';i++){
            printf("\n %c",ch1[i]);
        }

}

void printindex(int arr[]){

    printf("\n %d",arr[0]);

}

void findMax(int arr[],int size){

    int i,max=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("\n max = %d",max);

}

void printrev(int x[],int size){

    int i;
    for(i=size-1;i>=0;i--){
        printf("\n i =%d",x[i]);
    }


}



void main()
{

    char name[100]="royal";
    int arr[5]={1,2,3,4,5};
    int marks[5]={23,24,21,19,22};
    int arr2[5],i;
    //function call by value
    add(10,20);
    printchars(name);
    printindex(arr);
    findMax(arr,5);
    findMax(marks,5);
    //findMax({11,22,33,456,900},5);

    for(i=0;i<5;i++){
        printf("\n enter value ");
        scanf("%d",&arr2[i]);
    }

    printrev(arr2,5);
   
}