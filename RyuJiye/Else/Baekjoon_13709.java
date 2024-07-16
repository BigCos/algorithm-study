package RyuJiye.Else;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Baekjoon_13709 {
    public static void main(String[] args)throws Exception{
        int n;
        String[] list_0;
        long[] list = new long[60];

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        list_0 = br.readLine().split(" ");

        for(int i = 0; i < n; i++){
            list[i] = Integer.parseInt(list_0[i]);
        }

        long maxXor = findMaxXorSubset(list);
        System.out.println(maxXor);

    }

    public static long findMaxXorSubset(long[] arr){
        long[] basis = new long[60];

        for(long num : arr){
            for(int i = 59; i>=0; i--){
                if((num & (1L<<i)) == 0){ //1을 왼쪽으로 i번 이동, num의 i번째 비트가 0이라면 
                    continue;
                }
                if(basis[i] == 0){
                    basis[i] = num;
                    break;
                }
                num ^=basis[i];
            }
        }

        long maxXor = 0;
        for(int i = 59; i >= 0; i--){
            maxXor = Math.max(maxXor, maxXor^basis[i]);
        }

        return maxXor;
    }

}
