try:
    a,b,c=8,3,1
    def g(b):
        global c
        a=4
        b*=2
        c=3
        return a+b+c
    
    a,b,c=7,0,5
    print(g(b),a,b,c)
    
except: print('error')
