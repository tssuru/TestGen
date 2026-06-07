try:
    
    a,b,c=8,7,8
    def g(a,b,c=9):
        print(a,b,c,end="")
    
    g(a=2,1,c=3)
    print(a,b,c)
    
except: print('error')
