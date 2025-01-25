//follows -adjacent swaping 
//13|46|24|52|20|9
//0 | 1| 2| 3| 4|5
//n-6|n-5|n-4|n-3|n-2|n-1
//1st step 13 and 46 will compare>13|46|24|52|20|9
//2nd step 46 and 24 will >13|24|46|52|20|9
//3rd step 46 and 52 will >13|24|46|52|20|9
//4th step 46 and 20 will >13|24|46|20|52|9
//5th step 46 and 9 will >13|24|46|20|9|52
//here we observe that the max 52 is at the last
//13|24|20|46|9|52
//13|20|24|46|9|52
//13|20|24|9|46|52
//13|20|9|24|46|52
//13|9|20|24|46|52
//9|13|20|24|46|52
//done

