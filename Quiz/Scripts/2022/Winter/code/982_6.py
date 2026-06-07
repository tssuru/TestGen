try:
    a,b,c=0,3,7
    def h(a):
        a=4
        b+=2
        c=2
        return a+b+c
    
    a,b,c=5,9,0
    print(h(b),a,b,c)
    
except: print('error')
