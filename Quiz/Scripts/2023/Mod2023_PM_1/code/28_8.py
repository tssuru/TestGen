try:
    def h(a,b):
        c=16
        if b:
            c=5
        elif a!=4:
             c=8
        else: 
            return 1
        return c
    
    print(h(4,8))
    
except: print('error')
