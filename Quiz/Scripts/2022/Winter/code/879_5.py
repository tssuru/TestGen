try:
    
    a,b,c=6,8,9
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(c=5,a=2,b=4)
    print(a,b,c)
    
except: print('error')
