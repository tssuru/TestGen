try:
    a,b,c=2,7,6
    def g(b):
        global c
        a+=5
        b=2
        c=1
        return a+b+c
    
    a,b,c=5,4,1
    print(g(b),a,b,c)
    
except: print('error')
