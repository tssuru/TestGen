try:
    def h(a,b):
        c=85
        if b<=3:
            return 5
        elif a<0:
             c=2
        else: 
            c=9
        return c
    
    print(h(8,-5))
    
except: print('error')
