try:
    def f(a,b):
        c=99
        if a>2:
            return 3
        elif a<-4:
             c=9
        else: 
            c=7
        return c
    
    print(f(-7,-9))
    
except: print('error')
