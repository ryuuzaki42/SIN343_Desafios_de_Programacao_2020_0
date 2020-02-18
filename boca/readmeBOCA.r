
## BOCA - BOCA Online Contest Administrator
    O BOCA é um sistema de apoio a competições de programação desenvolvido para ser usado
    na Maratona de Programação da Sociedade Brasileira de Computação. O sistema é usado também
    no apoio a disciplinas em que se faça uso de submissão e correção de trabalhos durante as aulas.

## UFV - CRP - BOCA
    http://200.17.76.19/boca/

    http://200.17.76.28/boca/

    https://www.ime.usp.br/~cassio/boca/

    http://maratona.ime.usp.br/manualBOCA.html

    http://maratona.ime.usp.br/index19.html

    http://maratona.ime.usp.br/antigas19.html

    https://github.com/maratona-linux/

    https://github.com/maratona-linux/maratona-linux/wiki/The-ICPC-Latam-Maratona-Linux

## Erros
    ## Problema erro de submissão - (PROBLEM PACKAGE SEEMS INVALID)
    https://groups.google.com/forum/#!topic/boca-users/XqvjEOz2VfM

    O problema no pacote é que ele esta dentro de um diretorio teste dentro do zip.
    Os arquivos devem estar na raiz do zip.
    Tente compacta-lo novamente sem incluir o diretorio original no inicio.

    $ cd pacote
    $ ls
        compare     compile     description input       limits      output
        run         tests
    $ zip -r ../pacote.zip * 

    ## Problema com (WHILE COMPILING) Time Limit Exceeded
    https://groups.google.com/forum/#!topic/boca-users/3NR2jMzlTI0

    Tempo limite de compilação do Java estava muito pequeno.
    Utilize os script de criação do um problema do BOCA.

## Corres
Red FF0000
Orange FFA500
White FFFFFF
Black 000000
Blue 0000FF
Green 00FF00
Yellow FFFF00
Brown 964B00
Gray BEBEBE
Pink FF1493
