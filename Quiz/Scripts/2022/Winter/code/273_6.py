try:
    a,b,c=2,9,1
    def h(b):
        a=1
        b+=2
        c=3
        return a+b+c
    
    a,b,c=5,7,8
    print(h(b),a,b,c)
    
except: print('error')
