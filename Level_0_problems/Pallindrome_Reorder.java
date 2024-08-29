// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        System.out.println(fun(str));
    }
    public static String fun(String s){
    int n = s.length();
    char str[]=s.toCharArray();
    StringBuilder ans=new StringBuilder();

    int check[]=new int[27];

    for(int i =0; i<n; i++){
        check[str[i]-'A']++;
    }
    int count =0;
    for(int i =0; i<27; i++){
        if(check[i]%2 != 0){
            count++;
        }
    }
   
    if(count >1)return ans.toString();
    

    for(int i =0; i<26; i++){
        if(check[i]%2 != 0){
            while(check[i]>0){
                ans.append((char)('A'+i)+"");
                check[i]--;
            }
        }
    }
    for(int i =0; i<26; i++){
        if(check[i]%2 == 0){
            char c =(char)('A'+i);
            while(check[i]>0){
                ans.insert(0,c);
                ans.append(c);
                check[i] =  check[i] - 2;
            }
        }
    }
    return ans.toString();
}
}
