# 🗳️ Sistema de Votação em C (Simulador de Urna Eletrônica)

Projeto desenvolvido em linguagem C para simular o funcionamento lógico de uma urna eletrônica, com foco no aprendizado de algoritmos, resolução de problemas e estruturas de dados fundamentais.

---

## 👨‍💻 Sobre o Projeto & Motivação
Sou estudante de **Análise e Desenvolvimento de Sistemas na Universidade Estácio de Sá**. Criei este projeto com a intenção de praticar a construção incremental de software (em fases), aprimorando meu raciocínio lógico, depuração de código e versionamento com Git.

---

## 🚀 Status do Projeto & Roadmap
- [x] **Fase 1:** Lógica inicial básica (leitura e comparação com `if / else if / else`)
- [x] **Fase 2:** Contadores de votos individuais, voto em branco (`0`), voto nulo, laço contínuo (`while`) e apuração final
- [x] **Fase 3:** Confirmação de voto (regras de `CONFIRMA` / `CORRIGE`) e limpeza de tela entre eleitores
- [ ] **Fase 4:** Refatoração da arquitetura usando `struct` e vetores (`arrays`) para múltiplos candidatos
- [ ] **Fase 5:** Emissão de Boletim de Urna completo com cálculo percentual de votos válidos

---

## 🕹️ Como Funciona a Urna (Fase Atual)
Durante a votação, o terminal solicita o voto de cada eleitor:
* Digite **`Numero`**: Voto no Candidato 1
* Digite **`Numero`**: Voto no Candidato 2
* Digite **`0`**: Voto em Branco
* Qualquer outro número positivo: **Voto Nulo**
* Digite **`-1`**: Encerra a eleição e emite o resultado da apuração

--- 

## 🧠 Conceitos de Programação Praticados
* Variáveis e tipos de dados primitivos (`int`)
* Operadores relacionais e lógicos (`==`, `!=`, `=`)
* Estruturas condicionais (`if`, `else if`, `else`)
* Laços de repetição contínuos (`while (1)` e controle com `break`)
* Acumuladores e operadores de incremento (`++`)
* Boas práticas de versionamento com Git e `.gitignore`

---

## 🛠️ Como Compilar e Executar

Caso queira testar o projeto localmente:

1. Clone o repositório:
   ```bash
   git clone https://github.com/SEU_USUARIO/SEU_REPOSITORIO.git