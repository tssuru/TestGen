try:
    
    a,b,c=6,9,8
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(3,c=1,b=2)
    print(a,b,c)
    
except: print('error')
