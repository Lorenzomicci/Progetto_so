# Progetto_so
swordx
Descrizione
Sviluppare una applicazione di sistema Unix/Linux chiamata swordx che sia in grado di leggere un insieme di file (di testo) da una o più sorgenti e che produca in output un tile di testo contenente la lista delle parole (ordinate in ordine alfabetico) che occorrono nei file letti con la relativa occorrenza. Per parola si intende ogni sequenza costituita da soli caratteri alfanumerici (caratteri o lettere). Le parole non sono sensibili al maiuscolo.

La sinossi del programma è:

swordx [options] [inputs]

Dove [inputs] è una sequenza di file e/o directory, mentre [options] sono una sequenza di parametri riportati sotto.

Dettagli
Step 1
Il programma è in grado di trattare invocazioni del tipo:

swordx path/file

Il risultato dell'elaborazione è salvata nel file swordx.out salvato nella directory corrent.

Esempio: Ricevuto in input il file test.txt viene prodotto il seguente file swordx.out.

Step 2
Come input può essere passata una directory:

swordx path/directory

In questo caso il file swordx.out conterrà le statistiche ottenute elaborando tutti i file (regolari) contenuti nella directory. Nell'analisi, quindi, vengono esclusi i link e le directory.

Step 3
E' possibile richiamare swordx passando più input:

swordx <input1> <input2> … <inputn>

Viene generato un singolo file swordx.out contenente le statistiche collezionate.

Step 4
E' possibile indicare il nome del file dove devono essere salvate le statistiche collezionate:

swordx –output <file> [inputs] swordx -output <file> [inputs]

Le statistiche collezionate vengono salvate nel file <file>.

Step 5
E' possibile passare a swordx i seguenti parametri aggiuntivi:

–help e -h: stampa a video l'help del programma;
–recursive e -r: se viene passato questo argomento, nella collezione delle informazioni di una directory vengono seguite tutte le sottodirectory;
–follow e -f: nell'elaborazione di una directory vengono seguiti i link;
–explude <file> e -e <file>: <file> non viene considerato nell'elaborazione (questo parametro ha senso solo se si sta elaborando una directory);
–alpha e -a: vengono considerate nella statistica solo le parole contenenti caratteri alfabetici;
–min <num> e -m <num>: vengono considerate nella statistiche solo le parole con una lunghezza maggiore o uguale a <num>;
–ignore <file> e -i <file>: <file> è un elenco di parole (una per riga) che vengono ignorate nella statistica;
–sortbyoccurrency e -sbo: le parole vengono inserite nel file di output ordinate per numero di occorrenze.
Step 6
Consentire di specificare valori parametri di input usando espressioni regolari.
