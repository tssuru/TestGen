try:
    a,b,c=0,6,9
    def h(b):
        a=4
        b+=1
        c=5
        return a+b+c
    
    a,b,c=1,5,8
    print(h(b),a,b,c)
    
except: print('error')
