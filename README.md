# Global-Solution---Orbix

## Descrição do Projeto

O Orbix é um projeto desenvolvido com a finalidade de tornar as operações orbitais mais seguras, sustentáveis e eficientes. A proposta funciona com uma rede de pequenos satélites multifuncionais capazes de monitorar o espaço em tempo real, prever colisões,
coletar detritos espaciais, reutilizar recursos e processar dados diretamente em órbita.

## Objetivo

O objetivo principal é demonstrar como tecnologias automotizadas podem contribuir para:

  -monitoramento orbital;
  -segurança de satélites;
  -prevenção de colisões;
  -sustentabilidade espacial;
  -desenvolvimento de sistemas inteligentes para futuras missões espaciais.


## Componentes Utilizados

   -Arduino Uno
   -LED Verde
   -LED Vermelho
   -Sensor Ultrassônico HC-SR04
   -2Resistores
   -Jumpers
   -Buzzer
   -Placa de Ensaio

## Funcionamento do Sistema

Basicamente o sensor ultrassônico simula um radar orbital do satélite Orbix. Ele detecta objetos próximos e envia as informações ao arduino
O arduino acaba processando os dados e classifica o nível de risco de acordo com a distância detectada:

  •Distância maior que 30cm:
   -LED Verde acende
   -Sistema seguro
   -Sem alertas
  
  •Distância entre 10cm e 30cm:
   -Buzzer intermitente
   -Alerta moderado
  
  •Distância menor que 10cm:
   -LED Vermelho acende
   -Buzzer contínuo
   -Risco alto de colisão

## Estrutura do Circuito

• Sensor HC-SR04:
 -VCC  --> 5V
 -GND  --> GND
 -TRIG --> Pino 9 
 -ECHO --> Pino 10

• LED Verde:
 -Ponto Positivo --> Resistor --> Pino 3
 -Ponto Negativo --> GND

• LED Vermelho:
 -Ponto Positivo --> Resistor --> Pino 4
 -Ponto Negativo --> GND

• Buzzer:
 -Pino 5
 -GND

 ## Instruções de Execução
  
1.Acesse o simulador Wokwi.  
2.Abra o projeto.   
3.Clique em "Start Simulation".
4.Clique no sensor ultrassônico HC-SR04.
5.Altere a distância do objeto para testar os diferentes níveis de alerta.
6.Observe o comportamento dos LEDs e do buzzer.
  
#Observação:
      Como o projeto foi desenvolvido em um simulador virtual, a distância do sensor só pode ser alterada manualmente para representar diferentes
      aproximações de objetos espaciais.


 ## Integrantes
 João Antony Fernandes Macedo Matos - RM569685
 Caio Palmeira Silva - RM571775
 Davi Dutra Yamamoto - RM569856
 Miguel Gomes Oliveira Pinheiro - RM573812
 Matheus Munhoz Polo dos Santos - RM570685
 

