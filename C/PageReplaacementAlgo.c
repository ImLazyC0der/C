#include<stdio.h> 
#define MAX 20

int n, npage, in[MAX], frames[MAX]; 
int hit = 0, pagefault = 0; 
int i,j,k;
void initialize(){ 
    pagefault = 0; 
    for(int i=0; i<npage; i++) { 
        frames[i] = 9999; 
    }
} 
int isHit(int page){ 
    hit = 0; 
    for(int i=0; i<npage; i++){ 
        if(frames[i] == page){ 
            hit = 1; 
            break; 
        } 
    } 
    return hit; 
} 
void pagefaultcount(){ 
    printf("\n\t\tTotal number of page faults = %d\n", pagefault); 
} 
void FIFO(){ 
    initialize();
    for(i=0; i<n; i++)
    {
        if(isHit(in[i])==0)
        {
            for(k=0; k<npage-1; k++){
                frames[k]=frames[k+1];
            }
            frames[k]=in[i];
            pagefault++;
        }
    }
    pagefaultcount(); 
} 
void optimal(){ 
    initialize();
    int near[50];
    for(i=0; i<n; i++)
    {
        if(isHit(in[i])==0)
        {
 
            for(j=0; j<npage; j++)
            {
                int pg=frames[j];
                int found=0;
                for(k=i; k<n; k++)
                {
                    if(pg==in[k])
                    {
                        near[j]=k;
                        found=1;
                        break;
                    }
                    else
                        found=0;
                }
                if(!found)
                    near[j]=9999;
            }
            int max=-9999;
            int repindex;
            for(j=0; j<npage; j++)
            {
                if(near[j]>max)
                {
                    max=near[j];
                    repindex=j;
                }
            }
            frames[repindex]=in[i];
            pagefault++;
        }
    }
    pagefaultcount();
}
void LRU(){ 
    initialize();
    int least[50];
    for(i=0; i<n; i++)
    {
        if(isHit(in[i])==0)
        {
            for(j=0; j<npage; j++)
            {
                int pg=frames[j];
                int found=0;
                for(k=i-1; k>=0; k--)
                {
                    if(pg==in[k])
                    {
                        least[j]=k;
                        found=1;
                        break;
                    }
                    else
                        found=0;
                }
                if(!found)
                    least[j]=-9999;
            }
            int min=9999;
            int repindex;
            for(j=0; j<npage; j++)
            {
                if(least[j]<min)
                {
                    min=least[j];
                    repindex=j;
                }
            }
            frames[repindex]=in[i];
            pagefault++;
        }
    }
    pagefaultcount(); 
} 
int main(){ 
    printf("   *-*-*-* Page Replacement Algorithms *-*-*-*");
    printf("\nEnter the length of page reference string: "); 
    scanf("%d", &n); 
    printf("\nEnter the page reference string: \n"); 
    for(int i=0; i<n; i++){ 
        scanf("%d", &in[i]); 
    } 
    printf("\nThe given input Reference String: \n\t"); 
    for(int i=0; i<n; i++){ 
        printf("%d ", in[i]); 
    } 
    int choice;
    do{ 
        printf("\n\nChoice of Page Replacement Algorithm\n"); 
        printf("\t1. FIFO\n\t2. Optimal Page Replacement\n\t3. LRU\n\t4. Exit"); 
        printf("\nEnter your choice ALgo: "); 
        scanf("%d", &choice); 
        if(choice!=4){
            printf("Enter number of frames: "); 
            scanf("%d", &npage);
        }
        switch(choice){ 
            case 4: 
                printf("\n!!!----Exited!!-----Thank You----!!!\n"); 
                break; 
            case 1: 
                printf("\nFirst In First Out(FIFO): "); 
                FIFO(); 
                break; 
            case 2: 
                printf("\nOptimal Page Replacement: "); 
                optimal(); 
                break; 
            case 3: 
                printf("\nLeast Recently Used: "); 
                LRU(); 
                break; 
            default:
                printf("\nInvalid Choice\nKindly, Re-enter choice: "); 
                break;
        } 
    }while(choice!=4); 
    return 0; 
}
//1 2 3 4 2 1 4 2 5 6 2 1 6 5 2 3 7 5 4 2 6 3 2 1 2 3 6 4 2 5
