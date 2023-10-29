/* 
* There are 'n' piles of bananas, each pile containing a certain number of bananas. These piles are represented as an array piles, where piles[i] represents the number of bananas in the ith pile.

* Koko has 'h' hours before the guards return. During each hour, she can choose any pile and eat 'k' bananas from that pile. If the pile contains fewer than 'k' bananas, she will consume all the bananas in that pile during that hour.

* Koko prefers to eat slowly, so the goal is to find the minimum eating speed 'k' that allows her to finish eating all the bananas in the given 'piles' within 'h' hours.

* To solve this problem, you need to find the smallest 'k' such that Koko can eat all the bananas in the given time constraint. This involves performing a binary search to iteratively adjust the value of 'k' until you find the minimum speed at which Koko can eat all the bananas in 'h' hours or less. The minEatingSpeed function calculates this value and returns it.
*/
public class Koko_Eating_Bananas {

    public static void main(String[] args) {
        int[] piles = {3, 6, 7, 11};
        int h = 8;
        int minK = minEatingSpeed(piles, h);
        System.out.println(minK);  // Output: 4
    }
    public static int minEatingSpeed(int[] piles, int h) {
        int low=1;
        int high=-1;
        int k=0;
        for(int i:piles){
            high=Integer.max(high,i);
        }
        while( low < high){
            int m=(low+high)/2;
            k=0;
            for(int val:piles){
                k+=Math.ceil((double)val/m);
            }
            if(k <= h) high=m;
            else low=m+1;
        }
        return high;
    }
}