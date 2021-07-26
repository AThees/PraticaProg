# Importar bibliotecas
import win32api, win32con, time

def click(x,y):
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN,x,y,0,0)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP,x,y,0,0)
    
    
tempoMinutos = int(input("Insira o tempo em minutos: "))

tempoSegundos = tempoMinutos * 60

print("Clicando em {} minutos".format(tempoMinutos))

time.sleep(tempoSegundos)

click(0,0)

print("Clique realizado.")








