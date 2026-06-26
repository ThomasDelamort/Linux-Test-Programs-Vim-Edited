import java.util.Scanner;

public class gwaCalculator { // gwa calculator

    static Scanner sc = new Scanner(System.in);
    static double gwa;
    static double sum;
    
    // 4 highest
    // 3.5 Great
    // 3 Good
    // 2.5 Not Good
    // 2 Bad
    // 1.5 Very Bad
    // 1 Worse

    public static void main(String[] args) {
        System.out.print("How many Courses: ");
        int numOfCourses = sc.nextInt();
        sc.nextLine();
        
	double[] courses = new double[numOfCourses];
        for (int i = 0; i < numOfCourses; i++) {
            System.out.printf("Course %d: ", i + 1);
            double grade = sc.nextDouble();
            sc.nextLine();
            courses[i] = grade;
            grade = 0;
        }

        for (int i = 0; i < courses.length; i++) {
            sum += courses[i];
        }
        gwa = sum / numOfCourses;

	if (gwa < 1) {
	    System.out.printf("Your GWA is %.2f you are a FAILURE", gwa);
	}else if (gwa > 3) {
            System.out.printf("Your GWA is %.2f you are INSANE", gwa);		
	}
       	else {
	    System.out.printf("Your GWA is %.2f congratulations you passed", gwa);
	}
    }
}
