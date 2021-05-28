# Importar bibliotecas
from selenium import webdriver
import time
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.common.keys import Keys
# Definir ctt/grupo e mensagem
contatos = []

n = int(input("Numero de contatos/grupos: "))
for i in range(1, n+1):
    ele = (input("insira o {}º contato: ".format(i)))
    contatos.append(ele)

mensagem = input("Insira a mensagem: ")

# Abrir o zap web
driver = webdriver.Chrome(ChromeDriverManager().install())
driver.get('https://web.whatsapp.com/')
time.sleep(10)

# Buscar ctt/grupo
def buscar_contato(contato):
    campo_pesquisa = driver.find_element_by_xpath('//div[contains(@class, "copyable-text selectable-text")]')
    #time.sleep(3)
    campo_pesquisa.click()
    campo_pesquisa.send_keys(contato)
    campo_pesquisa.send_keys(Keys.ENTER)

def enviar_mensagem(mensagem):
    campo_mensagem = driver.find_elements_by_xpath('//div[contains(@class, "copyable-text selectable-text")]')
    campo_mensagem[1].click
    #time.sleep(3)
    campo_mensagem[1].send_keys(mensagem)
    campo_mensagem[1].send_keys(Keys.ENTER)
for contato in contatos:
    buscar_contato(contato)
    enviar_mensagem(mensagem)
