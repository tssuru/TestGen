try:
    
    a,b,c=7,6,8
    def g(a,b=9,c=7):
        print(a,b,c,end="")
    
    g(c=5,b=1,a=5)
    print(a,b,c)
    
except: print('error')
