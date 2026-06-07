try:
    
    a,b,c=6,9,8
    def g(a,b,c=7):
        print(a,b,c,end="")
    
    g(0,5,a=1)
    print(a,b,c)
    
except: print('error')
