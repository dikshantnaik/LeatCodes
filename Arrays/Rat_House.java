import java.util.*;


/**
 * Rat_House
 */
public class Rat_House {


    public static int getRatHouse(int food[],int uint,int r) {
        
        int n = food.length;
        int i=0;
        int foodReq = uint * r;
        while (i<=r) {
            
            if(foodReq<=0){
                System.out.println("House needed"+i);
                break;
            }else{
                foodReq = foodReq - food[i];
            }
            i++;

        }

        return 0;
    }
    public static void main(String[] args) {
        int[] arr = {2 ,8 ,3 ,5 ,7, 4, 1, 2};
        getRatHouse(arr, 2, 7);
    }
}