try:
    
    a,b,c=7,6,8
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(2,1)
    print(a,b,c)
    
except: print('error')
