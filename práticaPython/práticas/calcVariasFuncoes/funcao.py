import math as mh
import PySimpleGUI as sg

def segundoGrau(a ,b , c):
    
    delta = (int(b)*int(b)) - 4 * int(a) * int(c)
    
    x1 = (-int(b) + mh.sqrt(delta))/2 * int(a)
    
    x2 = (-int(b) - mh.sqrt(delta))/2 * int(a)
    
    return (x1, x2)

