try:
    a,b,c=5,4,7
    def h(a):
        a=2
        b+=5
        c=3
        return a+b+c
    
    a,b,c=8,3,0
    print(h(b),a,b,c)
    
except: print('error')
