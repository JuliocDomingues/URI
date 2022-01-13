using System;

class MainClass{

	static public long Gauss(long number){
		return ((1 + number) * number) / 2;
	}

	public static void Main(string[] args){
		int n = int.Parse(Console.ReadLine());
		long qtdWarriors = 0;
		
		while(n != 0){
			long warriors = long.Parse(Console.ReadLine());
			
			//Console.WriteLine(warriors);
			long guess = Convert.ToInt64(Math.Sqrt(2*warriors));

			do{
				qtdWarriors = Gauss(guess);
				guess--;
				//Console.WriteLine($"qtdWarriors {qtdWarriors} lines {lines} cont {cont} warriors {warriors}");
			}while(warriors < qtdWarriors);
			
			Console.WriteLine(guess + 1);
			
			qtdWarriors = 0;
			n--;
		}

	}

}