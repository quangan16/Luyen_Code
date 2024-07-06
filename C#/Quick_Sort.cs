


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode
{

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {

                var ob = new SolutionQS();
                int n = Convert.ToInt32(Console.ReadLine());
                int[] arr = Array.ConvertAll(Console.ReadLine().Trim().Split(),int.Parse);
                SolutionQS obj = new SolutionQS();
                obj.quickSort(arr, 0, n-1);
                foreach (int i in arr)
                {
                    Console.Write(i + " ");
                }
                Console.WriteLine();
            }

        }
    }
}

class SolutionQS
{
    //Function to sort an array using quick sort algorithm.
    public void quickSort(int[] arr, int low, int high)
    {
        
        
        if(low <= high){
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
            
        }
    }

    //Function to divide array into two parts and return the index.
    public int partition(int[] arr, int low, int high)
    {
        int pivot = low + (high - low)/2;
        (arr[high], arr[pivot]) = (arr[pivot], arr[high]);
        pivot = high;
        --high;
        while(low <= high){
            while(arr[low] < arr[pivot]) ++low;
            while(arr[high] > arr[pivot]) --high;
            if(low <= high){
                 (arr[low], arr[high]) = (arr[high], arr[low]);
            }
        }
        (arr[low], arr[pivot]) = (arr[pivot], arr[low]);
        pivot = low;
        return pivot;
    }
    
}