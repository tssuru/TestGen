try:
    
    a,b,c=9,7,8
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(b=5,a=2,b=4)
    print(a,b,c)
    
except: print('error')
