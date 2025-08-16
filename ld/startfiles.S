
// startfiles.S 

.extern run

.global main 

main: 
        call run
        xor    %eax,%eax
        ret