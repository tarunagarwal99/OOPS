
/* package codechef; // don't place package name! */

import java.util.*;

import java.lang.*;

import java.io.*;


/* Name of the class has to be "Main" only if the class is public. */

class Codechef{


	public static void main (String[] args) throws java.lang.Exception{

	    Scanner sc=new Scanner(System.in);

	    try{

	    	int testCase = sc.nextInt();

	    	while(testCase-- > 0){

	    	    String[] board=new String[3];

	    		board[0]=sc.next();

	    		board[1]=sc.next();

	    		board[2]=sc.next();


	    		String boardStr = board[0]+board[1]+board[2];


	    		char[] characters = boardStr.toCharArray();

	    		System.out.println(checkCond(characters));

	    	}

	    } catch(Exception e){}

	}


	public static int solution(char[] board, char ch){

		

		if ((board[0] == ch)&&(board[0] == board[1])&&(board[0] == board[2])) return 1;	// for 0 1 2

		if ((board[0] == ch)&&(board[0] == board[3])&&(board[0] == board[6])) return 1;	// for 0 3 6

		if ((board[0] == ch)&&(board[0] == board[4])&&(board[0] == board[8])) return 1;	// for 0 4 8


		if ((board[1] == ch)&&(board[1] == board[4])&&(board[1] == board[7])) return 1;	// for 1 4 7


		if ((board[2] == ch)&&(board[2] == board[4])&&(board[2] == board[6])) return 1;	// for 2 4 6

		if ((board[2] == ch)&&(board[2] == board[5])&&(board[2] == board[8])) return 1;	// for 2 5 8


		if ((board[3] == ch)&&(board[3] == board[4])&&(board[3] == board[5])) return 1;	// for 3 4 5

		if ((board[6] == ch)&&(board[6] == board[7])&&(board[6] == board[8])) return 1;	// for 6 7 8


		return 0;

	}

	public static int checkCond(char[] characters){

		int countX=0, countO=0;

		for (char ch:characters) {

			if (ch == 'X') countX++;

			if (ch == 'O') countO++;

		}


		int count_ = 9 - (countX+countO);

		if (countX < countO){

			return 3;

		}

		if (countX > countO+1){

			return 3;

		}


		int winX = solution(characters, 'X');

		int winO = solution(characters, 'O');


		if (winX == 1 && winO == 1){

			return 3;

		}

		if (winX == 1 && countX == countO){

			return 3;

		}

		if (winO == 1 && countX > countO){

			return 3;

		}

		if (winO == 1 || winX == 1){

			return 1;

		}

		if (count_ == 0)

			return 1;

		return 2;

	}

}