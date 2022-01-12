import re
from datetime import datetime
dia1 = input()
dia1 = re.sub('[^0-9]', '', dia1)
hora1 = input()
hora1 = re.sub('[^0-9:]', '', hora1)
dia2 = input()
dia2 = re.sub('[^0-9]', '', dia2)
hora2 = input()
hora2 = re.sub('[^0-9:]', '', hora2)



s = '2015/08/' + dia1  + ' ' + hora1
t = '2015/08/' + dia2  + ' ' + hora2
f = '%Y/%m/%d %H:%M:%S'
dif = (datetime.strptime(t, f) - datetime.strptime(s, f)).total_seconds()

dif = int(dif)

dias = int(dif/86400)
horas = int((dif % 86400)/3600)
minutos = int((dif%3600)/60)
segundos = int((dif % 3600) % 60)


print("%i dia(s)" % dias)
print("%i hora(s)" % horas)
print("%i minuto(s)" % minutos)
print("%i segundo(s)" % segundos)