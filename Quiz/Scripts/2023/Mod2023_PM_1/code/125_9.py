try:
    a,b,c=1,9,4
    def h(b):
        a=5
        b+=2
        c=1
        return a+b+c
    
    a,b,c=2,5,6
    print(h(b),a,b,c)
    
except: print('error')
