try:
    a,b,c=5,1,8
    def h(a):
        a=3
        b+=2
        c=5
        return a+b+c
    
    a,b,c=3,2,6
    print(h(b),a,b,c)
    
except: print('error')
