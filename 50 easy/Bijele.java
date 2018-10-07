import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k,q,r,b,n,p;
        k = sc.nextInt();
        q = sc.nextInt();
        r = sc.nextInt();
        b = sc.nextInt();
        n = sc.nextInt();
        p = sc.nextInt();
        System.out.println( (1-k) +" "+ (1-q) +" "+ (2-r) +" "+ (2-b) +" "+ (2-n) +" "+ (8-p));
    }
}