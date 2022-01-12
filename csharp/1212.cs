using System;

class MainnClass{

	static public bool Verify(int number1, int number2){
	var condition = number1 == 0 && number2 == 0;

	return condition ? true : false;
	}

	public static void Main(string[] args){

		while(true){
			var line = Console.ReadLine();
			
			string[] tokens = line.Split(' ');

			if(Verify(int.Parse(tokens[0]),int.Parse(tokens[1])))
				break;

			int len1 = tokens[0].Length;
			int len2 = tokens[1].Length;
			int carry = 0;
			int aux = 0;

			while(len1 != 0 && len2 != 0){
				len1--;len2--;

				if((int)Char.GetNumericValue(tokens[0][len1]) + (int)Char.GetNumericValue(tokens[1][len2]) + aux > 9){
					carry++;
					aux = 1;
				}else
					aux = 0;
			}

			if(aux == 1){
				if(len1 > 0){
					len1--;
					if((int)Char.GetNumericValue(tokens[0][len1]) + aux > 9)
						carry++;
				}

				if(len2 > 0){
					len2--;
					if((int)Char.GetNumericValue(tokens[1][len2]) + aux > 9)
						carry++;
				}
			}

			if(carry == 0)
				Console.WriteLine($"No carry operation.");
			else if(carry == 1)
				Console.WriteLine($"{carry} carry operation.");
			else
				Console.WriteLine($"{carry} carry operations.");



		}
	}
}

