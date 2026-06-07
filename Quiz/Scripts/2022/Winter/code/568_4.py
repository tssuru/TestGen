try:
    def f(a,b):
        c=22
        if b:
            return 1
        elif a<-5:
             return 6
        else: 
            c=2
        return c
    
    print(f(8,9))
    
except: print('error')
