# 🌍 Green-Trust Station

## Plataforma Inteligente de Monitoramento Ambiental para Auditoria Contínua de Créditos de Carbono

> Transformando dados orbitais e monitoramento local em confiança para o mercado de carbono.

---

# 👥 Equipe

| Nome         | RM    |
| ------------ | ----- |
| Integrante 1 | XXXXX |
| Integrante 2 | XXXXX |
| Integrante 3 | XXXXX |
| Integrante 4 | XXXXX |
| Integrante 5 | XXXXX |

---

# 📖 Visão Geral

O Green-Trust Station é uma solução de Edge Computing desenvolvida para complementar a plataforma Green-Trust, um sistema de monitoramento ambiental baseado em dados orbitais.

A proposta do projeto é aumentar a confiabilidade do mercado de créditos de carbono através da integração entre imagens de satélite, análise computacional e sensores ambientais instalados diretamente nas áreas monitoradas.

Enquanto satélites observam grandes extensões de território, a Green-Trust Station realiza monitoramento local em tempo real, permitindo a identificação rápida de riscos ambientais capazes de comprometer áreas certificadas para geração de créditos de carbono.

O resultado é uma auditoria contínua, automatizada e escalável.

---

# 🚨 O Problema

O mercado global de créditos de carbono movimenta bilhões de dólares todos os anos.

Entretanto, ainda enfrenta desafios importantes:

* Auditorias manuais de alto custo;
* Fiscalização limitada;
* Processos lentos e burocráticos;
* Risco de fraudes e greenwashing;
* Dificuldade de acesso para pequenos produtores;
* Falta de monitoramento contínuo entre auditorias.

Caso uma área certificada seja degradada ou sofra um incêndio, a informação pode demorar meses para ser identificada, comprometendo a confiabilidade dos créditos comercializados.

---

# 💡 A Solução

O Green-Trust utiliza dados orbitais para monitorar a saúde da vegetação através de índices ambientais como o NDVI.

Complementando essa análise, a Green-Trust Station atua diretamente no ambiente monitorado através de sensores capazes de identificar condições favoráveis à degradação ambiental.

A combinação entre monitoramento espacial e monitoramento terrestre cria um sistema híbrido capaz de fornecer informações mais confiáveis para produtores, auditores e investidores.

---

# 🛰️ Arquitetura Geral da Solução

```text
Satélites Sentinel-2 (Copernicus)
                ↓
      Imagens Orbitais
                ↓
     Processamento NDVI
            (Python)
                ↓
      Dashboard Green-Trust
                ↓
      Green-Trust Station
        (Edge Computing)
                ↓
 Sensores Ambientais Locais
                ↓
 Alertas e Monitoramento
         em Tempo Real
```

---

# 🌌 Conexão com a Indústria Espacial

O projeto está diretamente conectado ao tema da Global Solution por utilizar dados produzidos por satélites de observação da Terra.

As imagens do programa Copernicus permitem:

* Monitoramento ambiental;
* Análise da cobertura vegetal;
* Identificação de áreas degradadas;
* Avaliação de biomassa;
* Apoio à geração de créditos de carbono.

Sem a infraestrutura espacial, a solução proposta não seria possível.

---

# ⚡ Aplicação de Edge Computing

A Green-Trust Station aplica conceitos de Edge Computing ao realizar o processamento dos dados diretamente no dispositivo.

Em vez de depender de servidores remotos para interpretar as informações dos sensores, o Arduino realiza localmente:

* Leitura dos sensores;
* Processamento dos dados;
* Classificação de risco;
* Geração de alertas.

Essa abordagem reduz a latência e permite respostas imediatas diante de situações críticas.

---

# 🔧 Componentes Utilizados

| Componente      | Quantidade | Função                   |
| --------------- | ---------- | ------------------------ |
| Arduino Uno     | 1          | Unidade de processamento |
| Sensor DHT22    | 1          | Temperatura e umidade    |
| Display LCD I2C | 1          | Exibição das informações |
| LED Verde       | 1          | Status seguro            |
| LED Amarelo     | 1          | Estado de atenção        |
| LED Vermelho    | 1          | Situação crítica         |
| Buzzer          | 1          | Alerta sonoro            |
| Resistores 220Ω | 3          | Proteção dos LEDs        |

---

# 🔍 Lógica de Funcionamento

O sistema monitora continuamente a temperatura e a umidade do ambiente.

Com base nesses dados, classifica automaticamente o nível de risco.

## 🟢 Baixo Risco

Condições:

* Temperatura inferior a 30°C
* Umidade superior a 50%

Ações:

* LED Verde ativado
* Área considerada segura

---

## 🟡 Médio Risco

Condições:

* Temperatura entre 30°C e 40°C
* Ou umidade entre 30% e 50%

Ações:

* LED Amarelo ativado
* Monitoramento reforçado

---

## 🔴 Alto Risco

Condições:

* Temperatura superior a 40°C
* Umidade inferior a 30%

Ações:

* LED Vermelho ativado
* Buzzer acionado
* Alerta exibido no display

---

# 📟 Informações Exibidas

O display LCD apresenta:

* Temperatura atual;
* Umidade atual;
* Classificação de risco;
* Alertas operacionais.

Exemplo:

```text
Temperatura: 42°C
Umidade: 18%
RISCO ALTO
```

---

# 🎯 Justificativa Técnica das Escolhas

## Arduino Uno

Escolhido devido ao baixo custo, ampla documentação e facilidade de integração com sensores IoT.

## DHT22

Permite monitoramento simultâneo de temperatura e umidade com boa precisão para aplicações educacionais.

## LCD I2C

Facilita a visualização das informações operacionais sem necessidade de dispositivos externos.

## LEDs e Buzzer

Possibilitam feedback visual e sonoro imediato para situações críticas.

---

# 🌱 Objetivos de Desenvolvimento Sustentável

### ODS 13 – Ação Contra a Mudança Global do Clima

Monitoramento preventivo de áreas ambientais.

### ODS 10 – Redução das Desigualdades

Democratização do acesso a ferramentas de auditoria ambiental.

### ODS 2 – Agricultura Sustentável

Apoio à preservação de áreas produtivas e reflorestadas.

### ODS 9 – Indústria, Inovação e Infraestrutura

Integração entre tecnologias espaciais, IoT e Edge Computing.

---

# 📈 Benefícios da Solução

* Monitoramento ambiental em tempo real;
* Redução dos custos de auditoria;
* Identificação rápida de riscos ambientais;
* Maior confiabilidade para investidores;
* Inclusão de pequenos produtores no mercado de carbono;
* Escalabilidade para grandes áreas monitoradas.

---

# 🚀 Evoluções Futuras

Versões futuras poderão incluir:

* Sensor de fumaça (MQ-2);
* Sensor de qualidade do ar;
* Comunicação LoRa para áreas remotas;
* Integração direta com APIs de satélites;
* Inteligência Artificial para previsão de riscos;
* Dashboard online em tempo real.

---

# 🌎 Cenário Real de Uso

Um pequeno produtor rural possui uma área reflorestada utilizada para geração de créditos de carbono.

O Green-Trust monitora periodicamente essa área utilizando imagens Sentinel-2 e análise de NDVI.

Ao mesmo tempo, a Green-Trust Station permanece instalada no local coletando informações ambientais continuamente.

Caso condições favoráveis a incêndios sejam identificadas, um alerta é gerado imediatamente.

Dessa forma, o produtor pode agir rapidamente para proteger sua área, preservar seus créditos de carbono e evitar prejuízos financeiros.

---

# 🏆 Diferenciais da Solução

O Green-Trust Station não é apenas um sistema de monitoramento ambiental.

Ele integra em uma única solução:

* Dados orbitais;
* Sensoriamento remoto;
* Edge Computing;
* Internet das Coisas (IoT);
* Sustentabilidade;
* Mercado de créditos de carbono.

Essa integração torna a solução inovadora, escalável e alinhada aos desafios atuais da economia verde.

---

# 📚 Tecnologias Utilizadas

* Arduino Uno
* Linguagem C++
* Wokwi Simulator
* Sensores IoT
* Edge Computing
* Python
* NDVI
* Sensoriamento Remoto
* Copernicus Sentinel-2
* Dashboard Web

---

# ✅ Conclusão

O Green-Trust Station demonstra como tecnologias espaciais e computação embarcada podem trabalhar em conjunto para resolver problemas reais relacionados à sustentabilidade e à confiança no mercado de créditos de carbono.

Ao unir monitoramento orbital e monitoramento local em tempo real, a solução oferece uma abordagem moderna, acessível e escalável para auditoria ambiental contínua, contribuindo para a preservação dos recursos naturais e para o fortalecimento da economia verde.
