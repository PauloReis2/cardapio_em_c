# Mini-Cardápio em C

Um sisteminha de console simples que fiz em Linguagem C para treinar lógica, manuseio de `struct`, vetores e aquela eterna briga com o buffer do teclado.

O projeto é focado em resolver um problema real de fluxo: cadastrar itens (com código, preço e nome) e listar tudo bonitinho no terminal sem deixar o `scanf` e o `fgets` se estranharem na hora de ler os dados.

## O que tem no código?

- **Cadastro de pratos:** Guarda código, preço e nome.
- **Listagem:** Mostra os itens que você foi salvando.
- **Controle de limite:** Impede de estourar o vetor se passar do teto máximo de pratos.
- **Menu em looping:** Roda em um do-while com switch-case até você decidir sair.
