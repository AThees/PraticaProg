from PySimpleGUI import PySimpleGUI as sg
import hashlib  
# Layout
sg.theme('Reddit')

layout = [
    [sg.Text('Usuário'),sg.Input(key='usuario', size=(20, 1))],
    [sg.Text('Senha  '),sg.Input(key='senha', password_char='*', size=(20, 1))],
    [sg.Checkbox('Salvar login')],
    [sg.Button('Entrar')],   
]
# Janela 
janela = sg.Window('Tela de login', layout)
# Ler eventos 
while True:
    eventos, valores = janela.read()
    if eventos == sg.WINDOW_CLOSED:
        break
    if eventos == 'Entrar':
        if valores['usuario'] == 'alvaro' and valores['senha'] == '123456':
            print("Você entrou")    