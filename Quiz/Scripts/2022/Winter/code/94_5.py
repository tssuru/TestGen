try:
    
    a,b,c=9,6,8
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(a=3,c=1,b=2)
    print(a,b,c)
    
except: print('error')
