// Jadea Parchment this program will accepts the number of cities, the number of drones and a list of drones, each described by its current city and travel distance. It computes the number of computers that can be assembled with the existing parts. 
#include <stdio.h>
    
    int main(){
                 
        int num_cities,num_drones,city,drone_list,j,k,i;
        int stops[num_cities];                 
        printf("Enter number of cities (N):\n ");
        scanf("%d",&num_cities);
        //Input Validation
        if (num_cities<=0 ||num_cities>=100) {
            printf("Invalid number of cities %d\n",num_cities);
            printf("Must be in the range [1,100]");
            return 0;
        }
        printf("Enter number of drones (M):\n ");
        scanf("%d",&num_drones);
        //Input Validation
       if (num_drones<=0 || num_drones>=100) {
            printf("Invalid number of drones %d\n",num_drones);
           printf("Must be in the range [1,100]");
           return 0;
        }
        printf("Enter drone list:\n ");
        for(i=0;i<num_drones;i++)
        {
            scanf("%d %d",&city,&drone_list);
        // Input validation 
        if (drone_list<=1 || drone_list>=5) {
            printf("Invalid list of drones\n");
            printf("Drone location and travel distance must be in the range [1,4]\n");
           return 0;
        }
        //keeps the currents city's position when travelling
            j = city;                
            k = city;
            stops[city] = 1;        
            if(j > 0 && k < num_cities+1)
            {
                // calculations for output
                k = k + drone_list;
                j = j - drone_list;
                if(j >0){
                    stops[j] = 1;
                    
                }
                if(k < num_cities+1){
                    stops[k] = 1;
                    
                }
            }
        }
        printf("Cities reached by a drone:\n");
        for(i=0;i<num_cities+1;i++)
        {
            if(stops[i] == 1){
                printf("%d ",i);
                
            }
        }
        return 0;
    }
