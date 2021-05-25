from PySimpleGUI import PySimpleGUI as sg
import hashlib  
# Layout
sg.theme('Reddit')

layout = [
    [sg.Text('Usuário'),sg.Input(key='usuario', size=(20, 1))],
    [sg.Text('Senha  '),sg.Input(key='senha', password_char='*', size=(20, 1))],
    [sg.Checkbox('Salvar login')],
    [sg.Button('Entrar')],  
    [sg.Button('Cancelar')],
]
# Janela 
janela = sg.Window('Tela de login', layout)
# Ler eventos 
while True:
    eventos, valores = janela.read()
    if eventos == sg.WINDOW_CLOSED:
        break
    if eventos == 'Entrar':
        
        h = hashlib.md5(valores['senha'].encode('utf-8') + "alvin".encode('utf-8'))
        
        if valores['usuario'] == 'alvaro' and h.hexdigest() == '6efcb823457151460a42e3d33a036d71':
            
            print("Você entrou") 
            
    if eventos == 'Cancelar':
        break
