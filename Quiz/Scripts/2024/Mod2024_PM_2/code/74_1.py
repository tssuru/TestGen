try:
    a,b,c=0,3,7
    def h(a):
        a=4
        b+=2
        c=5
        return a+b+c
    
    a,b,c=4,8,2
    print(h(b),a,b,c)
    
except: print('error')
