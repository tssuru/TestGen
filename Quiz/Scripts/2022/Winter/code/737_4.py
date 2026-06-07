try:
    def g(a,b):
        c=87
        if b:
            c=7
        elif a<-5:
             return 1
        else: 
            c=2
        return c
    
    print(g(-7,2))
    
except: print('error')
