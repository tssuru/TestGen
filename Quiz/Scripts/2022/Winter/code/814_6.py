try:
    a,b,c=3,5,5
    def h(b):
        a=2
        b+=4
        c=5
        return a+b+c
    
    a,b,c=4,9,8
    print(h(b),a,b,c)
    
except: print('error')
