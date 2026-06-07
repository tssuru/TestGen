try:
    a,b,c=3,1,0
    def h(a):
        a=1
        b+=4
        c=2
        return a+b+c
    
    a,b,c=3,8,7
    print(h(b),a,b,c)
    
except: print('error')
