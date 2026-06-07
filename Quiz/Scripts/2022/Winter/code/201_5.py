try:
    
    a,b,c=6,9,8
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(b=2,c=3,a=5)
    print(a,b,c)
    
except: print('error')
