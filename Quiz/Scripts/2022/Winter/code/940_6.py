try:
    a,b,c=7,4,6
    def g(b):
        a=3
        b+=5
        c=1
        return a+b+c
    
    a,b,c=8,5,0
    print(g(b),a,b,c)
    
except: print('error')
