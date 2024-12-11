#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    char name[10];
    float percentage;
};
int n;
void getdata(struct student s[]);
void putdata(struct student s[]);
void sortdata(struct student s[]);
void searchdata(struct student s[]);
int main(){
    int ch;
    printf("\nENTER THE NO OF STUDENTS IN A CLASS:");
    scanf("%d",&n);
    struct student s[n];
    getdata(s);
    putdata(s);
    while(1){
        printf("\n\nMENU:  1. SORT DATA  2. SEARCH DATA 3.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            sortdata(s);
        printf("\nTHE SORTED DATA IS:\n");
        putdata(s);
        break;
        case 2:
        searchdata(s);
        break;
        case 3:
        return 0;
        default:
        printf("\nINVALID CHOICE , TRY AGAIN\n");

        }
    }
    return 0;
}
void getdata(struct student s[]){
    int i;

        for(i=0;i<n;i++){
        printf("\nENTER %d TH STUDENTS DATA:\n",i+1);
        printf("\nENTER ROLL NO : ");
        scanf("%d",&s[i].roll_no);
        printf("\nENTER NAME :");
        scanf("%s",s[i].name);

        printf("\nENTER PERCENTAGE :");
        scanf("%f",&s[i].percentage);
            
        }

}
void putdata(struct student s[]){
    int i;
     printf("\n\nENTERED DATA IS \n:");

        for(i=0;i<n;i++){
        printf("\n STUDENT:%d\n",i+1);
        printf("\n ROLL NO:%d ",s[i].roll_no);
        
        printf("\nNAME:%s",s[i].name);
        

        printf("\n PERCENTAGE:%f",s[i].percentage);
       
            
        }

}
void sortdata(struct student s[]){
    int i,j;
    int temp_rn;
    char temp_name[10];
    float temp_per;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
        if(s[j].percentage<s[j+1].percentage){
            temp_rn=s[j].roll_no;
            s[j].roll_no=s[j+1].roll_no;
            s[j+1].roll_no=temp_rn;

             temp_per=s[j].percentage;
            s[j].percentage=s[j+1].percentage;
            s[j+1].percentage=temp_per;

strcpy(temp_name,s[j].name);
strcpy(s[j].name,s[j+1].name);
strcpy(s[j+1].name,temp_name);

        }
    }
    }
}
void searchdata( struct student s[]){
    int rn,i,flag=0;
    printf("\nENTER ROLL NO YOU WANT TO SEARCH: ");
        scanf("%d",&rn);
       for(i=0;i<__NTDDI_WIN51;i++){
        if(s[i].roll_no==rn){
            flag=1;
            break;
        }
       }
       if(flag){
         printf("\nSTUDENT RECORD FOUND AT %d LOCATION AS FOLLOWS:",i);
        printf("\nROLL NO: %d",s[i].roll_no);
        printf("\nNAME:%s",s[i].name);
        printf("\nPERCENTAGE:%f",s[i].percentage);
       }
       else{
        printf("\nDATA NOT FOUND!!");
       }
       
}