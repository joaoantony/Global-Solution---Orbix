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


## Componetes Utilizados

   -Arduino Uno
   -LED Verde
   -LED Vermelha
   -Sensor Ultrassônico HC-SR04
   -2Resistores
   -Jumpers
   -Buzzer
   -Placa de Ensaio

## Funcionamento do Sistema

Basicamente o sensor ultrassônico simula um radar orbital do satélite Orbix. Ele detecta objetos próximos e envia as informações ao arduino
O arduino acaba processando os dados e classifica o nível de risco de acordo com a distância detectada:

•Distância maior que 30cm
 -LED Verde acende
 -Sistema seguro
 -Sem alertas

•Distância entre 10cm e 30cm
 -Buzzer intermitente
 -Alerta moderado

•Distância menor que 10cm
 -LED Vermelha acende
 -Buzzer contínuo
 -Risco alto de colisão

## Estrutura do Circuito













 ## RM
 João Antony - RM569685
 Caio Palmeira - RM571775
 Davi Dutra - RM569856
 Miguel Gomes - RM573812
 Matheus Munhoz - RM570685
 

