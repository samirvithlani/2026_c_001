#include<stdio.h>

// 21 45 89 78 65

//---> 45 ?? yes NO

//compare
// 45 ==21 NO
// 45 == 45 YES
//89 ==45 NO
//78 == 45 NO
//65 ==45 NO

void main()
{
   
    int a[5],i,searchelm,found=0;
    //scan loop

    for(i=0;i<5;i++){
        printf("\n enter %d element ::",i);
        scanf("%d",&a[i]);
    }
    printf("\n enter element to search :::");
    scanf("%d",&searchelm);

    ///search loop
    for(i=0;i<5;i++){

        // 21 45 89 78 65
        //21 == 45
        if(a[i]==searchelm){
            found=1;
            break;
            //printf("\n element found !!!");
        }
        // else{
        //     //found=0;
        //     //printf("\n element not found !!");
        // }

    }//end search loop

    if(found==1){
        printf("\n element found !!");
    }
    else{
        printf("\n element not found !!");
    }
}