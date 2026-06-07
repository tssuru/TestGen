try:
    
    a,b,c=6,8,9
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(a=2,0,b=5)
    print(a,b,c)
    
except: print('error')
