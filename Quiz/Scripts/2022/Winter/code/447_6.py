try:
    a,b,c=9,0,5
    def g(b):
        a=5
        b*=3
        c=4
        return a+b+c
    
    a,b,c=8,6,4
    print(g(b),a,b,c)
    
except: print('error')
