import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class 단어공부_1157{ 
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        s = s.toUpperCase();

        char[] count = new char[26];

        for(int i = 0; i < s.length(); i++){
            count[s.charAt(i)-'A']++;
        }

        int maxIndex = 0;
        int maxCount = count[0];
        boolean isSame = false;

        for(int i = 1; i < 26; i++){
            if(count[i] > maxCount){
                maxIndex = i;
                maxCount = count[i];
                isSame = false;
            }
            else if(count[i] == maxCount){
                isSame = true;
            }
        }

        if(isSame){
            System.out.println('?');
        }
        else{
            System.out.println((char)('A' + maxIndex));
        }
    }
}