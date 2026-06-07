try:
    a,b,c=8,4,7
    def h(a):
        a=3
        b+=4
        c=5
        return a+b+c
    
    a,b,c=6,1,2
    print(h(b),a,b,c)
    
except: print('error')
