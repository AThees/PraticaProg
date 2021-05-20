# Crie uma função que calcule o aumento que será dado a um funcionário. Esta função receberá como
# parâmetro o salário atual do funcionário e a porcentagem de aumento. A função deverá, ao final, imprimir
# o novo valor do salário e o valor do aumento.

def aumento():
    atual = int(input("Salário atual: "))
    porcentagem = int(input("Pontos percentuais do aumento: "))
    
    aumento = (porcentagem / 100 )
    
    valorAumento = (atual * aumento)
    
    novo = (atual + valorAumento)
    
    print ("O valor do novo salário é {} reais, e o valor do aumento foi de {} reais".format(novo, valorAumento))

aumento()