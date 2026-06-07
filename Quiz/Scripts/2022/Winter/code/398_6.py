try:
    a,b,c=0,1,7
    def h(a):
        a=1
        b*=1
        c=2
        return a+b+c
    
    a,b,c=8,6,0
    print(h(b),a,b,c)
    
except: print('error')
