<p>
Grafo pode ser representado utilizando N threads, não se limitando apenas à 2, portanto, o grafo de dependências pode ter quantas "ramificações" forem precisas, lembrando que foi projetado visando o bom senso no uso do programa, logo, nessa versão do programa utilizando Pthreads não foi tratado caso o número de Threads especificada na variável NUM_THREADS seja maior do que o número da serie de Taylor à ser computada, pois o programa ainda irá mudar, então fazer uma mudança de controle tão especifica é desnecessária até o momento. 

<ul><li>O <b>SpeedUp</b> Analisado com Taylor(1000) é praticamente nulo por se tratar de um número relativamente pequeno, para a análise do tempo de execução foi utulizado (após a compilação gcc via terminal) o comando: <i><b>time ./nomeArquivo.exe</b></i></li></ul>
</p> 

<h2>Grafo</h2>
<img src="https://github.com/Victor-de-Marqui121/computa-o-paralela/blob/main/Exerc%C3%ADcios%2004%20-%20Modelo%20de%20tarefas/PThreads/grafoPThread.png?raw=true">
