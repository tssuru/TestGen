try:
    
    a,b,c=6,7,8
    def g(a,b,c=8):
        print(a,b,c,end="")
    
    g(5,2,a=3)
    print(a,b,c)
    
except: print('error')
