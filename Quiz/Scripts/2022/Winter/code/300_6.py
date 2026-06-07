try:
    a,b,c=4,1,6
    def h(a):
        a=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=5,3,0
    print(h(b),a,b,c)
    
except: print('error')
