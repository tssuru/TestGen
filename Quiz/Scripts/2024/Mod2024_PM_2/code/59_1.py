try:
    a,b,c=6,7,7
    def h(a):
        a=2
        b*=3
        c=4
        return a+b+c
    
    a,b,c=8,9,0
    print(h(b),a,b,c)
    
except: print('error')
