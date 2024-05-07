package clg.cpp.clg;

import java.util.Arrays;
import java.util.Scanner;

public class Search {

    //------------------ linear search ---------------------------
    public static void linearSearch(int arr[],int key){
        int count=0;
        for(int i: arr){
            if(i==key){
                System.out.println("key found at index : "+count);
            }
            count++;
        }
    }

    //------------------ Binary Seacrch ----------------------------

    public static int binarySearch(int arr[], int key){
        int mid = arr.length/2;
        Arrays.sort(arr);
        int low =0;
        

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid]<key){
        }
    }


    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int[] arr = {1,4,2,7,9,4,6,5,3,};
        int key =sc.nextInt();

        linearSearch(arr,key);
        binarySearch(arr,key);
    }   
}
