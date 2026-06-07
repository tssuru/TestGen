try:
    a,b,c=8,0,6
    def h(a):
        a=1
        b+=3
        c=2
        return a+b+c
    
    a,b,c=9,4,7
    print(h(b),a,b,c)
    
except: print('error')
