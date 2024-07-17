package RyuJiye.DataStructure;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class Baekjoon_1927 {
    public static void main(String[] args)throws Exception{
    
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        PriorityQueue<Integer> pr = new PriorityQueue<>();

        for(int i = 0; i < n; i++){
            int x = Integer.parseInt(br.readLine());
            if(x > 0){
                pr.add(x);
            }

            else{
                if(pr.isEmpty()){
                    System.out.println(0);
                }
                else{
                    System.out.println(pr.poll());
                }
            }
        }
    }
}
