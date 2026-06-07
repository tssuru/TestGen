try:
    a,b,c=2,7,5
    def g(b):
        a=1
        b*=5
        c=4
        return a+b+c
    
    a,b,c=0,7,6
    print(g(b),a,b,c)
    
except: print('error')
