try:
    
    a,b,c=7,9,8
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(c=5,a=0,b=2)
    print(a,b,c)
    
except: print('error')
