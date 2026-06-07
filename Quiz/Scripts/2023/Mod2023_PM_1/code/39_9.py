try:
    a,b,c=4,2,8
    def h(b):
        a=4
        b+=1
        c=3
        return a+b+c
    
    a,b,c=3,2,0
    print(h(b),a,b,c)
    
except: print('error')
