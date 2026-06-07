try:
    
    a,b,c=9,6,8
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(a=5,3,b=1)
    print(a,b,c)
    
except: print('error')
