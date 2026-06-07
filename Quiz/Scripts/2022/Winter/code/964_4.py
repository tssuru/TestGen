try:
    def g(a,b):
        c=95
        if b!=-1:
            c=6
        elif a<=2:
             return 4
        else: 
            c=1
        return c
    
    print(g(-3,4))
    
except: print('error')
