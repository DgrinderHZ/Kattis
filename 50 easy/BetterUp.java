
import java.util.*;
class BetterUp {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, count = 0, a;
		float sum = 0;
		n = sc.nextInt();
		while(n>0){ n--;
			a = sc.nextInt();
			if(a >= 0){
				sum += a;
				count++;
			}
		}
		System.out.println(sum/count);
	}
}