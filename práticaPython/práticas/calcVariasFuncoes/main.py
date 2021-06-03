from PySimpleGUI import PySimpleGUI as sg
from funcao import *


# Layout
sg.theme('Reddit')

layout = [
    [sg.Button('Calculadora de funções do segundo grau')],  
    [sg.Button('Soma')],
    [sg.Button('Divisão')] 
]

layoutSegundoGrau = [
    
    [sg.Text('a:'),sg.Input(key='a', size=(5, 1))],    
    [sg.Text('b:'),sg.Input(key='b', size=(5, 1))],    
    [sg.Text('c:'),sg.Input(key='c', size=(5, 1))], 
    [sg.Button('Calcular!')]
    
    ]


janelaSegundoGrau = sg.Window('Segundo Grau', layoutSegundoGrau)

# Janela 
janela = sg.Window('Escolha de ferramenta', layout)
# Ler eventos 
while True:
    eventos, valores = janela.read()
    if eventos == sg.WINDOW_CLOSED:
        break
    if eventos == 'Calculadora de funções do segundo grau':
        eventos2, valores2 = janelaSegundoGrau.read()
        if eventos2 == 'Calcular!':
            print(segundoGrau(valores2['a'], valores2['b'], valores2['c']))

