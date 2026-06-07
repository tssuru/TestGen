try:
    a,b,c=8,6,0
    def g(b):
        a=4
        b-=2
        c=1
        return a+b+c
    
    a,b,c=5,4,7
    print(g(b),a,b,c)
except: print('error')
