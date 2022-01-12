renda = float(input())

if(renda > 0 and renda <= 2000):
  print("Isento")
elif(renda > 2000 and renda <= 3000):
  print("R$ %.2f" % ((renda - 2000) * 0.08))
elif(renda > 3000 and renda <= 4500):
  print("R$ %.2f" % (((renda - 3000) * 0.18) + (renda - 2000 - (renda - 3000)) * 0.08))
else:
  print("R$ %.2f" % ((renda - 4500) * 0.28 + ((renda - 3000 - (renda - 4500)) * 0.18) + (renda - 2000 - (renda - 3000)) * 0.08))