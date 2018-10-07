import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int  d;
        d = sc.nextInt();
        sc.nextLine();
        String s = sc.nextLine();

        System.out.println(solve(s,d));
    }

    public static int solve(String s, int d){
        int curDiff = 0, m = 0, w = 0, count = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i) == 'W') w++;
            if(s.charAt(i) == 'M') m++;
            curDiff = Math.abs(w-m);
            if(curDiff > d){
                if(w > m && s.charAt(i+1) == 'W') return count;
                if(w < m && s.charAt(i+1) == 'M') return count;
            }
            count++;
        }
        return count;
    }
}